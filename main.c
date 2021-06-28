#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao = 3;
	
	printf("************* Bem vindo ao sistema de controle x *************\n");
	printf("*               Selecione a forma de operacao                *\n");
	printf("*                 1 - Ligar     0 - Desligar                 *\n");
	printf("*                  Digite a opcao desejada:                  *\n");
	scanf("%d",&opcao);
	while(opcao == 1){
	printf("*                    Equipamento Ligado!                     *\n");
	
		// Seu codigo funcional escrito aqui
		// Apresentar as funcionalidades disponï¿½veis
		// Chamar cada uma das funçõeses implementadas conforme escolhido no menu
		// Ao final de cada execução exibir a mensagem solicitando se deseja desligar
		
		printf("*   Digite a opcao desejada (1 - Continuar   0 - Desligar)   *\n");
		scanf("%d",&opcao);
		
	}
	printf("*                  Equipamento Desligado!                    *\n");	
	return 0;
}
