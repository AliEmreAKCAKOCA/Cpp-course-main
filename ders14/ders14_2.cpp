#include <iostream>



class Date{
    int m_day;
    int m_month;
    int m_year;

    public:
        Date(int day, int month, int year): m_day(day), m_month(month), m_year(year)
        {
            std::cout<<"m_day= "<<m_day<<" day= "<<day<<std::endl;
            std::cout<<"m_month= "<<m_month<<" month= "<<month<<std::endl;
            std::cout<<"m_year= "<<m_year<<" year= "<<m_year<<std::endl;
            std::cout<<this<<std::endl;

            std::cout<<"/////////////////////////"<<std::endl;


        }


        void print() const
        {
            std::cout<<"m_day= "<<m_day<<std::endl;
            std::cout<<m_month;
            std::cout<<"m_year= "<<m_year<<std::endl;
            std::cout<<this;
        }

    
};


 

int main()
{

    Date yeni(03,12,1998);

    Date daha_yeni{yeni};


    daha_yeni.print();

    Date* ptr;
    
}
