#include <stdio.h>
int main()
{
    int config[4]={10,20,30,40};
    int *p=config;

    for(int i=0; i<4; i++)
    {
        *(p+i)=config[i]+5;
        printf("%d\n",*(p+i));
    }
    return 0;
}