#include <stdio.h>
#include <string.h>

typedef struct{
    int prontuario;
    char nome[20];
    float notas[3];
}Aluno;

void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){

    Aluno alunos[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o prontuario do aluno %d: ",i+1);
        scanf("%d", &alunos[i].prontuario);
        limparBuffer();
        
        printf("Digite o nome do aluno %d: ",i+1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota %d do aluno %d: ",j+1,i+1);
            scanf("%f",&alunos[i].notas[j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        float somaAluno =0;
        for (int j = 0; j < 3; j++)
        {
            somaAluno += alunos[i].notas[j];
        }
        float mediaAluno = somaAluno/3;

        if (mediaAluno < 4){printf("O aluno %d está Reprovado com média %.2f\n", alunos[i].prontuario, mediaAluno);}
        else if (mediaAluno >= 4 && mediaAluno < 6){printf("O aluno %d está de IFA com média %.2f\n", alunos[i].prontuario, mediaAluno);}
        else{printf("O aluno %d está Aprovado com média %.2f\n", alunos[i].prontuario, mediaAluno);}
    }
    


    return 0;
}