#include "LibStr.h"
#include "StringPool.h"

int main() {

    // ===== Test 1: Normal Kullaným =====
    std::cout << "===== Test 1: Normal Kullanim =====\n";
    StringPool::Init(50); 
    
    LibStr name("Umut");
    LibStr kopya = name;

    name.print();
    kopya.print();

    kopya[0] = 'u';
    kopya.print();

    std::cout << "\n===== Test 2: Pool Temizlendi =====\n";
    StringPool::CleanUp();

    name.append("A");
    name.print();  

    std::cout << "\n===== Test 3: Pool Yeniden Baslatildi =====\n";
    StringPool::Init(30);
    
    LibStr yeniIsim("Ahmet");
    yeniIsim.print();
    yeniIsim.append(" Can");
    yeniIsim.print();

    std::cout << "\n===== Test 4: Pool Doldu =====\n";
    StringPool::CleanUp();
    StringPool::Init(5);  // Sadece 5 byte
    
    LibStr kucukPool("Merhaba");  // 8 byte gerekiyor - baþarýsýz olacak
    
    StringPool::CleanUp();

    return 0;
}