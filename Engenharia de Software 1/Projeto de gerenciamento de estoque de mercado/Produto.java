package mercadin;

import java.util.Date;
import java.util.concurrent.TimeUnit;

public class Produto {

	private String nome;
	private String marca;
	private String vencimento;
	private int quantidade;
	
	public Produto(String nome, String marca, String vencimento, int quantidade) {
		this.nome = nome;
		this.marca = marca;
		this.vencimento = vencimento;
		this.quantidade = quantidade;
	}
	
	// public int vencimento(String vencimento, String quantidade) {
		
		 
	public long obterDiferencaSemJava8(Date firstDate, Date secondDate) {
		 
        long diffInMillies = Math.abs(secondDate.getTime() - firstDate.getTime());
        long diff = TimeUnit.DAYS.convert(diffInMillies, TimeUnit.MILLISECONDS);
        System.out.println(diff);
        return diff;
    }
	
}
