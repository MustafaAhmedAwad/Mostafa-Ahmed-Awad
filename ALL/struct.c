#include <stdio.h>

/*typedef unsigned char temp_8;

int main()
{
    temp_8 x; // Declare the variable 'x' of type 'temp_8'
    
    printf("Enter temperature in Celsius: ");
    scanf("%hhu", &x); // Read an unsigned char using the format specifier %hhu
    
    int temperature = (x * 9 / 5) + 32; // Correct formula for Fahrenheit conversion
    
    printf("The temperature in Fahrenheit is %d\n", temperature);
    
    return 0;
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include <stdio.h>

typedef struct //or typedef struct 
{
    int salary;
    char name[20];
    int age;
    char *position; 
    int arr[10]; 
}emb,*embptr;/*emb.....and call it by by "emb(name)" only oR

int main()
{
    // Corrected the way to initialize an instance of the structure
    emb mostafa = {20000, "mostaf", 21, "CEO",{2010,2015,2022,2023}};
    emb samir ={10,"samir",23,"CEO",{2010,2015,2022,20}};
    emb ahmed ={50000,"ahmed",22,"ceo",{2010}};

    // Accessing the 'name' field of the 'employee' structure instance

   printf("Employee name: %s\n", mostafa.name);
   printf("mostafa age:%d \n",mostafa.age);
   printf("Employee position: %s\n", mostafa.position);
   printf("Employee arr: %d %d %d\n", mostafa.arr[0],mostafa.arr[1],mostafa.arr[2]);
emb employees[5] = {samir,mostafa,ahmed};

   for(int i=0;i<5;i++) 
{
printf("%s\n",employees[i].name);
}

    embptr p1= &mostafa;
   printf("%d",p1->position);

    return 0;
}*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////array of ponitrt to struct /////////////////////////////////////////////
/*#include <stdio.h>

typedef struct //or typedef struct 
{
    int salary;
    char name[20];
    int age;
    char *position; 
    int arr[10]; 
}emb,*embptr;/*emb.....and call it by by "emb(name)" only oR

int main()
{
    // Corrected the way to initialize an instance of the structure
    emb mostafa = {20000, "mostaf", 21, "CEO",{2010,2015,2022,2023}};
    emb samir ={10,"samir",23,"CEO",{2010,2015,2022,20}};
    emb ahmed ={50000,"ahmed",22,"ceo",{2010}};

    // Accessing the 'name' field of the 'employee' structure instance

   printf("Employee name: %s\n", mostafa.name);
   printf("mostafa age:%d \n",mostafa.age);
   printf("Employee position: %s\n", mostafa.position);
   printf("Employee arr: %d %d %d\n", mostafa.arr[0],mostafa.arr[1],mostafa.arr[2]);
emb *employees[5] = {&samir,&mostafa,&ahmed};  //acces aarry of pointer to employee structure

   for(int i=0;i<5;i++) 
{
printf("%s\n",employees[i]->name); //pointer acces struct by arrow operator ->
}

    embptr p1= &mostafa;
   printf("%d",p1->position);

    return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*typedef union 
{
   struct 
{
    unsigned char x;
    unsigned char y;

}timer;
unsigned short int  z ;

}emb, *embptr;

int main(void)
{
    emb u;
    u.timer.x=1;
    u.timer.y=1;
    printf("%d\n",u.z);
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main ()
{
    int cnt= 0;
    char *ptr ="mostafa ahmed awad mohamed farag nagy";
    int i=0;
    while (ptr[i]!='\0'){
        cnt++;
         i++;
    }
            printf("%d\n",cnt);
            //same while loop

    while ((*ptr)!='\0')
    {
        cnt++;
        ptr++;
    }
    
        printf("%d",cnt);

}






