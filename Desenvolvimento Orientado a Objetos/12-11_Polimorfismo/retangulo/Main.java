package retangulo;

public class Main {

	public static void main(String[] args) {

		Retangulo retangulo = new Retangulo(5, 25);
		
		System.out.println("Área do retangulo com números inteiros: " + retangulo.calcularArea(5, 25));
		System.out.println("Área do retangulo com ponto flutuante: " + retangulo.calcularArea(12.3, 10.12));
		System.out.println("Perimetro do Triangulo: " + retangulo.calcularPerimetro(5, 25));
	}

}
