#include <iostream>
int g = 20;
void func(int &r = g);
int main()
{
    int y = 30;
    func();
    func(y);
    return 0;
}
void func(int &r)
{
    std::cout << r << std::endl;
}