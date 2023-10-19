// cpp21_4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// fonksiyon çağrı operatörünün overload edilmesi 
//function call operator

#include <iostream>



#define square(a) ((a)*(a))



class Functor {

public:
    void operator()(int x)
    {
        std::cout << "void func::operator()(int x)\n";
        std::cout << "x= " << x << "\n";
        std::cout << "this= " << this << "\n";



    }
};

int main()
{

    int x = 9;
    auto y=square(x++);

    std::cout <<y<<"\n";
    
    Functor fn;

    std::cout << "&fn= " << &fn << "\n";
    fn(12);


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
