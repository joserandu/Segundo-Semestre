package aula2;

public class ClassePrincipal {

	public static void main(String[] args) {

		AlunoGraduacao alunoG = new AlunoGraduacao("Randú José", "SP3154149");
		
		alunoG.curso = "Bacharelado em Sistemas de Informação";
		
		boolean resp = true;
		
		alunoG.estudar(resp);
		alunoG.fazerProva(3);
		alunoG.fazerEstagio(false);
		
		System.out.println("--------------------------------------------------------------------------------------------------------");
		
		AlunoPosGraduacao alunoPG = new AlunoPosGraduacao("Fernando", "SPXXXXXX");
		
		alunoPG.areaPesquisa = "Segurança da Informação";
		alunoPG.estudar(false);
		alunoPG.fazerProva(5);
		alunoPG.defenderTese("O uso de metodologias ágeis para melhorar a cyber security das empresas médias");
		
		System.out.println("--------------------------------------------------------------------------------------------------------");

		AlunoTecnico alunoT = new AlunoTecnico("Edvaldo Nunes", "SPXXXXXX");
		
		alunoT.cargaHoraria = 350;
		alunoT.estudar(false);
		alunoT.fazerProva(2);
		alunoT.realizarProjeto("Projeto de Semáforo utilizando Arduino");
		
	}

}
