#include <stdio.h>

 int main() {
 int a = 5;
 int b = 11;
 float c;

 scanf("%d %d", &a, &b);
 
 if(a > b || !(a > 0)) {
 c = (float)(b / a);
 }  //a > b: Verifica se a é maior que b.
    //!(a > 0): Verifica se a NÃO é maior que 0 (ou seja, se a <= 0).
    //O operador lógico || avalia a condição como verdadeira se qualquer uma das duas partes for verdadeira.
 
 
 else {
 c = (float)(a / b);
 }  //Se a > b ou a <= 0, c = b / a. Caso contrário, c = a / b.
    //O programa exibe o valor de c com duas casas decimais (%.2f).

 printf("%.2f\n", c);
 return 0;
}       //O programa lê dois números inteiros a e b e armazena-os nas variáveis a e b, respectivamente.
        //Em seguida, ele verifica se a > b ou a <= 0. Se a condição for verdadeira, ele calcula c = b / a.
        //Caso contrário, ele calcula c = a / b. O valor de c é exibido com duas casas decimais.
    