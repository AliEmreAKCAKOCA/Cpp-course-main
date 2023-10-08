#include <iostream>
 
class deneme
{

public:
   void func(int x);
};


void deneme::func(int x){


    std::cout<<" x öyle bir değerki "<<x<<" gibi"<<std::endl;

}   


int main()
{
    deneme deneme;

    int a=10;

    deneme.func(a);
    
  
}
