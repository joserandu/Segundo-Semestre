package aula2;

public class Aluno {
	
	public String nome;
	public String matricula;
	
	public Aluno(String nome, String matricula) {
		this.nome = nome;
		this.matricula = matricula;
	}
	
	public void estudar(boolean resp) {
		
		if (resp == true) {
			System.out.println("O(a) aluno(a) " + nome + " está estudando!");
		} else {
			System.out.println("O(a) aluno(a) " + nome + " não está estudando no momento!");
		}
		
	}
	
	public void fazerProva(int num) {
		
			System.out.println("O(a) aluno(a) " + nome + " tem " + num + " prova pendentes!");
		
	}

}
