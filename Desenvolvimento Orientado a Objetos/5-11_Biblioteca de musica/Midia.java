package biblioteca_musica;

public class Midia {
	
	private String titulo;
	private String artista;
	private int duracao;
	
	public Midia(String titulo, String artista, int duracao) {
		this.titulo = titulo;
		this.artista = artista;
		this.duracao = duracao;
	}
	
	public String getTitulo() {
		return titulo;
	}

	public String getArtista() {
		return artista;
	}
	
	public int getDuracao() {
		return duracao;
	}
	
	public void setTitulo(String newTitulo) {
		this.titulo = newTitulo;
	}
	
	public void setArtista(String newArtista) {
		this.artista = newArtista;
	}
	
	public void setDuracao(int newDuracao) {
		this.duracao = newDuracao;
	}
	
	
	public void exibirInfo() {
		System.out.println("Título: " + titulo + "\nArtista: " + artista + "\nDuração (s): " + duracao);
	}
	
}
