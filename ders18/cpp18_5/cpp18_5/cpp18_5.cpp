// cpp18_5.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>



class Rasyonel
{
public:
    int pay;
    int payda;

    Rasyonel(int x, int y)
    {

        pay = x;
        payda = y;
    }

    Rasyonel operator+(const Rasyonel& s)
    {

        return Rasyonel(s.pay * payda + s.payda * pay, s.payda * payda);
    }

    void print()
    {
        std::cout << pay << " / " << payda << std::endl;
    }
    /*
       void Genislet(int miktar)
    {
        pay = pay * miktar;
        payda = payda * miktar;


    }
    */

 

private:

};



int main()
{

    Rasyonel a(5, 2);
    Rasyonel b(9, 2);
    std::cout << "a nın deperi" << std::endl;
    a.print();
    std::cout << "b nin değeri" << std::endl;
    b.print();


    std::cout << "c nin degeri : ";
    Rasyonel c = a + b;

    c.print();
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
