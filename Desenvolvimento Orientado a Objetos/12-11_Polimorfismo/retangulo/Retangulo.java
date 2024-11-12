package retangulo;

public class Retangulo {

	private int comprimento;
	private int largura;
	
	public Retangulo(int comprimento, int largura) {
		this.comprimento = comprimento;
		this.largura = largura;
	}
	
	public int calcularArea(int comprimento, int largura) {
		return comprimento * largura;
	}
	
	public double calcularArea(double comprimento, double largura) {
		return comprimento * largura;
	}
	
	public int calcularPerimetro(int comprimento, int largura) {
		return 2 * comprimento + 2 * largura;
	}

}
