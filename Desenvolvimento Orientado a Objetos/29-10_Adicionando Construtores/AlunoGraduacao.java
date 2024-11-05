package aula2;

public class AlunoGraduacao extends Aluno{

	public AlunoGraduacao(String nome, String matricula) {
		super(nome, matricula);
		
		this.curso = curso;
	}

	public String curso;
	
	
	
	public void fazerEstagio(boolean resp) {
		
		if (resp == true) {
			System.out.println("O(a) aluno(a) " + nome + " está fazendo estágio.");
		} else {
			System.out.println("O(a) aluno(a) " + nome + " não está fazendo estágio.");
		}
	
	}
	
}
