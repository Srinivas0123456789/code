#include <stdio.h>
int main()
{
    int sensor[8] = {20,22,21,24,23,25,22,21};
    int sum = 0;
    float average;

    for(int i = 0; i<8 ; i++)
    {
    sum += sensor[i];
    }

    average = (float)sum/8;
    printf("Average = %.2f\n",average);
    return 0;
}