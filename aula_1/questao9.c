#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    // Alocação dinâmica para um novo aluno
    aluno_t *novo_aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Entrada de dados do aluno
    printf("Digite o nome do aluno: ");
    fgets(novo_aluno->nome, 100, stdin);
    
    // Remover o caractere de nova linha ao final do nome (se existir)
    size_t len = strlen(novo_aluno->nome);
    if (len > 0 && novo_aluno->nome[len - 1] == '\n') {
        novo_aluno->nome[len - 1] = '\0';
    }

    printf("Digite o numero de faltas: ");
    scanf("%d", &novo_aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &novo_aluno->nota);

    // Exibição dos dados do aluno
    printf("\nDados do Aluno:\n");
    printf("Nome: %s\n", novo_aluno->nome);
    printf("Faltas: %d\n", novo_aluno->faltas);
    printf("Nota: %.2f\n", novo_aluno->nota);

    // Verificar aprovação
    if (novo_aluno->nota >= 5.0 && novo_aluno->faltas <= 20) {
        printf("Status: Aprovado\n");
    } else {
        printf("Status: Reprovado\n");
    }

    // Liberar memória alocada
    free(novo_aluno);

    return 0;
}
