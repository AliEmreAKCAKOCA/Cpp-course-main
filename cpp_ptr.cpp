// cpp_ptr.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class myptr {
    int *ptrno;
    int sira;

public:
    myptr(int*, int);
   
    void print();

};


myptr::myptr(int* pointer, int kac)
{
    ptrno = pointer;
    sira = kac;


}

void myptr::print()
{
    std::cout << "pointer= " << ptrno << " sira= " << sira << "  ptr deger= " << *ptrno<<std::endl;

    
}

int main()
{
    std::cout << "Hello World!\n";

    int a = 1;

    std::cout << &a<<std::endl;

    myptr ptr1(&a, 5);
    ptr1.print();

    a = 25;
    
    ptr1.print();


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
