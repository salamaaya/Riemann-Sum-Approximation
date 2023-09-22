#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

// Aya Salama

double midpoint_sum(float a, float b, int rectangles)
{
    float delta_x = (b - a) / rectangles;
    float sum = 0;
    float x_1 = a;
    float x_2 = x_1 + delta_x;
    while (x_2 <= b)
    {
        sum += delta_x * ((1.5 * pow((x_1 + x_2) / 2, 3)) + (3.2 * pow((x_1 + x_2) / 2, 2)) - (4 * (x_1 + x_2) / 2) + 13);
        x_1 = x_2;
        x_2 += delta_x;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        return 1;
    }

    float a = atof(argv[1]);
    float b = atof(argv[2]);
    int rectangles = atoi(argv[3]);
    float first_guess = midpoint_sum(a, b, rectangles);
    float next_guess = midpoint_sum(a, b, rectangles = rectangles * 2);

    printf("b4 whiel\n");
    printf("Diff: %f", first_guess - next_guess);
    while (fabs(first_guess - next_guess) > 0.0001)
    {
        printf(":()\n");
        first_guess = midpoint_sum(a, b, rectangles);
        next_guess = midpoint_sum(a, b, rectangles = rectangles * 2);
        printf("%d\n", rectangles);
        printf("%f\n", first_guess);
        printf("%f\n", next_guess);

        printf("\n");
    }
    printf("after while\n");
    first_guess = midpoint_sum(a, b, rectangles);
    next_guess = midpoint_sum(a, b, rectangles = rectangles * 2);
    printf("%d\n", rectangles);
    printf("%f\n", first_guess);
    printf("%f\n", next_guess);

    return 0;
}
