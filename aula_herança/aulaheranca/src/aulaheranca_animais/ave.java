package aulaheranca_animais;

public class ave {
    private String nome;
    private String corPena;
    private String som;

    public ave(String nome, String corPena, String som) {
        this.nome = nome;
        this.corPena = corPena;
        this.som = som;
    }
    public String getNome() {
        return nome;
    }
    public String getCorPena() {
        return corPena;
    }       
    public String getSom() {
        return som;
    }
    public void voar() {
        System.out.println("A ave " + nome + " está voando.");
    }

}
