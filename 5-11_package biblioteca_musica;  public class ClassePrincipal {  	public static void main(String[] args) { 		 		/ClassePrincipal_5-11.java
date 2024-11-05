package biblioteca_musica;

public class ClassePrincipal {

	public static void main(String[] args) {
		
		// Musica
		Musica musica = new Musica("Trap", "Dior", "Bin e Major RD", 230);
		
		musica.exibirInfo();
		
		System.out.println("----------------------------------------------------------------------------");
		
		// getters e setters
		
		musica.setArtista("MC Poze do Rodo");
		System.out.println("Artista: " + musica.getArtista());
		
		musica.setGenero("Funk carioca");
		System.out.println("Gênero: " + musica.getGenero());
		
		musica.setTitulo("No baile nós é mídia");
		System.out.println("Título: " + musica.getTitulo());
		
		musica.setDuracao(180);
		System.out.println("Duração (s): " + musica.getDuracao());
		
		System.out.println("----------------------------------------------------------------------------");

		// Podcast
		
		Podcast pdcast = new Podcast("Sidoka", "Podpah", 7200, 237);

		pdcast.exibirInfo();
		
		System.out.println("----------------------------------------------------------------------------");

		pdcast.setArtista("Podpah");
		pdcast.setTitulo("Drauzio Varela");
		pdcast.setDuracao(8000);
		pdcast.setEpsodio(333);
		
		System.out.println("Artista: " + pdcast.getArtista() + "\nTítulo: " + pdcast.getTitulo() + "\nDuração (s): " + pdcast.getDuracao() + "\nEpisódio: " + pdcast.getEpisodio());
		
	}

}
