# include<iostream>
#include<stddef.h>
using namespace std;




int x,y,z;
int main()
{
    
   int x=24;
   int y=26;

   int* p1=&x;
   int* p2=&y;



    cout<<"p1 = "<<&x<<endl;
    cout<<"p2 = "<<&y<<endl;

    
    



    int** ptr =&p1;
    cout<<"ptr = "<<&p1<<endl;

    ptr=&p2;
    cout<<"ptr = "<<ptr<<endl;
    
    *ptr=&x;
    cout<<"*ptr = "<<*ptr<<endl;
    
    **ptr=876;

    cout<<"x = "<<x<<endl;


}