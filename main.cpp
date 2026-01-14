#include"LibStr.h"
#include"StringPool.h"

int main(){
    
    StringPool::Init(1024 * 1024);
    LibStr name("Umut");
    LibStr kopya = name;

    name.print();
    kopya.print();

    kopya[0] = 'u';
    kopya.print();

    StringPool::CleanUp();
    return 0;
}
