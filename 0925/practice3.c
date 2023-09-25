#include <stdio.h>
#include <stdlib.h>

struct complex
{
    int real;
    int image;
};


int main()
{
    struct complex var1 = {3, 5};
    printf("%d+%di", var1.real, var1.image);
    return 0;
}