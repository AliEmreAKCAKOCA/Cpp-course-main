#include <iostream>


class Complex {
    double real, imag;
    public:
    Complex(double, double = 0);
    void display();
};

Complex::Complex(double r, double i)
{

    real=r;
    imag=i;

}

void Complex::display()
{
    std::cout<<real;
    if(imag!=0)
        std::cout<<"+"<<imag;
    std::cout<<std::endl;


}


int main()
{
    Complex c1(10);
    c1.display();

    Complex c2(10,20);
    c2.display();


    return 0;
}