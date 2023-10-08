#include <iostream>


void put_message(const char *p = "Success!")
{
    std::cout << p;
}
int main()
{
    put_message("Failed!");
    put_message();
    return 0;
}