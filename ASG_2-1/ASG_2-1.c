#include<stdio.h>
int main(){
char operators;
double Number_1,Number_2,result;

    printf("inter Number_1\n");
    scanf("%lf",&Number_1);
    printf("inter the  mathematical operators\n");
    scanf(" %c",&operators);

    printf("inter Number_2\n");
    scanf("%lf",&Number_2);

 switch(operators)
    {
        case'+':
        result= Number_1+Number_2;
        break;

        case'-':
        result=Number_1-Number_2;
        break;

        case'*':
        result=Number_1*Number_2;
        break;

         case'/':
             if(Number_2!=0)
             {
                result=Number_1/Number_2;
             }
        else
        {
            printf("Cannot divide by zero!\n");
            return 1;
        }
        break;
         default:
           printf("Invalid operator!\n");
           return 1;
    }



printf("Result:%lf",result);
return 0;
}
