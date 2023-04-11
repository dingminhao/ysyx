#include "./include/simMem.h" 

#include <sys/time.h>
#include <time.h>

/* 默认程序 */
const uint32_t init_img[] = {
    0x00000297,  //auipc t0,0
    0x00800513,  //li a0, 8
    0x30552073,  
    0x00100513,  //li a0, 9
    0x30552073,  
    0x00000297,  //auipc t0, 0
    0x00100073   //ebreak
};

SimMem::SimMem() {
    cout << "npc内存初始化" << endl;
}

SimMem::~SimMem() {
    cout << "npc内存销毁" << endl;
}
/**
 * @brief 地址映射
 * 将 0x80000000 映射到数组 pmem 0号位置
 * @param paddr 
 * @return uint8_t* 
 */
uint8_t* SimMem::guest_to_host(paddr_t paddr) {
    return pmem + paddr - MEMBASE;

}

/**
 * @brief 地址反向映射 目前不大懂！！！
 * 
 * @param haddr 
 * @return paddr_t 
 */
paddr_t SimMem::host_to_guest(uint8_t* haddr) {
    return haddr - pmem + MEMBASE;
}

/**
 * @brief 读取内存中的数据 
 * 
 * @param addr 读取数据的地址（已经转化过）
 * @param len  读取数据的长度
 * @return word_t 
 */
word_t SimMem::host_read(void* addr, int len) {
    switch (len) {
        case 1:
            return *(uint8_t*)addr;
        case 2:
            return *(uint16_t*)addr;
        case 4:
            return *(uint32_t*)addr;
        case 8:
            return *(uint64_t*)addr;
        default:
            cout << "host_read len is Wrong!"<<endl;
            return 0;
    }
}


void SimMem::host_write(void* addr, int len, word_t data) {
    switch(len) {
        case 1: 
            *(uint8_t*)addr = data;
        case 2:
            *(int16_t*)addr = data;
        case 4:
            *(int32_t*)addr = data;
        case 8:
            *(int64_t*)addr = data; 
        default:
            break;
    }
}

word_t SimMem::pmem_read(paddr_t addr, int len) {
    word_t ret = host_read(guest_to_host(addr), len);
    return ret;

}

void SimMem::pmem_write(paddr_t addr, int len, word_t data) {
    host_write(guest_to_host(addr), len, data);
}

/**
 * @brief 判断改地址是否在内存中
 * 
 * @param addr 
 * @return true 
 * @return false 
 */
bool SimMem::in_pmem(paddr_t addr) {
    return (addr >= MEMBASE) && (addr - MEMSIZE < (paddr_t)MEMBASE);
}

/**
 * @brief 当内存不在范围内输出
 * 
 * @param addr 
 */
void SimMem::out_of_bound(paddr_t addr) {
    cout << "addr:\t" << hex << addr << "not in pmem!" << endl;
}

word_t SimMem::paddr_read(paddr_t addr, int len) {
    if(in_pmem(addr)) {
        return pmem_read(addr, len);
    }
    out_of_bound(addr);
    return 0;
}


void SimMem::paddr_write(paddr_t addr, int len, word_t data) {
    if(in_pmem(addr)) {
        pmem_write(addr, len, data);
        return;
    }
    out_of_bound(addr);
}

/**
 * @brief 得到bin文件中指令的大小
 * 
 * @param img 
 * @return size_t 
 */
size_t SimMem::getImgSize(const char* img) {
    struct stat statbuf;
    int ret = stat(img, &statbuf);
    if(ret == 0) {
        size_t filesize = statbuf.st_size;
        return filesize;
    }
    return sizeof(init_img);
}

/**
 * @brief 读取镜像文件的所有指令
 * 
 * @param img 
 * @return true 
 * @return false 
 */
bool SimMem::loadImage(const char* img) {
    ifstream binaryimg;
    size_t img_size = getImgSize(img);
    binaryimg.open(img, ios::in | ios::binary);
    if (!binaryimg.is_open() | img_size == -1) {
        memcpy(pmem, init_img, sizeof(init_img));
        cout << "load default img" << endl;
        return true;
    }
    cout << "imgsize:" << img_size << endl;
    binaryimg.read((char*)pmem, img_size);
    return true;
}


paddr_t SimMem::getMEMBASE() {
    return MEMBASE;
}




