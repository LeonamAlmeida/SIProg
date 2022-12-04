package com.mycompany.aulas;

public class BubbleSort {
    public static void main(String[] args){

    int[] vetor = {3,6,2,1,8,4};
    int aux;
    boolean controle;

    for(int i = 0; i < vetor.length; i++){
        controle = true;
        for(int j = 0; j < vetor.length - 1; j++){

            if(vetor[j] > vetor[j+1]){ // > crescente / < decrescente
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                controle = false;
            }
        }
        if(controle){
            break; // utiliza-se break para que caso a ordem desejada esteja correta, o programa não execute mais,
        }
    }
    for(int i = 0; i < vetor.length; i++){
        System.out.println(vetor[i] + ""); // vetor sai de forma crescente
    }
    }
}
