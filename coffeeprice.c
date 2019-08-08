
#include <stdio.h>

int main()
{
    int X,P,temp,sum=0;
    scanf("%d%d",&X,&P);
    temp=X;
    sum=X;
    while(temp>0)
    {
        temp=(int)((float)temp-(float)P*temp/100);
        sum+=temp;
        
    }
    printf("%d\n",sum);

    return 0;
}
