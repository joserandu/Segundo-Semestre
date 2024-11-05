package biblioteca_musica;

public class Podcast extends Midia{
	
	private int episodio;
	
	public Podcast (String titulo, String artista, int duracao, int episodio) {
		super(titulo, artista, duracao);
		
		this.episodio = episodio;
	}
	
	public int getEpisodio() {
		return episodio;
	}
	
	public void setEpsodio(int newEpsodio) {
		this.episodio = newEpsodio;
	}
	
}
