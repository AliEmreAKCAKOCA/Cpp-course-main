#include <iostream>


class  alper 
{
private:
    int mx;
public:
    void func(int x);
};

// isism arama kuralı hiyerarşisi önce yerel

int mx=25;

void alper::func(int x)
{

    

    alper::mx=x;

    std::cout<<alper::mx<<std::endl;


    std::cout<<"global değişken olan mx in ilk atanmış değeri = "<<::mx<<std::endl;

    ::mx=alper::mx+253;

    std::cout<<"global değişken oolan mx in yeni deeğrie =" <<::mx<<std::endl;

}



int main()
{

    alper alp;


    alp.func(10);


}