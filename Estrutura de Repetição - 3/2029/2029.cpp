#include <stdio.h>

int main()
{
    float volume, diameter, radius, area, height;

    while(scanf("%f %f", &volume, &diameter) != EOF)
    {
        radius = diameter / 2;

        area = 3.14*(radius*radius);

        height = volume/area;

        printf("ALTURA = %.2f\n", height);
        printf("AREA = %.2f\n", area);
    }

    return 0;
}
