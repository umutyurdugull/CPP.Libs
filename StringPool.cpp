#include "StringPool.h"

char* StringPool::poolMemory = nullptr;
size_t StringPool::offset = 0;
size_t StringPool::totalSize = 0;

void StringPool::Init(size_t size) {
    totalSize = size;
    poolMemory = new char[totalSize]; 
    offset = 0;
    std::cout << "[POOL] " << size << "\n";
}

char* StringPool::Alloc(size_t size) {
    if (offset + size > totalSize) {
        std::cout << "[HATA] Havuz dolu\n";
        
        return nullptr;
    }

    char* ptr = poolMemory + offset;
    offset += size;
    // std::cout << "[POOL] " << size << " byte verildi.\n"; 
    return ptr;
}

void StringPool::CleanUp() {
    delete[] poolMemory; 
    std::cout << "[POOL] temizlendi.\n";
}