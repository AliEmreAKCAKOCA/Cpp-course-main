#include <iostream>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0];
    //int *p = a;
    *p = 10;
    ++p;
    *p = 20;
    std::cout << a[0] << " " << a[1]<<"  "<<a[2];
    return 0;
    
}