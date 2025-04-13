package aulaheranca1;

import aulaheranca_animais.calopsita;
import aulaheranca_animais.pardal; 
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
    try (Scanner scanner = new Scanner (System.in)) {

        String nomePardal;
        String nomeCalopsita;
        String corCalopsita;
        String somCalopsita;

        System.out.println("Digite o nome da pardal: ");
        nomePardal = scanner.nextLine();
        pardal pardal = new pardal(nomePardal, "marrom com cinza", "chirip");

        System.out.println("Nome do pardal: " + pardal.getNome());
        System.out.println("Cor da pena: " + pardal.getCorPena());
        System.out.println("Som: " + pardal.getSom());
        pardal.voar();

        System.out.println("Digite o nome da calopsita: ");
        nomeCalopsita = scanner.nextLine();
        corCalopsita = "amarela com cinza";
        somCalopsita = "cantos";

        calopsita calopsita = new calopsita(nomeCalopsita, corCalopsita, somCalopsita);

        System.out.println("Nome da calopsita: " + calopsita.getNome());
        System.out.println("Cor da pena: " + calopsita.getCorPena());
        System.out.println("Som: " + calopsita.getSom());
        calopsita.voar();
    }


    }
}