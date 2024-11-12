package instumentos;

public class Main {

	public static void main(String[] args) {

		InstrumentoMusical im = new InstrumentoMusical();
		im.tocar();
		
		Piano piano = new Piano();
		piano.tocar();
		
		Guitarra guitarra = new Guitarra();
		guitarra.tocar();
		
	}

}
