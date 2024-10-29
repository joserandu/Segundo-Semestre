package biblioteca;

public class ItemBiblioteca {
	
	public ItemBiblioteca(String titulo, String autor, int anoPublicacao) {
		this.titulo = titulo;
		this.autor = autor;
		this.anoPublicacao = anoPublicacao;
	}
	
	private String titulo;
	private String autor;
	protected int anoPublicacao;
	
	public void exibirInfo() {
		System.out.println("Título: " + titulo + "\nAutor: " + autor + "\nAno de publicação: " + anoPublicacao);
	}

}
