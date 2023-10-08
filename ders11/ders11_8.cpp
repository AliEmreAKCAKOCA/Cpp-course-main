#include <iostream>

class Alpo
{
private:
    int mx;
    void foo(int x);
public:
    void foo(double x);

    void bar()
    {
        foo(12);
        foo(12.2);


    }
    

    
};
// access kontrol en son yapılırı tipik mülakat sorusu
void Alpo::foo(int x)
{
    std::cout<<"deger  foo(int)= "<<x<<std::endl;


}

void Alpo::foo(double x)
{
    std::cout<<"deger foo(double) = "<<x<<std::endl;    
}


int main()
{
    Alpo ax;

    ax.bar();

}
