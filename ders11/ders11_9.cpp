#include <iostream>

class ali
{
    public:
    void func()
    {
        std::cout<<"func this ="<<this<<std::endl;
        foo();


    }

    void foo()
    {
        std::cout<<"this = "<<this<<std::endl;


    }


};



int main()
{
    ali emre;

    std::cout<<"& emre "<<&emre<<std::endl;
    emre.func();




}