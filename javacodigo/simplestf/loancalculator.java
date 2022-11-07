// loan -> 10% a month
import java.util.Scanner;

public class Program
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int amount = scanner.nextInt();
		//your code goes here
		int remaining_amount = 0;
		int payment;
		int i;
		for(i = 0; i < 3; i++){
			payment = amount/10;
			remaining_amount = amount - payment;
			amount = remaining_amount;
		}
		System.out.println(remaining_amount);
	}
}
