#include <stdio.h>

int main() {
    float nota;
    int frequencia;

    // Receber dados do estudante
    printf("Digite a nota do estudante (0 a 10): ");
    scanf("%f", &nota);
    printf("Digite a frequencia do estudante (0 a 100%%): ");
    scanf("%d", &frequencia);

    // Avaliação em um único if
    if (nota >= 7 && frequencia >= 75) {
        printf("Estudante APROVADO.\n");
    } else {
        printf("Estudante REPROVADO.\n");
    }

    return 0;
}
