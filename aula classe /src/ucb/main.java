package ucb;

import animal.Cachorro;

public class Main {
    public static void main(String[] args) {
        Cachorro cachorro1 = new Cachorro("Rex", "Vira-lata", "Curto", 0.5f, 5.0f, 2);
        Cachorro cachorro2 = new Cachorro("toby", "Pug", "Curto", 0.5f, 5.0f, 2);

        System.out.println(cachorro1);

        System.out.println("Nome do segundo cachorro: " + cachorro2.getNome());

        cachorro1.aniversario(); 

        cachorro2.setPeso(25.3f);

        System.out.println(cachorro2);

        cachorro1.nome = "Rex";

}