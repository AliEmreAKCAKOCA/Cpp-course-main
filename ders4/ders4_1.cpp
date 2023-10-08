

template<typename T>
struct ValCat
{
    static constexpr const char* p=" PR value";

};


template<typename T>
struct ValCat<T&>
{
    static constexpr const char* p=" L value";

};


template<typename T>
struct ValCat<T&&>
{
    static constexpr const char* p=" X value";

};

#include <iostream>

#define print_val_cat(expr) std::cout<<"value category of expr '" #expr "'is : "<< ValCat<decltype((expr))>::p<<'\n'


int main()
{
    int x=10;


    int a =x++;
    std::cout<<a;

    print_val_cat(a);



    int& r=x;// referanslar türü ne olursa olsun defult initilize dlilemiyorlar mesela
    // int& r=10; desem hata olacak ama değeri 10 olan x değerine atadığım zaman sıkıntı yolk

    ++r;// bu aslında ++ x demek oluyor 
    r=88;// x=888 demek ooluyor 
    //r=y;// bu demekkkiş x=y ddemek oluyor 

    li
    


} 