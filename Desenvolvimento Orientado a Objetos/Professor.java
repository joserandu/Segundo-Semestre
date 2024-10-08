package exercicio2;

public class Professor {
	
	public String nome;
	public String prontuario;
	public String disciplina_lecionada;
	public String email; 
	public int n_emprestimos = 0;
	
	public void emprestimo(String livro, String nome) {
		System.out.println("O livro " + livro + " foi emprestado para o(a) professor(a): " + nome);
	}
	
	public void devolucao(boolean devolucao) {
		System.out.println("Devolvido: " + devolucao);
	}
}
