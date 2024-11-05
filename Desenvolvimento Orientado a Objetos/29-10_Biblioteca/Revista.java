package biblioteca;

public class Revista extends ItemBiblioteca{
	
	private int edicao;
	
	public Revista(String titulo, String autor, int anoPublicacao, int edicao) {
		
		super(titulo, autor, anoPublicacao);
		
		this.edicao = edicao;
	}
	
	public void exibirEdicao() {
		System.out.println("A edição da revista é " + edicao + ".");
	}
	
}
