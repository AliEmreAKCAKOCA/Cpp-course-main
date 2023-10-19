// cpp22_4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>



enum Weekday
{
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,


};

std::ostream& operator<<(std::ostream& os, const Weekday& wd) {

    static const char* const p[]={
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
    };
        
    return os << p[static_cast<int>(wd)];

}

//prefix
Weekday& operator++(Weekday& wd) {
   
    using enum Weekday;//cpp20
   return wd= wd == Saturday ? Sunday : static_cast<Weekday>( static_cast<int>(wd));
    return wd; 
}

//postfix
Weekday& operator++(Weekday& wd,int);

 


int main()
{

    auto wd{ Weekday::Sunday };
    for (int i = 0; i < 24; ++i)
    {

        std::cout << ++wd << "\n";
    }

    auto x = wd;
    std::cout << x << "\n";

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
