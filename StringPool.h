#ifndef STRINGPOOL_H
#define STRINGPOOL_H

#include <iostream>

class StringPool {
private:
    static char* poolMemory;
    static size_t offset;
    static size_t totalSize;

public:
    static void Init(size_t size);
    static char* Alloc(size_t size);
    static void CleanUp();
};

#endif