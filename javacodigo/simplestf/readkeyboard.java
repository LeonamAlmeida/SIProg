import java.util.Scanner; /* necessario para fazer a leitura do teclado */

class MyClass {
    public static void main(String[ ] args) {
        Scanner myVar = new Scanner(System.in); /* aqui ocorre a leitura */
        System.out.println(myVar.nextLine()); /* printa o valor lido */   
    }
}
