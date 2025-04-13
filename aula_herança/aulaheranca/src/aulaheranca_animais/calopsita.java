package aulaheranca_animais;

public class calopsita extends ave {

    // Construtor que corresponde à assinatura usada no App.java
    public calopsita(String nome, String corPena, String som) {
        super(nome, corPena, som); // Chama o construtor da classe base 'ave'
    }

    @Override
    public void voar() {
        System.out.println("A calopsita " + getNome() + " está voando.");
    }

}