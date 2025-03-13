#include <stdio.h>
2
3 int main() {
4 int a = 1, b = 2, c = 3, d = 4, e = 5;
5 printf("a * b / c = %.3f\n", (float)a * b / c);
6 printf("a * b %% c + 1 = %d\n", a * b % c + 1);
7 printf("++a * b - c-- = %d\n", ++a * b - c--);
8 printf("7 - - b * ++d = %d\n", 7 - - b * ++d);
9 printf("a / b / c = %.3f\n", (float)a / b / c);
10 printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
11 printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
12 printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);
13 printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));
14
 return 0;
 }