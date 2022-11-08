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
// easier
/* import java.util.Scanner;

public class Program
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String text = scanner.nextLine();
		char[] arr = text.toCharArray();
		
		//your code goes here
		
		int i;
		int sup = arr.length;
		for(i = sup - 1; i >= 0; i--){ // sup-1 because Java starts counting at 0
			System.out.println(arr[i]);
		}

		}
} */
