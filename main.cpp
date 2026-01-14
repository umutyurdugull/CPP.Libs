#include"LibStr.h"
#include"StringPool.h"

int main(){
    
    // StringPool::Init(2* 2);
    //pool is full error
    
    StringPool::Init(4*4);

    LibStr name("Umut");
    LibStr kopya = name;

    name.print();
    kopya.print();

    kopya[0] = 'u';
    kopya.print();

    StringPool::CleanUp();
    return 0;
}
