#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void Bicicleta(int tempo, int tempo_suporte, float valor, float valor_total_desconto, float valor_total){

    int i;
    for(i = 1; i <= 24; i++){
        if((tempo/60) == i){
            valor = valor + (0.50*i);
            tempo = tempo - (60*i);
        }
    }
    if(tempo > 0 && tempo <= 15){
        valor += 0.10;
    }
    if(tempo > 15 && tempo <= 30){
        valor += 0.20;
    }
    if(tempo > 30 && tempo <= 45){
        valor += 0.40;
    }
    if(tempo > 45 && tempo <= 60){
        valor += 0.50;
    }

    printf("Tipo de veiculo: Bicicleta\n");
    valor_total += valor;
    printf("Valor total sem desconto: R$%.2f\n", valor_total);

    if(tempo_suporte >= 120){
        valor_total_desconto += (float)(valor/10)*9;
        printf("Valor total com desconto: R$%.2f\n", valor_total_desconto);
    }else{
        printf("Sem desconto em menos de 2 horas de uso!");
    }
}
void Moto(int tempo, int tempo_suporte, float valor, float valor_total_desconto, float valor_total){

    int i;
    for(i = 1; i <= 24; i++){
        if((tempo/60) == i){
            valor = valor + (2*i);
            tempo = tempo - (60*i);
        }
    }
    if(tempo > 0 && tempo <= 15){
        valor += 0.50;
    }
    if(tempo > 15 && tempo <= 30){
        valor += 1;
    }
    if(tempo > 30 && tempo <= 45){
        valor += 1.50;
    }
    if(tempo > 45 && tempo <= 60){
        valor += 2;
    }

    printf("Tipo de veiculo: Moto\n");
    valor_total += valor;
    printf("Valor total sem desconto: R$%.2f\n", valor_total);

    if(tempo_suporte >= 120){
        valor_total_desconto += (float)(valor/20)*19;
        printf("Valor total com desconto: R$%.2f\n", valor_total_desconto);
    }else{
        printf("Sem desconto em menos de 2 horas de uso!");
    }
}
void Carro(int tempo, int tempo_suporte, float valor, float valor_total_desconto, float valor_total){

    int i;
    for(i = 1; i <= 24; i++){
        if((tempo/60) == i){
            valor = valor + (5*i);
            tempo = tempo - (60*i);
        }
    }
    if(tempo > 0 && tempo <= 15){
        valor += 2;
    }
    if(tempo > 15 && tempo <= 30){
        valor += 3;
    }
    if(tempo > 30 && tempo <= 45){
        valor += 4;
    }
    if(tempo > 45 && tempo <= 60){
        valor += 5;
    }

    printf("Tipo de veiculo: Carro\n");
    valor_total += valor;
    printf("Valor total sem desconto: R$%.2f\n", valor_total);

    if(tempo_suporte >= 120){
        valor_total_desconto += (float)(valor/100)*97;
        printf("Valor total com desconto: R$%.2f\n", valor_total_desconto);
    }else{
        printf("Sem desconto em menos de 2 horas de uso!");
    }
}
void Van(int tempo, int tempo_suporte, float valor, float valor_total_desconto, float valor_total){

    int i;
    for(i = 1; i <= 24; i++){
        if((tempo/60) == i){
            valor = valor + (8*i);
            tempo = tempo - (60*i);
        }
    }
    if(tempo > 0 && tempo <= 15){
        valor += 5;
    }
    if(tempo > 15 && tempo <= 30){
        valor += 6;
    }
    if(tempo > 30 && tempo <= 45){
        valor += 7;
    }
    if(tempo > 45 && tempo <= 60){
        valor += 8;
    }

    printf("Tipo de veiculo: Van\n");
    valor_total += valor;
    printf("Valor total sem desconto: R$%.2f\n", valor_total);

    if(tempo_suporte >= 120){
        valor_total_desconto += (float)(valor/100)*98;
        printf("Valor total com desconto: R$%.2f\n", valor_total_desconto);
    }else{
        printf("Sem desconto em menos de 2 horas de uso!");
    }
}
void Caminhao(int tempo, int tempo_suporte, float valor, float valor_total_desconto, float valor_total){

    int i;
    for(i = 1; i <= 24; i++){
        if((tempo/60) == i){
            valor = valor + (12*i);
            tempo = tempo - (60*i);
        }
    }
    if(tempo > 0 && tempo <= 15){
        valor += 9;
    }
    if(tempo > 15 && tempo <= 30){
        valor += 10;
    }
    if(tempo > 30 && tempo <= 45){
        valor += 11;
    }
    if(tempo > 45 && tempo <= 60){
        valor += 12;
    }

    printf("Tipo de veiculo: Caminhão\n");
    valor_total += valor;
    printf("Valor total sem desconto: R$%.2f\n", valor_total);

    if(tempo_suporte >= 120){
        valor_total_desconto += (float)(valor/100)*99;
        printf("Valor total com desconto: R$%.2f\n", valor_total_desconto);
    }else{
        printf("Sem desconto em menos de 2 horas de uso!");
    }
}
int main(){

    setlocale(LC_ALL, "Portuguese");
    int h_inicial, min_inicial;
    int h_final, min_final;
    int tempo, tempo_suporte, i;
    int horas, minutos;
    char tipo_veiculo[51];
    float valor = 0;
    float valor_total = 0, valor_total_desconto = 0;

    printf("Informe a hora inicial: \n");
    scanf("%d %d", &h_inicial,&min_inicial);
    printf("Informe a hora final: \n");
    scanf("%d %d", &h_final, &min_final);
    printf("Tipo de veiculo (bicicleta, moto, carro, van, caminhao): \n");
    setbuf(stdin, NULL);
    gets(tipo_veiculo);

    tempo = ((h_final*60) + min_final) - ((h_inicial*60) + min_inicial);
    horas = tempo/60;
    minutos = tempo % 60;
    printf("Tempo de uso: %dh:%dmin\n", horas, minutos);
    tempo_suporte = tempo;

    if(strcmp(tipo_veiculo,"bicicleta") == 0){
        Bicicleta(tempo, tempo_suporte, valor, valor_total_desconto, valor_total);
    }

    else if(strcmp(tipo_veiculo,"moto") == 0){
        Moto(tempo, tempo_suporte, valor, valor_total_desconto, valor_total);
    }
    else if(strcmp(tipo_veiculo,"carro") == 0){
        Carro(tempo, tempo_suporte, valor, valor_total_desconto, valor_total);
    }
    else if(strcmp(tipo_veiculo,"van") == 0){
        Van(tempo, tempo_suporte, valor, valor_total_desconto, valor_total);
    }
    else if(strcmp(tipo_veiculo,"caminhao") == 0){
        Caminhao(tempo, tempo_suporte, valor, valor_total_desconto, valor_total);
    }

    return 0;
    }
