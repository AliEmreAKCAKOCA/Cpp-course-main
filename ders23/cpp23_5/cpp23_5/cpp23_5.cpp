// cpp23_5.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
#include <vector>

class Fighter {


public:
    Fighter(const std::string& name) :m_name{name}
    {
        svec.push_back(this);
    
    }
    ~Fighter() 
    {

        erase(svec,this);//c++20
    }
    void ask_help() 
    {

        std::cout << "geldi\n";

        //range-based for loop

        for (Fighter* p : svec)
        {
            if (p != this)
            {
                std::cout <<p->m_name << "  ";
            }

        }

    }


private:
    std::string m_name;
   inline static std::vector<Fighter*> svec;





};


int main()
{

    using namespace std;

    Fighter f1{ "ates" }, f2{ "bircan" }, f3{ "enes" }, f4{ "sevim" };

    auto p1 = new Fighter{ "sadullah" };
    auto p2 = new Fighter{ "abdulmuttalib" };



    f2.ask_help();
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
