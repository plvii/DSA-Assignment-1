#include<stdio.h>

int main()
{
    char number[1000];
    printf("Enter the number\n");
    scanf("%s",number);
    int i=0;
    int check1=0,check2=0;
    while(number[i]!='\0')
    {
        if(number[i]=='.')
        {
            check1++;
            if(number[i+1]!='\0')
            check2=1;
        }
        i++;
    }
    if(check1==1 && check2==1)
    printf("valid floating point \n");
    else
    printf("invalid floating point \n");
}
