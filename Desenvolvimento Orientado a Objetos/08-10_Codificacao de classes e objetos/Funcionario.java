package exercicio2;

public class Funcionario {

	public String nome;
	public String cargo;
	public String telefone;
	public String email; 
	public int n_emprestimos;
	
	public void emprestimo(String livro, String nome) {
		System.out.println("O livro " + livro + " foi emprestado para o(a) funcionario(a): " + nome);
	}
	
	public void devolucao(boolean devolucao) {
		System.out.println("Devolvido: " + devolucao);
	}
}
