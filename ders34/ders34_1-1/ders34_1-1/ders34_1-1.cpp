// ders33_6.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//ders 33 de yazmadığın 


#include <iostream>

class x {

public:
    x(int a) {
        std::cout << "x(int a) a= "<<a<<"\n";
    }

};

class y {

public:
    y(int b) {
        std::cout << "y(int b) b= " << b << "\n";
    }

};


class Der : public x, public y {//suan önce x sonra y hangisi once ise o çağrılır

public:
    Der():y(1),x(9)
    {
        std::cout << "der default constr\n";// önce x çağırılır
    }
};

int main()
{
    Der myder;

    
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
