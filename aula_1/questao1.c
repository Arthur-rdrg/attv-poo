#include <stdio.h>

 int main() {
 int a = 1, b = 2, c = 3, d = 4, e = 5;

     printf("a * b / c = %.3f\n", (float)a * b / c);
       //Como foi feito o cast para (float)a, o resultado da divisão será 
       //em ponto flutuante: 2.0 / 3 = 0.6667. Saída: a * b / c = 0.667.
       // Os valores das variáveis permanecem os mesmos


     printf("a * b %% c + 1 = %d\n", a * b % c + 1);
       //O operador % tem precedência sobre o operador *. 
       //Assim, a * b % c + 1 = 1 * 2 % 3 + 1 = 2 % 3 + 1 = 2 + 1 = 3.
       // Saída: a * b % c + 1 = 3.
       // Os valores das variáveis permanecem os mesmos


     printf("++a * b - c-- = %d\n", ++a * b - c--);
       //O operador -- tem precedência sobre o operador *, que tem precedência sobre o operador ++.
       //Assim, ++a * b - c-- = 2 * 2 - 3 = 4 - 3 = 1.
       // Saída: ++a * b - c-- = 1.
       // Os valores das variáveis a e c são alterados para 2 e 2, respectivamente. 


     printf("7 - - b * ++d = %d\n", 7 - - b * ++d);
       //O operador * tem precedência sobre o operador ++, que tem precedência sobre o operador -.
       //Assim, 7 - - b * ++d

      
     printf("a / b / c = %.3f\n", (float)a / b / c);
       //Como foi feito o cast para (float)a, o resultado da divisão será 
       //em ponto flutuante: 1.0 / 2 / 3 = 0.1667. Saída: a / b / c = 0.167.
       // Os valores das variáveis permanecem os mesmos


     printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
       //O operador -- tem precedência sobre o operador *, que tem precedência sobre o operador /.
       //Assim, 7 + c * --d / e = 7 + 3 * 3 / 5 = 7 + 9 / 5 = 7 + 1.8 = 8.8.
       // Saída: 7 + c * --d / e = 8.8.
       // Os valores das variáveis c e d são alterados para 3 e 3, respectivamente.


     printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
       //O operador % tem precedência sobre o operador *, que tem precedência sobre o operador +.
       //Assim, 2 * a % - b + c + 1 = 2 * 2 % - 2 + 3 + 1 = 4 % - 2 + 3 + 1 = - 2 + 3 + 1 = 2.
       // Saída: 2 * a % - b + c + 1 = 2.
       // Os valores das variáveis permanecem os mesmos


     printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);
       //O operador ++ tem precedência sobre o operador -, que tem precedência sobre o operador /.
       //Assim, 39 / - ++e - + 29 % c = 39 / - 6 - 29 % 3 = 39 / - 6 - 2 = 39 / - 6 - 2 = - 6 - 2 = - 8.
       // Saída: 39 / - ++e - + 29 % c = - 8.
       // Os valores das variáveis e e c são alterados para 6 e 2, respectivamente.


     printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));
       //O operador ++ tem precedência sobre o operador %, que tem precedência sobre o operador +.
       //Assim, 7 - + ++a % (3+b) = 7 - + 3 % (3+2) = 7 - + 3 % 5 = 7 - + 3 = 7 - 3 = 4.
       // Saída: 7 - + ++a % (3+b) = 4.
       // Os valores das variáveis a e b são alterados para 3 e 2, respectivamente.

 return 0;
 }