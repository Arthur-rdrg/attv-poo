package instituicoes;

import java.time.LocalDateTime;
import futebolrh.jogador;
import java.util.ArrayList;
import java.util.List;

public class Timedefutebol {
    private jogador jogadores[];
    private List<premiacao> premiacoes;
    private LocalDateTime dataFundacao;
    private String nome;

    public Timedefutebol(String nome, LocalDateTime dataFundacao) {
        this.jogadores = new jogador[100];
        this.premiacoes = new ArrayList<>();
        this.nome = nome;
        this.dataFundacao = dataFundacao;
    }

    public void adicionarPremiacao(premiacao premiacao) {
        this.premiacoes.add(premiacao);
    }

    public Timedefutebol(String nome2, String string) {
        
    }

    public String getNome() {
        return this.nome;
    }

    public LocalDateTime getDataFundacao() {
        return this.dataFundacao;
    }

    public void adicionarJogador(jogador jogador) {
        this.jogadores[jogador.getNumeroCamisa()] = jogador;
    }

    public jogador[] getjogadores() {
        return this.jogadores;
    }

    public jogador getJogadorPorCamisa(int numeroCamisa) {
        return this.jogadores[numeroCamisa];
    }

}
