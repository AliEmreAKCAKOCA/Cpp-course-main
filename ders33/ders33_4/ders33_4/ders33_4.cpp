// ders33_4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


class Base {
public:
    virtual void vfunc();

};

class Der :public Base {//private olsa upcasting yapamaz
public:
    void vfunc() override;

    friend void g1(); //denirse private Base olsa bile erişebilir upcasting yapar

};

void foo(Base& r)
{
    r.vfunc();
}


void  g1()
{
    Der myder;
    //foo(myder); // yapabilir
}

void  g2()
{
    Der myder;
}

void  g3()
{
    Der myder;
}

int main()
{
    std::cout << "Hello World!\n";
}
