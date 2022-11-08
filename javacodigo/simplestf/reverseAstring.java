import java.util.Scanner;

public class Program
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String text = scanner.nextLine();
		char[] arr = text.toCharArray();
		
		//your code goes here
		
		int i;
		char init;
		int x = arr.length;
		int j = x - 1;
		for(i = 0; i < x/2; i++){
			init = arr[i];
			arr[i] = arr[j];
			arr[j] = init;
			j--;
		}
		System.out.println(arr);
	}
}
