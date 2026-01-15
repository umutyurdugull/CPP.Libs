#include "StringPool.h"

char* StringPool::poolMemory = nullptr;
size_t StringPool::offset = 0;
size_t StringPool::totalSize = 0;

void StringPool::Init(size_t size) {
    totalSize = size;
    poolMemory = new char[totalSize];
    offset = 0;
    std::cout << "Pool" << size << "\n";
}

char* StringPool::Alloc(size_t size) {
    if (poolMemory == nullptr) { 
        std::cout << "[ERROR] Pool not initialized!\n";
        return nullptr;
    }

    if (offset + size > totalSize) {
        std::cout << "Pool is full\n";
        return nullptr;
    }

    char* ptr = poolMemory + offset;
    offset += size;
    std::cout << "[POOL] " << size << " bytes given.\n";
    return ptr;
}

void StringPool::CleanUp() {
    delete[] poolMemory;
    poolMemory = nullptr;  
    offset = 0;            
    totalSize = 0;         
    std::cout << "Pool cleared.\n";
}