#include <iostream>

// unspecified behavior yanlışlığı


int g=9;

int foo()
{
    g=999;
}

int bar()
{
    g=11;
}

int main()
{

    int x=foo()+5*bar();// hangi fonksiyonun önce çağrıldığına göre sonuç değişir ve hangi fonksiyonun önce çağırıldığını bilemiyoruz

    std::cout<<x;
}