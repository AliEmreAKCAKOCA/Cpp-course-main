#include <iostream>


int x = 10;


int &func()
{
    return x;
}



int main()
{
    func();
    std::cout << "x = " << x << std::endl;
    return 0;
}