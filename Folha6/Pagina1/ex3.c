#include <stdio.h>
#include <string.h>


#define MAX 25

typedef struct {
    char nome[MAX];
    char apelido[MAX];
    char residencia[MAX];
    int telefone;
} ESTUDANTE;

ESTUDANTE cadastro();
int equalEntry(ESTUDANTE, ESTUDANTE);
int comesFirst(ESTUDANTE, ESTUDANTE);

int main(){
    ESTUDANTE aluno1, aluno2;
    int comesf;

    aluno1 = cadastro();
    aluno2 = cadastro();

    comesf = comesFirst(aluno1, aluno2);
    (equalEntry(aluno1, aluno2) == 1) ? printf("Os dados dos alunos são identicos\n") :
    printf("Os dados dos alunos NAO SAO identicos\n");

    if(comesf == 1)
        printf("O aluno que aparece primeiro é o/a %s\n\n", aluno1.nome);
    else
        printf("O aluno que aparece primeiro é o/a %s\n\n", aluno2.nome);

    return 0;
}

ESTUDANTE cadastro(){
    ESTUDANTE aluno;

    printf("\nDigite o seu nome: ");
    scanf("%s", &aluno.nome);
    printf("\nDigite o seu apelido: ");
    scanf("%s", &aluno.apelido);
    printf("\nDigite a sua residencia: ");
    scanf("%d", &aluno.residencia);
    printf("\nDigite o seu telefone: ");
    scanf("%d", &aluno.telefone);

    return aluno;
}

int equalEntry(ESTUDANTE a1, ESTUDANTE a2){
    // 1 - Entradas Iguais
    // 0 - Entradas Diferentes
    if(strlen(a1.nome) != strlen(a2.nome) || strlen(a1.apelido) != strlen(a2.apelido) ||
       strlen(a1.residencia) != strlen(a2.residencia))
        return 0;

    for (int i = 0; i < strlen(a1.nome); i++) {
        if(a1.nome[i] != a2.nome[i] || a1.apelido[i] != a2.apelido[i] ||
        a1.residencia[i] != a2.residencia[i] || a1.telefone != a2.telefone)
            return 0;
    }
    return 1;
}

int comesFirst(ESTUDANTE a1, ESTUDANTE a2){
    // 1 - A1 aparece primeiro que A2
    // 0 - A2 aparece primeiro que A1
    int len1=strlen(a1.nome), len2=strlen(a2.nome), m, f;

    if(len1 < len2){
        m = len1;
        f=0;
    }
    else{
        m = len2;
        f = 1;
    }


    for(int i = 0; i < m; i++){
        if(a1.nome[i] > a2.nome[i])
            return 0;
        else if(a1.nome[i] < a2.nome[i])
            return 1;
    }
    if(f==0){
        return 1;
    }
    else{
        return 0;
    }
}