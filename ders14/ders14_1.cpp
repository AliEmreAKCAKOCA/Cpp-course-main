#include <iostream>



class Myclass
{
    private:
        int ma, mb;
    public:
        Myclass(int a, int b): mb(10), ma{a*b}
        {
            std::cout<<"mb ="<<mb<<" ma = "<<ma<<" a= "<<a<<"  b= "<<b<<std::endl;

        }


};



int main()
{

    Myclass x(5,10);




}
