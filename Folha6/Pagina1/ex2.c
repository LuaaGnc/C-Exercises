#include <stdio.h>


typedef struct{
    float a;    // Real Part
    float b;    // Imaginary Part
} IMAGINARY;

void readC(IMAGINARY *);
void writeC(IMAGINARY);
IMAGINARY sumC(IMAGINARY *, IMAGINARY *);



int main(){
    IMAGINARY im1, im2, im;

    readC(&im1);
    readC(&im2);

    writeC(im1);
    writeC(im2);

    im = sumC(&im1, &im2);

    printf("A soma dos dois numeros acima escritos e: %.3f + %.3fi", im.a, im.b);

    return 0;
}

void readC(IMAGINARY *im){
    printf("Leitura do numero imaginario [(a) + (b)i]: ");
    scanf("%f", &(im->a));
    fflush(stdin);
    scanf("%f", &(im->b));
    fflush(stdin);
}

void writeC(IMAGINARY im){
    printf("O numero que acabou de introduzir denota-se por:  %.3f + %.3fi\n", im.a, im.b);
}

IMAGINARY sumC(IMAGINARY *im1, IMAGINARY *im2){
    IMAGINARY sumIM;

    sumIM.a = im1->a + im2->a;
    sumIM.b = im1->b + im2->b;

    return sumIM;
}