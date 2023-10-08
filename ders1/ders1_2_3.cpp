//// pointer kullnamının giriş 
/// örtülü dönüşüm kavramı 

# include<iostream>
using namespace std;

void change(int *ptr)
{
    *ptr=100;

    cout<<"ara değişken değeri = "<<*ptr<<endl;
    


}

int main()
{
    int a=20;

    cout<<"ilk değişken değeri = "<<a<<endl;

    change(&a);

    cout<<" son değişken değeri = "<<a<<endl;

    double dval=4.35;
    int x=dval;
    cout<<"x = "<<x;
}

