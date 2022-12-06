package com.mycompany.aulas;

import java.util.Scanner;

public class GerenciadorNotas {
    public static void main(String[] args){

        final int n_alunos = 4;
        final int n_bimestres = 4;
        final double nota_minima = 70.0;

        Scanner input = new Scanner(System.in);
        String[] nomeAlunos = new String[n_alunos];
        double[][] notaAlunos = new double[n_alunos][n_bimestres];
        double[] mediaAlunos = new double[n_alunos];

        //nomes
        for(int i = 0; i < n_alunos; i++){
            System.out.println("Informe o nome do aluno " + (i+1) );
            nomeAlunos[i] = input.nextLine();
        }
        System.out.print("\n");

        //notas
        for(int i = 0; i < n_alunos; i++){
            for(int j = 0; j < n_bimestres; j++){
                System.out.println("Informe a nota do aluno " + nomeAlunos[i] + " No " + (j+1) + "º Bimestre" );
                notaAlunos[i][j] = input.nextDouble();
            }
        }

        //media
        for(int i = 0; i < n_alunos; i++){
            for(int j = 0; j < n_bimestres; j++){
                mediaAlunos[i] += notaAlunos[i][j];
            }
            mediaAlunos[i] /= n_bimestres; //funciona supondo que cada bimestre tenha um valor total de 100 pontos
        }

        //imprimir
        System.out.println("########## RESULTADO FINAL ##########\n");

        for(int i = 0; i < n_alunos; i++){
            if(mediaAlunos[i] >= nota_minima){
                System.out.println("Aluno " + (i+1) + "\n" + "Nome:" + nomeAlunos[i] + "\n"
                        + "Media:" + mediaAlunos[i] + "\n" + "Situação:APROVADO" + "\n");
                continue; // pula o resto do ciclo, caso seja verdade
            }
            System.out.println("Aluno " + (i+1) + "\n" + "Nome:" + nomeAlunos[i] + "\n"
                    + "Media:" + mediaAlunos[i] + "\n" + "Situação:REPROVADO" + "\n");
        }
    }
}
