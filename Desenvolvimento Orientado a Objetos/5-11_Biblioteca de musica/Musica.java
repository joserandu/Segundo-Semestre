package biblioteca_musica;

public class Musica extends Midia{
	
	private String genero;
	
	public Musica(String genero, String titulo, String artista, int duracao) {
		super(titulo, artista, duracao);

		this.genero = genero;
	}
	
	public String getGenero() {
		return genero;
	}
	
	public void setGenero(String newGenero) {
		this.genero = newGenero;
	}

}
