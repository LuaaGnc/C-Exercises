#include <stdio.h>

void main() {
    int prod=1;
    for (int i = 0; i < 10; i++)
    {
        if(i%2 != 0){
            prod *= i;
        }
    }
    printf("O produto é %d\n\n", prod);
}
