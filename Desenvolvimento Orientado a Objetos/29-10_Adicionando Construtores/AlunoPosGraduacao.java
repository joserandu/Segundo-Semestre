package aula2;

public class AlunoPosGraduacao extends Aluno{
	
	public AlunoPosGraduacao(String nome, String matricula) {
		super(nome, matricula);
		
		this.curso = curso;
		this.areaPesquisa = areaPesquisa;
	
	}


	public String areaPesquisa;
	private String curso;
	
	public void defenderTese(String tese) {
		System.out.println("Aluno: " + nome + "\nÁrea de pesquisa: " + areaPesquisa + "\nTese defendida: " + tese);
	}

}
