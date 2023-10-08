#include <iostream>


struct  Nokta{

    int x,y;
};


typedef int* pInt;
typedef int dizi[5];


int main()
{
    Nokta n;
    n.x=3,
    n.y=5;

    std::cout<<sizeof(Nokta)<<'\n';

    ///

    Nokta* pnokta; /// buralarda pointer kullanımı
    pnokta=new Nokta();
    pnokta->x=6;

    std::cout<<pnokta->x<<'\n'; 



    int* array;

    pInt ptr;
    dizi d={1, 2, 3, 4, 5};

    d[4]=5;

    pInt ptr2;

    ptr2=&d[0];

    ptr=new int();
    std::cout<<d[4]<<"   *ptr2=  "<<*ptr2<<'\n';


    const int c=5;
    const int dd=7;
    constexpr int a=c*dd+3;  // burada üst satırda tanımlanan c ve dd lerin başındaki const u kalduırdığın zamna hata verecektir

    
    return 0;


}