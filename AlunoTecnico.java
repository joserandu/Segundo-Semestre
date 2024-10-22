package aula2;

public class AlunoTecnico extends Aluno{

	public int cargaHoraria;
	
	public void realizarProjeto(String proj) {
		
		System.out.println("Aluno: " + nome + "\nMatricula: " + matricula + "\nCarga Horária: " + cargaHoraria + "\nProjeto: " + proj);
		
	}
	
}
