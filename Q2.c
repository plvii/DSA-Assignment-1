#include <stdio.h>

int main()
{
    char a[1000];
    int answer=0;
    int cnt=0;
    int p=0;
    int q=0;
    scanf("%s", a);
    for(int i=0; a[i]!='\0'; i++)
    {
        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z') || (a[i]>='0' && a[i]<='9'))
            answer=1;
        else if((a[i]=='.' || a[i]=='-' || a[i]=='_' || a[i]=='@') && (i!=0 && a[i+1]!='\0'))
            answer=1;
        else 
        {
            answer=-1;
            break;
        }
        if(a[i]=='@')
        {
            cnt++;
            p=i;
        }
        if(cnt>1)
        {
            answer=-1;
            break;
        }
        if(a[i]=='.')
            q=i;    
    }
    if(q-p<2)
        answer=-1;
    if(answer==1)
        printf("Valid Email ID");
    else
        printf("Email is not valid");
}
