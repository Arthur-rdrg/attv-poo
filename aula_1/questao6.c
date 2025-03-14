#include <stdio.h> // fun¸c~oes de entrada e sa´ıda de dados

 int main() {
 int i;

 i = 0;

 // while verifica primeiro, depois executa
 while (i < 10) {
 printf("while: %d\n", i);
 i++;
 }

 // do executa, depois verifica
 do {
 printf("do: %d\n", i);
 i++;
 } while (i < 10);

 return 0;
 }


//a) Qual a saída do programa acima?
//while: 0
//while: 1
//while: 2
//while: 3
//while: 4
//while: 5
//while: 6
//while: 7
//while: 8
//while: 9
//do: 10

 
//b) Qual a diferença entre o while e do do..while?
//O while verifica primeiro, depois executa. O do executa, depois verifica.

//c) Como fica a implementação do bloco

//laço while:
//i = 0;
//while (i < 10) {
//    printf("while: %d\n", i);
//    i++;
//}

//Laço do...while:
//do {
//    printf("do: %d\n", i);
//    i++;
//} while (i < 10);
//
//d) Qual a diferença entre while e for? Quando usar um ou outro?
//O for é mais utilizado quando se sabe o número de iterações que serão feitas,
//enquanto o while é mais utilizado quando não se sabe o número de iterações que serão feitas.
