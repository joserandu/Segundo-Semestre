package exercicio2;

public class Aluno {
	
	public String nome;
	public String prontuario;
	public String turma;
	public String curso;
	public String materias;
	public String email; 
	public int n_emprestimos = 0;
	
	public void emprestimo(String livro, String nome) {
		System.out.println("O livro " + livro + " foi emprestado para o(a) aluno(a): " + nome);
	}
	
	public void devolucao(boolean devolucao) {
		System.out.println("Devolvido: " + devolucao);
	}
	
}
