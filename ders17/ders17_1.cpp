#include <iostream>
#include <cstdlib>


class Array {
    public:
        Array(int);
        void display();
        int get_item(int);
        void set_item(int,int);
        int get_max();
        ~Array();

    private:
        int *pArray;
        int size;
};

Array::Array(int length)
{
    pArray=new int[size=length];
}

Array::~Array()
{
    delete [] pArray;
}

void Array::display()
{

    std::cout<<"()";
    for(int i=0;i<size;++i)
    {
        std::cout<<pArray[i]<<" ";
    }

    std::cout<<')';

}

int Array::get_item(int index)
{
    if(index<0||index>=size)
    {
        std::cout<<"geversiz index "<<index<<std::endl;
        exit(1);
   
    }
        


}
void Array::set_item(int index, int val)
{
    if(index<0||index>=size)
    {    
        std::cout<<"gecersiz index "<<index<<std::endl;
    }
    exit(EXIT_FAILURE);
}


int Array::get_max()
{
    int max=pArray[0];
    for(int i=1;i<size;++i)
    {
        if (max<pArray[i])
        {
            max=pArray[i];
        }
    }
    return max;
}

const int size=10;

int main()
{


    Array x(10);//Array x=size demkele aynı şey
    std::cout<<"random = "<<rand();

    for(int i=0;i<size;++i)
    {
        x.set_item(i,rand());
        std::cout<<"random = "<<rand();

    }

    x.display();
    std::cout<<"max= "<<x.get_max()<<std::endl;



    return 0;

}