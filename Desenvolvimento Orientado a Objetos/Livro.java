package biblioteca;

public class Livro extends ItemBiblioteca {
	
	public Livro (String nome, String autor, String genero) {
		
		super(nome, autor);
		
		this.nome = nome;
		this.autor = autor;
		this.genero = genero;
		
	}
	
	private String genero;
	
	public void exibirGenero() {
		System.out.println("O Gênero do livro é " + genero + ".");
	}
	
}
