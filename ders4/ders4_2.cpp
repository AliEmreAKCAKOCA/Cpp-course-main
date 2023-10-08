#include <iostream>

int main()
{
    int x=9;

    int* p={&x};


    std::cout<<p<<'\n';
    std::cout<<*p<<'\n';

    int* &r=p;// r p'ye referans yani r demek p demek

    std::cout<<&r<<'\n';
    std::cout<<*r<<'\n';

    ++* r;// buda ozm 



    /*
    int foo()  /// fonksiyonu olsun

    int x=foo();  // 
    x=999; // dediğin zaman foo nun değerine değiştirmiş olmuyoruz 

    //ama

    int &y=foo;

    //ise 

    y=99, // foo yu etkiler  galiba bunu unutma
    
    
    
    */

    ///////////
    // ismi r olan 

    int xx=10;

    const int& r1=xx; /// böyle taNIMLANIRSA r1 değiştirlemez ancak buradada ifade ettiği
    // gibi xx= r1 olduğu için r1 i değiştirmek için x değiştirmek gerekir xx değiştirirlebilir  x
    //değiştiğinde r1 de ootomatik değişşecerktir;
    
    xx=14;

    std::cout<<"xx değeri = "<<r1<<'\n';



    /*
    
    auto xc;// bir hatadı auto da direk ilk değer girmek gerekir yoksa hata oluşuır,
    
    
    //örneğin

    auto xc=9;

    // doğru bir yaklşımdır
    */

   /*

       auto xc(2242365562);// bu şekilde ki tanımda ddoğru auto x=2242165 da doğru
   std::cout<<" auto değeri = <<xc<<" dir "<<'\n';

   */

    char cc= 12;
    auto v=+cc;
    std::cout<<v<<'\n';


    double dval=3;
    int b=6;


    auto xxx= v > 2 ? 7*b : 0; 
    std::cout<< "auto xxx değeri = "<<xxx<<'\n';


    //////////////////////////////

    const int x4=20;

    auto b1=x4;  // b const in mi int mi sorusu var ? velakin b1 int türündedir const luk düşmüştür
 
    b1++;// conts luk düştüğü için syntax hatasıuı vermiyor ama alt satırda
    //x4++;   // gördüğün gibi x4 const olduğu için hata  syntax hatası;



    std::cout<<"const x4 --> b1 de ++ operatörücevabı  "<<b1++<<'\n';


    ///////////

    int x5=10;

    const int* const p2=&x5;
    auto y=p2;

    ///////////
   

    




    







}