#include <iostream>
using namespace std;
void foo(int &r)
{
    cout << "void foo(int &)" << endl;
}
void foo(int x)
{
    cout << "void foo(int)" << endl;
}
int main()
{
    int a = 20;
    //foo(a);çift anlamlılık hatası
    foo(5);//void foo(int);





}