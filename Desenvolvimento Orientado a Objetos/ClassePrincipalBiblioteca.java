package biblioteca;

public class ClassePrincipal {

	public static void main(String[] args) {
		
		// public ItemBiblioteca(String titulo, String autor, int anoPublicacao) {
		
		String titulo = "Capitães da Areia";
		String autor = "Jorge Amado";
		int anoPublicacao = 1945;
		
		ItemBiblioteca item = new ItemBiblioteca(titulo, autor, anoPublicacao);
		
		item.exibirInfo();

	}

}
