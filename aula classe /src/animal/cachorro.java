package animal;

public class Cachorro{
    private String nome;
    private String raca;
    private String pelo;
    private float tamanho;
    private float peso;
    private int idade;

    public Cachorro(String nome, String raca, String pelo, float tamanho, float peso, int idade){
        this.nome = nome;
        this.raca = raca;
        this.pelo = pelo;
        this.tamanho = tamanho;
        this.peso = peso;
        this.idade = idade;
    }
    
    public void aniversario(){
        this.idade++;
    }

    public float comeu(float peso_da_comida){
        this.peso = this.peso + peso_da_comida;
        return this.peso;
    }

    public void setTamanho(float tamanho){
        this.tamanho = tamanho;
    }

    public void setPeso(float peso){
        this.peso = peso;
    }

    public string getNome(){
        return this.nome;
    }

    @Override
    public String toString() {
        return "Nome: " + nome +
                "\nRaça: " + raca +
                "\nPelo: " + pelo +
                "\nTamanho: " + tamanho +
                "\nPeso: " + peso +
                "\nIdade: " + idade;
    }

}