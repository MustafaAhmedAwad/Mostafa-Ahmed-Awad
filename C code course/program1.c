#include <stdio.h>
main()
{

    int hight, width, area;

    printf("Enter hight : ");
    scanf("%d", &hight);

    // "&"" this symbol is used to select any data for the value "%d"
    // the data here is hight 

    printf("Enter width : ");
    scanf("%d", &width);

    area = hight * width ; 
    
    printf("The area is : %d ",area);



}