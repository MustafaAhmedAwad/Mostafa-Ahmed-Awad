#include<stdio.h>
int main(){
    int num,count=0,result=0,mul=1,cnt,rem;
    printf("Enter any num\n");//interface ques
    scanf("%d",&num);//user input
    int q=num;
    while(q!=0)        /*that while loop tells us num of digit of num
                         by defiend q as integer and /10 we have only num excp last digit and increment the count by 1 till we have 0 in q and  loops end */
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=num;

    while(q!=0)     /*this second while loop multiple each digit by it self as many time as count by it restore the reminder and * by mul=1,and store it in mul and decrement he count
                      by 1 and check condtion and continue till count=0*/
    {
        rem=q%10;
        while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
        result=result+mul; // sum all mult together to decide num is arm or not
    //initialization the resu,cnt,q,mul and we repeat the above while loop again
        cnt=count;
        q=q/10;
        mul=1;
    }
    if(result==num)   //condition check if result = num this is armstrong num
    {
        printf( "the numb is Armstrog num"); //print on interface
    }
    else{
            printf("the numb is not a Armstrong num");
    }
}
