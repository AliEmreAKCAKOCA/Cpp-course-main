#include <iostream>


class  alper 
{
private:
    int mx;
public:
    void func(int x);
};

// isism arama kuralı hiyerarşisi önce yerel

void alper::func(int x)
{
    int mx=20;

    std::cout<<mx<<std::endl;
    

    alper::mx=x;

    std::cout<<alper::mx<<std::endl;




}



int main()
{

    alper alp;


    alp.func(10);


}