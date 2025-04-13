#include <stdio.h>

 int main() {
 int y = 5;
 int z = 11;
 int w;


 w = y + z;
 if (y > z) {
    w = y * z;
 }
 
 printf("%d", w);
 return 0;
 }
 //O programa lê dois números inteiros y e z e armazena-os nas variáveis y e z, respectivamente.
 //Em seguida, ele calcula w = y + z. Se y > z, ele calcula w = y * z. O valor de w é exibido.
 //O valor de w ao final da execução do programa é 16