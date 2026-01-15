#ifndef LIBSTR_H
#define LIBSTR_H 

#include <iostream>

class LibStr {

private:
    char* data;
    unsigned int len;

public:
    LibStr(const char* str = "");

    LibStr& operator=(const LibStr& other);

    ~LibStr();

    LibStr(const LibStr& other);
    LibStr& append(const char* str);
    void print() const;
    char& operator[](int index);
    unsigned int length() const { return len; }
};

#endif