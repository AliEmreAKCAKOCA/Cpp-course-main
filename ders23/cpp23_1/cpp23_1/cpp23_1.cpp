﻿// cpp23_1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


class Myclass {

public:
    static Myclass& get_instance()
    {
        static Myclass instance;
        return instance;
    }

    void foo() {}
    void bar(){}
    void baz(){}

    Myclass(const Myclass&) = delete;
    Myclass& operator=(const Myclass&) = delete;


private:
    Myclass()
    {
        std::cout << "myclass object constructed\n";
    }

    

};

int main()
{
    std::cout << "main basladı";
    Myclass::get_instance().bar();



    Myclass::get_instance().baz();
    auto& sng = Myclass::get_instance();



    sng.bar();
    sng.foo();


    delete& sng;


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
