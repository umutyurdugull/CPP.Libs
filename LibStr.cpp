#include "LibStr.h"
#include <cstring> 
#include "StringPool.h"

// Constructor
LibStr::LibStr(const char* str)
{
    len = std::strlen(str);
    data = StringPool::Alloc(len + 1);
    std::strcpy(data, str);
}


// Destructor
LibStr::~LibStr()
{

}

// Copy Constructor
LibStr::LibStr(const LibStr& other) {
    len = other.length();
    data = StringPool::Alloc(len + 1);
    std::strcpy(data, other.data);
}

// Assignment Operator
LibStr& LibStr::operator=(const LibStr& other) 
{
    if (this == &other)
    {
        return *this;
    }

    len = other.len;
    data = StringPool::Alloc(len + 1);
    std::strcpy(data, other.data);


/*
    Dear programmer,
        I cannot write clean code.
        When I started working on this project on my old computer, only God and I knew how it worked.
        Now, only God knows.
        If you find a memory leak or think you can optimize it,
        please don't try to optimize it
        Unless you're suicidal.
    */





    return *this;
}

// Operator []
char& LibStr::operator[](int index)
{
    return data[index];
}

void LibStr::print() const {
    std::cout << data << std::endl;
}
