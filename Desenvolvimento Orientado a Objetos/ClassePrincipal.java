package exercicio2;

public class ClassePrincipal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Funcionario funcionario1 = new Funcionario();
		
		funcionario1.nome = "José Augusto";
		funcionario1.email = "jose.augusto@ifsp.edu.br";
		funcionario1.telefone = "11985274166";
		funcionario1.cargo = "Assistente de TI";
		funcionario1.n_emprestimos = 0;
		
		funcionario1.emprestimo("Dicas em linguagem C", funcionario1.nome);;
		
		funcionario1.devolucao(true);
		
		System.out.println("-----------------------------------------------------\n");
		
		Professor professor1 = new Professor();
		
		professor1.nome = "Wendel Marcos dos Santos";
		professor1.email = "wendel.santos@ifsp.edu.br";
		professor1.prontuario = "1190702";
		professor1.disciplina_lecionada = "SPODEOO";
		professor1.n_emprestimos = 0;
		
		professor1.emprestimo("Dicas em linguagem C", professor1.nome);;
		
		professor1.devolucao(false);
		
		System.out.println("-----------------------------------------------------\n");

		Aluno aluno1 = new Aluno();
		
		aluno1.nome = "Randú José Costa Aquino Ribeiro";
		aluno1.email = "aquino.ribeiro@aluno.ifsp.edu.br";
		aluno1.prontuario = "SP3154149";
		aluno1.turma = "2º Semestre";
		aluno1.curso = "Bacharelado em Sistemas de Informação";
		aluno1.materias = "SPODEOO";
		
		professor1.emprestimo("Dicas em linguagem C", aluno1.nome);;
		
		professor1.devolucao(true);
		
		System.out.println("-----------------------------------------------------\n");

	}

}
