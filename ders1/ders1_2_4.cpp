# include<iostream>
using namespace std;

void func(const int *p)
{
    
    cout<<*p<<endl;

}


int main()
{
    int x=108;
    int* ptr=&x;


   // cout<<*ptr<<endl;

    int* dp;

    dp=ptr;// bu bir hatatır pointerlar için 

    

    int y=10;

    func(&y);

    return 0;
}