package instituicoes;
public class premiacao {
    private String nome;
    private int ano;

    public premiacao(String nome, int ano) {
        this.nome = nome;
        this.ano = ano;
    }

    public String getNome() {
        return nome;
    }

    public int getAno() {
        return ano;
    }

    @Override
    public String toString() {
        return "Título: " + nome + " (" + ano + ")";
    }
}
