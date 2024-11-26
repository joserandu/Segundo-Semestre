package prova;

public class Veiculo {

	private String modelo;
	private int velocidade_maxima;
	
	// Constructor
	public Veiculo(String modelo, int velocidade_maxima) {
		this.modelo = modelo;
		this.velocidade_maxima = velocidade_maxima;
	}
	
	// mover()
	public void mover() {
		System.out.println("O Veículo está se movendo a Z km/h");
	}
	
	// Getters e Setters
	public void setModelo(String novoModelo) {
		this.modelo = novoModelo;
	}
	
	public String getModelo() {
		return modelo;
	}
	
	public void setVelocidade_maxima(int novaVelocidade_maxima) {
		if (novaVelocidade_maxima >= 0) {
			this.velocidade_maxima = novaVelocidade_maxima;
		} else {
			System.out.println("Velocidade inválida!");
		}
	}
	
	public int getVelocidade_maxima() {
		return velocidade_maxima;
	}
	
	// iniciar_transporte()
	public void iniciar_transporte() {
		mover();
	}
	
}
