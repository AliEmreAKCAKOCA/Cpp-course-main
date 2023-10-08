// öyle bir fonksiyon bildirin ki geri dönüş türü 
//int (*)(int olsun)

#include <iostream>


/*

int(*foo())(int)
{


} 

*/

int bar(int);


auto foo()->int(*)(int)
{
   
    std::cout<<"bar fonk adres = "<<&bar<<'\n';

}


int main()
{

    foo();
}