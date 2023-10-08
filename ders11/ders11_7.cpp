#include <iostream>

class Alpo
{
private:
    int mx;
    void bar(int x);
public:
    void foo(int x);
    

    
};
// access kontrol en son yapılırı tipik mülakat sorusu
void Alpo::foo(int x)
{
    std::cout<<"degerc = "<<x<<std::endl;
    x=25;
    bar(x);

}

void Alpo::bar(int x)
{

    std::cout<<"x in bar fonksiyonu içindeki değerei = "<<x<<std::endl;    
}


int main()
{
    Alpo ax;

    ax.foo(12);


}
