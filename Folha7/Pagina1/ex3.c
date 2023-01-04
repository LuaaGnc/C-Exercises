#include <stdio.h>

/*
 * 3. Escreva um programa em C que leia o conteúdo do ficheiro de texto (Alunos.txt que se
 * encontra na página web), o qual possui em cada linha o número do aluno e a sua nota.
 * Para tal crie as seguintes funções para:
 *
 * a. ler do ficheiro um vetor de inteiros com as notas obtidas pelos alunos.
 * void LerVetor(int V[], int *N);
 *
 * b. para calcular o número de alunos reprovados (usar o vetor).
 * int NumeroReprovados(int V[], int N);
 *
 * c. para calcular a média das notas dos alunos aprovados (usar o vetor).
 * int MediaNotasAprovados(int V[], int N);
 */
void LerVetor(int V[], int *N);
int NumeroReprovados(int V[], int N);
int MediaNotasAprovados(int V[], int N);

int main() {
    FILE *ficheiro;
    int DIM=23, flag=0;
    int notas[DIM], valor;
    int *d, *not;
    d = &DIM;
    not = &notas[0];

    ficheiro = fopen("Alunos.txt", "r");

    if(ficheiro == NULL){
        printf("O ficheiro nao pode ser aberto!");
        return 0;
    }

    while(fscanf(ficheiro, "%d", &valor) >= 0){
        if (valor <= 20 && valor >= 0) {
            notas[flag] = valor;
            flag++;
        }
        if (feof(ficheiro))
            break;
    }
    LerVetor(not, d);
    printf("\nO numero de reprovados e %d e a media dos aprovados e %d",
           NumeroReprovados(notas, DIM), MediaNotasAprovados(notas, DIM));
    return 0;
}

void LerVetor(int V[], int *N){
    for(int i = 0; i < *N; i++)
        printf("%d ", V[i]);
}

int NumeroReprovados(int V[], int N){
    int rep=0;
    for(int i = 0; i < N; i++)
        if(V[i] < 10)
            rep++;
    return rep;
}

int MediaNotasAprovados(int V[], int N){
    int apr=0;
    double nota=0;

    for(int i = 0; i < N; i++)
        if(V[i] >= 10) {
            apr++;
            nota += V[i];
        }
    return (nota/apr);
}