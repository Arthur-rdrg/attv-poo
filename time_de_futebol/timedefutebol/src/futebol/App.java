package futebol;

import instituicoes.Timedefutebol;
import instituicoes.premiacao;
import futebolrh.jogador;


public class App {
    public static void main(String[] args) {
        Timedefutebol flamengo = new Timedefutebol("Flamengo", "15/11/1895");

        jogador jogador1 = new jogador("Arrascaeta", 26, 14, "Meia");
        jogador jogador2 = new jogador("Pedro", 28, 9, "Atacante");

        flamengo.adicionarPremiacao(new premiacao("Campeonato Estadual", 2023));
        flamengo.adicionarPremiacao(new premiacao("Copa Nacional", 2022));


        flamengo.adicionarJogador(jogador1);
        flamengo.adicionarJogador(jogador2);
    }
}