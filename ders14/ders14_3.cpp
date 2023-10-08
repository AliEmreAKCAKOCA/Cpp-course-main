#include <iostream>
#include <cstring>
#include <cstdlib>

class String
{
public:
    String(const char* p):mlen{std::strlen(p)},
     mp{static_cast<char *>( malloc(mlen+1))}
    {
        std::strcpy(mp,p);
    }


    ~String()
    {

        std::free(mp);
    }


    void print()const
    {
        std::cout<<mp<<std::endl;
    }


    std::size_t length()const
    {
        return mlen;
    }

    bool empty()const
    {
        return mlen==0;
    }

private:
    std::size_t mlen;
    char* mp;
    


    


};



void func(String s)
{

    s.print();
}

int main()
{

    String str{" deprem butun ulkeyi yasa bogdu"};
    std::cout<<"str.lenght() = "<<str.length()<<std::endl;

    if (str.empty())
    {
        std::cout<<"evet bosum"<<std::endl;
        
    }
    else
    {
        std::cout<<"ben sana bos degilim \n";
    }
    
    str.print();
    func(str);
    (void)getchar();
    str.print();
}