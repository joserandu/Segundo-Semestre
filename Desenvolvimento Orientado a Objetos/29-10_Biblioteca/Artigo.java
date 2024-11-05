package biblioteca;

public class Artigo extends ItemBiblioteca{
	
	private String areaPesquisa;
	
	public Artigo(String titulo, String autor, int anoPublicacao, String areaPesquisa) {
		
		super(titulo, autor, anoPublicacao);
		
		this.areaPesquisa = areaPesquisa;
		
	}
	
	public void exibirPesquisa() {
		System.out.println("A área de pesquisa é: " + areaPesquisa + ".");
	}
	
}
