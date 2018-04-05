#include<stdio.h>
#include<stdlib.h>
int main()
{
    long dnum, rem,que;
    int onum[100],i=1,j;
    printf("ënter the decimal no.");
    scanf("%ld",&dnum);
    que=dnum;
    while(que!=0)
    {
        onum[i++]=que%8;
        que=que/8;

    }
    printf("equivalent number forthe decimal %d \n",dnum);
    for(j=i-1;j>0;j--)
    {
        printf("%d",onum[j]);
    }
return 0;
}
