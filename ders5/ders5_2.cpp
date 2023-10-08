#include <iostream>
// aşağıdaki fonksiyonunn dönüş değeri 10 elmanlıu bir dizinin adrsi şeklindedir 


int a[10]{};

auto foo()->int(*)[10]
{

    

    std::cout<<"10 elamanlıa dizisinin adresi = "<<&a;

    return &a;

}

int main()
{

    foo();
}
