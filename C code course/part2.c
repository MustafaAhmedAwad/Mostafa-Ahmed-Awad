#include <stdio.h>
main()
{

    //integer ex. 1 2 3 4 5 6 7 8 9 430
    //float   ex. 1.4 2.56 4.342
    //char    ex. a b c d e f
    //double  ex. 10.25464 1.2134523 3.54353 long float

    int i ; // here we register a in the memory and its type is integer
    float f ;
    char c ;
    double d ;

    // %d to make the printf function to print  decemal numbers
    // sizeof(i) to check the how many bytes on "i" that is registered on integer registers
    printf("this is the size of integer = %d\n", sizeof(i));
    printf("this is the size of float = %d\n", sizeof(f));
    printf("this is the size of double = %d\n", sizeof(d));
    printf("this is the size of char = %d\n", sizeof(c));

    // 1 byte = 8 bit

    //int have 4 bytes  4 * 8 = 32bit
    //float have 4 bytes 4 * 8 = 32bit
    //double have 8 bytes 8 * 8 = 64bit
    //char have 1 bytes 1 * 8 = 8bit

    // go to part 3 file



}   