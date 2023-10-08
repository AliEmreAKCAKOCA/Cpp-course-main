#include <iostream>


void put_message(int p=5)
{
    std::cout << p;
}
int main()
{
    put_message(18);
    put_message();
    return 0;
}