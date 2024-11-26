package prova;

public class Carro extends Veiculo {

	private int n_portas;
	
	// Constructor
	public Carro(String modelo, int velocidade_maxima, int n_portas) {
		super(modelo, velocidade_maxima);
		this.n_portas = n_portas;
	}
	
	// mover()
	@Override
	public void mover() {
		System.out.println("O Carro está se movendo a X km/h");
	}
	
	// Getters e Setters
	public int getN_portas() {
		return n_portas;
	}
	
	public void setN_portas(int novoN_portas) {
		this.n_portas = novoN_portas;
	}
	
}
