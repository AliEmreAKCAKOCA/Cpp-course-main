#include <iostream>

/*


template<typename T>
T topla(T a, T b)
{

    std::cout<<" a+b = "<<a+b<<'\n';
    return a+b;

}



int main()
{

    topla<int>(2,3);


}



*/
// DAHA ANALAŞILIR BİR UYGUALMA ;

template<typename T1, typename T2>// bu şekilde daha profesyonel durabilir kanaatindeyim
T1 topla(T1 a, T2 b)
{

    std::cout<<"a bir "<<typeid(T1).name()<<"  türüdür; b bir  "<<typeid(T2).name()<<'\n';  



    return a+b;
    
}


int main()
{

    auto a=3.7;
    auto b=5;

    
    std::cout<< " toplam değer =  "<<topla(a,a);




}
