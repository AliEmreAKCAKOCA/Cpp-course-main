// ders35_5.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
#include <exception>

class A {
public:

    A()
    {
        std::cout << this << "  adresindeki A nesnesi kaynaklar edindi \n";
    }

    ~A()
    {
        std::cout << this << "  adresindeki A nesnesi kaynaklar geri verildi \n";
    }

};

class B {
public:

    B()
    {
        std::cout << this << "  adresindeki B nesnesi kaynaklar edindi \n";
    }

    ~B()
    {
        std::cout << this << "  adresindeki B nesnesi kaynaklar geri verildi \n";
    }

};

class C {
public:

    C()
    {
        std::cout << this << "  adresindeki C nesnesi kaynaklar edindi \n";
    }

    ~C()
    {
        std::cout << this << "  adresindeki C nesnesi kaynaklar geri verildi \n";
    }

};


void f4()
{
    A a1;
    B b1;
    
}


void f3() {

    C c1;
    f4();

}

void f2()
{
    A ax; B bx; C cx;
    f3();

}

void f1()
{
    B b1, b2, b3;
    f2();

}

int main()
{
    f1();
}
