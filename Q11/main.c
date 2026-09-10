#include <stdio.h>

int Sensor_Read(int *temperature, int *pressure)
{
    *temperature = 35;
    *pressure = 1012;

    return 0;
}

int main()
{
    int temperature;
    int pressure;

    Sensor_Read(&temperature, &pressure);
    printf("Temperature = %d\n",temperature);
    printf("Presuure = %d\n",pressure);





    
    return 0;
}