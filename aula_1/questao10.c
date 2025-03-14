#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do aluno
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

aluno_t *aluno_root = NULL;

// Função para adicionar um novo aluno à lista
void adicionar_aluno() {
    aluno_t *novo_aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }

    // Entrada de dados do aluno
    printf("\nDigite o nome do aluno: ");
    fgets(novo_aluno->nome, 100, stdin);

    // Remover o caractere de nova linha ao final do nome
    size_t len = strlen(novo_aluno->nome);
    if (len > 0 && novo_aluno->nome[len - 1] == '\n') {
        novo_aluno->nome[len - 1] = '\0';
    }

    printf("Digite o numero de faltas: ");
    scanf("%d", &novo_aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &novo_aluno->nota);

    novo_aluno->prox = NULL;

    // Inserir o aluno na lista encadeada
    if (aluno_root == NULL) {
        aluno_root = novo_aluno;
    } else {
        aluno_t *atual = aluno_root;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novo_aluno;
    }

    // Consumir o '\n' restante
    getchar();
}

// Função para exibir os dados de todos os alunos na lista
void exibir_alunos() {
    aluno_t *atual = aluno_root;
    if (atual == NULL) {
        printf("\nNenhum aluno cadastrado na lista.\n");
        return;
    }

    printf("\nLista de Alunos:\n");
    while (atual != NULL) {
        printf("Nome: %s\n", atual->nome);
        printf("Faltas: %d\n", atual->faltas);
        printf("Nota: %.2f\n", atual->nota);

        // Determinar status de aprovação
        if (atual->nota >= 5.0 && atual->faltas <= 20) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
        printf("\n");
        atual = atual->prox;
    }
}

// Função para liberar memória alocada para a lista
void liberar_lista() {
    aluno_t *atual = aluno_root;
    while (atual != NULL) {
        aluno_t *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    aluno_root = NULL;
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar aluno\n");
        printf("2. Exibir alunos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Consumir o '\n'

        switch (opcao) {
            case 1:
                adicionar_aluno();
                break;
            case 2:
                exibir_alunos();
                break;
            case 3:
                liberar_lista();
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
