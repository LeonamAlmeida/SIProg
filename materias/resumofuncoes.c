{ 
BASEADO EM: https://www.youtube.com/watch?v=kHyxiTCjaNs 
// Procedimentos, funções, passagens de parâmetros
}

// ISSO N É UM PROGRAMA, APENAS ANOTAÇÕES SOBRE FUNÇÕES

// Sub-rotina PROCEDIMENTO é uma sub-rotina que realiza um processamento e não gera um dado de saída (void)
//ex :

void nomedoprocedimento(lista de parametros) { //lista de parametros = valores que serão utilizados dentro desse procedimento
	
	// corpo da função
	// sequencia de instruções
		
}

// EXEMPLO:

#include <stdio.h>
#include <stdlib.h>

void calculacomissao(float valor, float percentual) {
	// corpo da função
	float valorcomissao;
	
	valorcomissao = valor * percentual;
	printf("Comissao: %f\n", valorcomissao);
	
}

int main () {
	float valor, percentual;
	float valorcomissao;
	printf("Digite o valor do total do show e em seguida o percentual de comissao:\n");
	scanf("%f %f", &valor, &percentual);
	
	calculacomissao(valor, percentual); // a partir do momento que a leitura de codigo chegar aqui, ele vai ler e executar a função que foi retomada
	
	return 0;
}

// FUNÇÕES - diferentemente dos procedimentos as funções sempre geram dados como saída após sua execução 
// (passa uma entrada, realizam um processamento e retorna um dado como saída)
// ESTRUTURA das funções:

tipo nomedafuncao(lista de parametros) {
	// corpo da função
	// sequencia de instruções
	
	return valordoretorno;
}

// EXEMPLO:

#include <stdio.h>
#include <stdlib.h>

float calculacomissao(float valor, float percentual) {
	// corpo da função
	float valorcomissao;
	
	valorcomissao = valor * percentual;
	
	//OBS: A impressão não será mais feita dentro da função
	
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

// PASSAGEM DE PARÂMETROS
// os parâmetros podem ser passados de duas formas: VALOR e REFERÊNCIA
// a passagem por VALOR ocorre quando o valor contido na variavel de entrada é copiado para a variavel que representa o parâmetro da subrotina
// a passagem por REFERÊNCIA ocorre quando a variavel de entrada (argumento) para a subrotina, é enviada como parâmetro para a própria subrotina
// (passagem por valor, copia o valor, passagem por referência, envia a referência da própria variável)

// EXEMPLO:	

#include <stdio.h>
#include <stdlib.h>

void minhasubrotina(int valor, float* referencia) {
	// corpo da função
	
	valor = 20; // não impacta v (n se propaga para a variavel de entrada)
	*referencia = 20; // impacta f (modifica os argumentos - variavel de entrada da subrotina)
	
	}
// CASO queira realizar uma passagem por referência, deve adicionar um (*) antes da declaração do nome da variavel no parâmetro dela 
// E sempre que for utiliza-la dentro da função
// além disso, na chamada da função (passagem do argumento), deve-se utilizar o (&) antes da váriavel que é enviada como referência

// EXEMPLO:

int main() {
	int v; 
	float f;
	
	scanf("%d %f", &v, &f);
	
	minhasubrotina(v, &f); // n precisa de & pro valor mas pro f sim por ser uma referência
	
}
	
// that's it


