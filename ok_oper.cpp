#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>


struct ok_oper
{
    /* data */
};
 zaman_yapisi 
{
    
   int saat,dakika,saniye;

   public:
        
};

int func(struct zaman_yapisi *uzanti)
{
    std::cout<<uzanti->saat<<"   "<<uzanti->dakika<<"  "<<uzanti->saniye;
  // printf("%d %d %d",uzanti->saat,uzanti->dakika,uzanti->saniye);
}



int main() {

    zaman_yapisi yapi_degiskeni;

   yapi_degiskeni.saat = 13;
   yapi_degiskeni.dakika = 20;
   yapi_degiskeni.saniye = 40;
   func(&yapi_degiskeni);


   return 0;
}