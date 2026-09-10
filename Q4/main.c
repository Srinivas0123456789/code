#include <stdio.h>
int main()
{
    int voltage[10]={12,13,12,14,15,13,16,12,17,13};

    for(int i=0; i<10; i++)
    {
        if (voltage[i]>14)
        {
        printf("Over Voltage: %d\n",voltage[i]);
        }
    }
    return 0;
}