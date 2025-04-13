package aula_1;

public class principal {
    public static void questao1() {
        int a=1, b=2, c=3, d=4, e=5;

        System.out.println("primeira: " + ((float) a * b / c));
        System.out.println("++a * b - --c = " + (++a * b - --c));
        System.out.println("7 - + ++a % (3+b) = " + (7 - ++a % (3+b)));
    }

public static void questao2(float nota, float freq) {
    if (nota >= 7 && freq >= 75) {
        System.out.println("Aprovado");
    } else if (nota < 4 && freq < 0.75) {
        System.out.println("recuperação");
    } else if (nota < 6) {
        System.out.println("Reprovado por nota");
    } else {
        System.out.println("Reprovado");
    }
}    


public static void questao5() {
    int v1[] = {1, 2, 3};
    int v2[] = {1, 2, 3};
    if (v1 == v2) {
        System.out.println("iguais");
    }  
}


public static void questao6() {
    int i=20;
    while (i < 10) {
        System.out.println("while: " + i);
        i++;
    }
    
    do {
        System.out.println("do while: " + i);
        i++;
    } while (i < 10);

    for (int j=0; j<10; j++) {
        System.out.println("for: " + j);
    }
}

 public static void main(String[] args) {
    questao6();
 }
}
