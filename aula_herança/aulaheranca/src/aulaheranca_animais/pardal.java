package aulaheranca_animais;

public class pardal extends ave {
    // Construtor que corresponde à assinatura usada no App.java
    public pardal(String nome, String corPena, String som) {
        super(nome, corPena, som); // Chama o construtor da classe base 'ave'
    }

    public void voar() {
        System.out.println("O pardal está voando!");
    }
}
