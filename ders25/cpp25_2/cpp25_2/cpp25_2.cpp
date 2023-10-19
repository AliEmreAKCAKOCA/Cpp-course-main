// cpp25_1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

namespace neco {
    int x, y, z;
}

namespace erg {

    int x;
}


namespace can {

    void func(int)
    {
        std::cout << "can::func(int)\n";
    }

}

namespace deniz {



    void func(double)
    {

        std::cout << "deniz::func(doule)\n";
    }

}

using namespace neco;
using namespace can;/// using namespace de bir scop dur 
using namespace deniz;

s
int main()
{
    //neco::c =x 

    func(10);//namespace içindeki gelir function overloading
    func(4.5);///double globaladeki gelic function overloading
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
 