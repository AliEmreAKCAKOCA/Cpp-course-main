//// pointer kullnamının giriş 

# include<iostream>
using namespace std;


int main ()
{
    int a=5;

    int *ptr=&a;


    cout<<" değişken aderesi = "<<&a<<endl;
    cout<<" değişken adresi  = "<<ptr<<endl;

    cout<<"değişken değeri   = "<<*ptr<<endl;

    *ptr=6;
    cout<<"değişken değeri   = "<<a<<endl;



    return 0;
}