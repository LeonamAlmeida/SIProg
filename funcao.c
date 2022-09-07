{ 
BASEADO EM: https://www.youtube.com/watch?v=kHyxiTCjaNs 
// Procedimentos, fun��es, passagens de par�metros
}

// ISSO N � UM PROGRAMA, APENAS ANOTA��ES SOBRE FUN��ES

// Sub-rotina PROCEDIMENTO � uma sub-rotina que realiza um processamento e n�o gera um dado de sa�da (void)
//ex :

void nomedoprocedimento(lista de parametros) { //lista de parametros = valores que ser�o utilizados dentro desse procedimento
	
	// corpo da fun��o
	// sequencia de instru��es
		
}

// EXEMPLO:

#include <stdio.h>
#include <stdlib.h>

void calculacomissao(float valor, float percentual) {
	// corpo da fun��o
	float valorcomissao;
	
	valorcomissao = valor * percentual;
	printf("Comissao: %f\n", valorcomissao);
	
}

int main () {
	float valor, percentual;
	float valorcomissao;
	printf("Digite o valor do total do show e em seguida o percentual de comissao:\n");
	scanf("%f %f", &valor, &percentual);
	
	calculacomissao(valor, percentual); // a partir do momento que a leitura de codigo chegar aqui, ele vai ler e executar a fun��o que foi retomada
	
	return 0;
}

// FUN��ES - diferentemente dos procedimentos as fun��es sempre geram dados como sa�da ap�s sua execu��o 
// (passa uma entrada, realizam um processamento e retorna um dado como sa�da)
// ESTRUTURA das fun��es:

tipo nomedafuncao(lista de parametros) {
	// corpo da fun��o
	// sequencia de instru��es
	
	return valordoretorno;
}

// EXEMPLO:

#include <stdio.h>
#include <stdlib.h>

float calculacomissao(float valor, float percentual) {
	// corpo da fun��o
	float valorcomissao;
	
	valorcomissao = valor * percentual;
	
	//OBS: A impress�o n�o ser� mais feita dentro da fun��o
	
	return valorcomissao;
}

int main() { 
	float valor, percentual, valortotal;
	printf("Digite o valor do total do show e em seguida o percentual de comissao:\n");
	scanf("%f %f", &valor, &percentual);
	
	valortotal = calculacomissao(valor, percentual);
	
	printf("Comissao: %f\n", valortotal);
	
	return 0;
}

// PASSAGEM DE PAR�METROS
// os par�metros podem ser passados de duas formas: VALOR e REFER�NCIA
// a passagem por VALOR ocorre quando o valor contido na variavel de entrada � copiado para a variavel que representa o par�metro da subrotina
// a passagem por REFER�NCIA ocorre quando a variavel de entrada (argumento) para a subrotina, � enviada como par�metro para a pr�pria subrotina
// (passagem por valor, copia o valor, passagem por refer�ncia, envia a refer�ncia da pr�pria vari�vel)

// EXEMPLO:	

#include <stdio.h>
#include <stdlib.h>

void minhasubrotina(int valor, float* referencia) {
	// corpo da fun��o
	
	valor = 20; // n�o impacta v (n se propaga para a variavel de entrada)
	*referencia = 20; // impacta f (modifica os argumentos - variavel de entrada da subrotina)
	
	}
// CASO queira realizar uma passagem por refer�ncia, deve adicionar um (*) antes da declara��o do nome da variavel no par�metro dela 
// E sempre que for utiliza-la dentro da fun��o
// al�m disso, na chamada da fun��o (passagem do argumento), deve-se utilizar o (&) antes da v�riavel que � enviada como refer�ncia

// EXEMPLO:

int main() {
	int v; 
	float f;
	
	scanf("%d %f", &v, &f);
	
	minhasubrotina(v, &f); // n precisa de & pro valor mas pro f sim por ser uma refer�ncia
	
}
	
// that's it


