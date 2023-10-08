#include <iostream>


struct  Nokta{

    int x,y;
};


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



}