// cpp31_1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <initializer_list>
#include <vector>

// virtual fonksiyonlar
class Base {

	int mx, my;
	virtual void f1(){}
	virtual void f2(){}


};

class der :public Base {
public:
	virtual void bar()
	{

	}
};
class nec :public der {

};


int main()
{
	std::cout << "sizof(base): " << sizeof(Base) << "\n";
	std::cout << "sizof(der): " << sizeof(der) << "\n";//eklenen virtual func artırmaz
	std::cout << "sizof(nec): " << sizeof(nec) << "\n";

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
