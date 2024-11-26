package prova;

public class Bicicleta extends Veiculo{

	private String tipo_bicicleta;
	
	// Constructor
	public Bicicleta(String modelo, int velocidade_maxima, String tipo_bicicleta) {
		super(modelo, velocidade_maxima);
		this.tipo_bicicleta = tipo_bicicleta;
		
	}
	
	@Override
	public void mover() {
		System.out.println("A bicicleta está se movendo a Y km/h");
	}
	
	// Getters e Setters
	public String getTipo_bicicleta() {
		return tipo_bicicleta;
	}
	
	public void setTipo_bicicleta(String novoTipo_bicicleta) {
		this.tipo_bicicleta = novoTipo_bicicleta;
	}
	
}
