#include <stdio.h>
#include <ctype.h>

int main()
{
char nome [51];

int contarVogais = 0;
int i;

printf("Digite o nome do meliante\n");
gets(nome);

//for(i = 0; i < strlen(nome); i++)
for(i = 0; nome[i] != '\0'; i++){
    nome[i] = tolower(nome[i]);
    if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'){

          contarVogais++;
   }
}

printf("Quantidade de Vogais: %d\n", contarVogais);
puts(nome);

return 0;
}
