package aula2;

public class AlunoPosGraduacao extends Aluno{
	
	public String areaPesquisa;
	
	public void defenderTese(String tese) {
		System.out.println("Aluno: " + nome + "\nÁrea de pesquisa: " + areaPesquisa + "\nTese defendida: " + tese);
	}

}
