import java.util.Scanner;
import java.util.Random;

public class AcertarNumero {
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        Random random = new Random();
        
        boolean acertou = false;
        int tentativas = 10;
        int numeroSecreto = random.nextInt();
        long chute = 0;
        
        while(tentativas > 0 && acertou == false){
            System.out.println("Digite o número:");
            chute = input.nextLong();
            
            if(numeroSecreto == chute){
                System.out.println("Você acertou!");
                acertou = true;
            }else if(chute < numeroSecreto){
                --tentativas;
                System.out.println("Numero muito pequeno! " + tentativas + " tentativas restantes");
            }else{
                --tentativas;
                System.out.println("Numero muito grande! " + tentativas + " tentativas restantes");
            }
            if(tentativas == 0){
                System.out.println("Suas chances acabaram!");
            }
        }
    }
}
