#include <iostream>
void foo(int x = 10, int y = 20);
void foo(int x, int y)
{
    std::cout <<"x = " << x << '\t' << "y = " << y << std::endl;
}
int main()
{
    foo(); // x = 10  y = 20
    foo(100); // x = 100 y = 20
    foo(100, 200); // x = 100 y = 200
    return 0;
}


/*


void func(int x = 10, int y);       //Geçersiz
void foo(int x, int y = 20);        //Geçerli



*/