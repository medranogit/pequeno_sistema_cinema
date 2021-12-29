#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//Filmes em cartaz.
const char* filme(float movie) {
	if (movie == 1){
		return "Vingadores 4";
	}
	if (movie == 2){
		return "Como Treinar o Seu Dragão 3";
	}
	if (movie == 3){
		return "Dumbo";
	}
	if (movie == 4){
		return "Shazam!";
	}else{
		return "Filme nao encontrado";
	}
}

//Conta do valor dos ingressos.
float conta_ingressos(float valorDoIngresso, float qtd_ingressos){
	return valorDoIngresso * qtd_ingressos;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float filme_numero, qtd_ingressos, valor_total,loop, decicao;
	// Coloque abaixo o valor de cada ingresso.
	float preco_ingresso = 12.50;
	
	//LOOP do sistema do cinema.
	while(loop != 0){
		
		//Inicio padrão do sistema do cinema.
		printf("\nSeja bem vindo ao Cinema da Região \n");
		printf("Temos em cartaz hoje: \n 1 - %s \n 2 - %s \n 3 - %s \n 4 - %s \n", filme(1), filme(2), filme(3), filme(4) );
		printf(" 9 - Para sair\n");
		printf("Escolha uma das opções acima digitando o  numero: ");
		scanf("%f", &filme_numero);
		
		//Opção de sair do programa
		if(filme_numero == 9){
			break;
		}
		//Opção caso nao ache o filme.
		if(filme(filme_numero) == "Filme nao encontrado"){
			printf("\n//%s//\n",filme(filme_numero));
			continue;
		}
		// Caso tudo ocorra bem. Continue.
		else{
			// Mensagens do valor e do filme escolhido.
			printf("\nVoce escolheu o filme %s. \n\n", filme(filme_numero));
			printf("Cada ingresso custa R$ 12,50.\nColoque quantos gostaria de comprar: ");
			scanf("%f", &qtd_ingressos);
			
			//Chamando função da conta.
			valor_total = conta_ingressos(preco_ingresso, qtd_ingressos);
			
			//Demonstração de valor e filme escolhido.
			printf("\nEntão irá ficar %g ingressos pelo valor de R$: %.2f. \nPara o filme: %s.\n\n", qtd_ingressos,valor_total,filme(filme_numero));
			
			//Opções de confirmação.
			printf("1 para confirmar\n2 para recomeçar\n3 para sair\nDigite: ");
			scanf("%f", &decicao);
			
			if(decicao == 1){
				printf("\nComprado com sucesso\n");
				break;
			}
			if(decicao == 2){
				continue;
			}
			if(decicao == 3){
				break;
			}
			
		}
	}
	//printf("%g", valor_total);
	//printf("%g", qtd_ingressos);
	
	system("pause");
	return 0;	
}
