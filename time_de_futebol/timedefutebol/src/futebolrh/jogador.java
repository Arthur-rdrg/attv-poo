package futebolrh;

public class jogador {
    private String nome;
    private int idade;
    private int numeroCamisa;
    private String posicao;

    public jogador(String nome, int idade, int numeroCamisa, String posicao) {
        this.nome = nome;
        this.idade = idade;
        this.numeroCamisa = numeroCamisa;
        this.posicao = posicao;
    }

    public String getNome() {
        return this.nome;
    }

    public int getIdade() {
        return this.idade;
    }

    public void aniversario() {
        this.idade++;
    }

    public int getNumeroCamisa() {
        return this.numeroCamisa;
    }

    public void setNumeroCamisa(int numeroCamisa) {
        this.numeroCamisa = numeroCamisa;
    }

    public String getPosicao() {
        return this.posicao;
    }

    public void setPosicao(String posicao) {
        this.posicao = posicao;
    }

}
