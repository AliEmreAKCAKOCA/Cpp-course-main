#include <iostream>
#include "myintarray.h"


int main(int argc, char **argv)
{   

    myintarray a1(5);
    
    myintarray a2(7);
    myintarray a3(a1);

    myintarray a4(2);

    a4=a1;

    a1.print_adres();
    a2.print_adres();
    a3.print_adres();
    a4.print_adres();

    

    return 0;




}
