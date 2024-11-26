package prova;

public class Main {

	public static void main(String[] args) {
		
		// Veiculo
		Veiculo veiculo = new Veiculo("Ford Ka", 130);
		
		System.out.println(veiculo.getModelo());
		System.out.println(veiculo.getVelocidade_maxima());
		
		veiculo.setModelo("Fiat Uno");
		veiculo.setVelocidade_maxima(-5);
		veiculo.setVelocidade_maxima(220);

		System.out.println(veiculo.getModelo());
		System.out.println(veiculo.getVelocidade_maxima());
		
		veiculo.mover();
		veiculo.iniciar_transporte();
		
		// Carro
		Carro carro = new Carro("Saveiro", 140, 2);
		
		System.out.println(carro.getModelo());
		System.out.println(carro.getVelocidade_maxima());
		System.out.println(carro.getN_portas());
		
		carro.setModelo("Fiat Uno");
		carro.setVelocidade_maxima(220);
		carro.setN_portas(4);

		System.out.println(carro.getModelo());
		System.out.println(carro.getVelocidade_maxima());
		System.out.println(carro.getN_portas());
		
		// Bicicleta
		Bicicleta bike = new Bicicleta("Caloi", 15, "Infantil");
		
		System.out.println(bike.getModelo());
		System.out.println(bike.getVelocidade_maxima());
		System.out.println(bike.getTipo_bicicleta());
		
		bike.setModelo("First");
		bike.setVelocidade_maxima(70);
		bike.setTipo_bicicleta("Montain Bike");

		System.out.println(bike.getModelo());
		System.out.println(bike.getVelocidade_maxima());
		System.out.println(bike.getTipo_bicicleta());
		
	}

}
