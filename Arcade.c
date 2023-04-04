#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>


void main() {

	int escolha;
	int comando;
	int loading;
	printf("CONNECTING ROOTS CONSOLE DE JOGOS ELETRONICOS   v1.50\n");
	printf("\n\nGostaria de iniciar\?:\n");
	printf("SIM[1] NAO[0] \n->");
	scanf("%i",&escolha);

	while(escolha == 1) {

		printf("\n  ********************************************************************\n");
		printf("  ********************************************************************\n");
		printf("  ********  OPCOES DE JOGOS:                                  ********\n");
		printf("  ******** - Opcao [1]: Pergunta e resposta                   ********\n");
		printf("  ******** - Opcao [2]: Cobra na caixa                        ********\n");
		printf("  ******** - Opcao [3]: Sair                                  ********\n");
		printf("  ********************************************************************\n");
		printf("  ********************************************************************\n");
		printf("\nComando: ");
		scanf("%i",&comando);

		switch(comando) {
			case 1:
				while(comando==1) {

					//// PRIMEIRO JOGO //// 

					int resposta[5];
					printf("\nVoce escolheu jogar: \n\n");
					printf("          ************************");
					printf("\n          * PERGUNTE E RESPONDA! *\n");
					printf("          ************************");
					printf("\n- Digite o numero correspondente a sua resposta\n\n");

					//pergunta 1
					printf("1 - O que significa Washington DC\?\n");
					printf("\n1) Washington District of Capital");
					printf("\n2) Washington District of Columbia");
					printf("\n3) Washington District of Court\n->");
					printf("\n4) Washington District of Canada\n->");
					scanf("%i",&resposta[0]);
					if(resposta[0] ==2) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[0]!= 2 ) {
						printf("- Resposta errada, a resposta correta era: Washington District of Columbia\n\n\n");
					}

					//pergunta 2
					printf("2 - Qual o nome da formula mais conhecida da equacao do segundo grau\?\n");
					printf("\n1) Formula de Black-Scholes");
					printf("\n2) Formula de Bhaskara");
					printf("\n3) Formula de Euler");
					printf("\n4) Formula de Heron\n->");
					scanf("%i",&resposta[1]);
					if(resposta[1]==2) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[1]!=1) {
						printf("- Respota errada,a respota correta era: Formula de Bhaskara\n\n\n");
					}
					
					//pergunta 3
					printf("3 - Qual o Poder de Luta do Freeza na sua 2 transformaÁao?\?\n");
					printf("\n1) 1.000.000");
					printf("\n2) 500.000");
					printf("\n3) 500.000");
					printf("\n4) 8.000 \n->");
					scanf("%i",&resposta[2]);
					if(resposta[2]==1) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else {
						printf("- Respota errada,a respota correta era: 1.000.000 \n\n\n");
					}
					
					//pergunta 4
					printf("4 - Qual o nome do antigo Rei dos piratas\?\n");
					printf("\n1) Gold Roger");
					printf("\n2) Shanks");
					printf("\n3) Gol D. Roger");
					printf("\n4) Albert Einstein\n->");
					scanf("%i",&resposta[3]);
					if(resposta[3]==3) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else {
						printf("- Respota errada,a respota correta era: Gol D. Roger\n\n\n");
					}

					//pergunta 5
					printf("Ultima pergunta: Quem foi FIBONACCI\?\n");
					printf("\n1) Um pintor renascentista");
					printf("\n2) Ator italiano");
					printf("\n3) Um cientista da computaÁ„o\n->");
					printf("\n4) Um matematico\n->");
					scanf("%i",&resposta[4]);
					if(resposta[4]==4) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else {
						printf("- Resposta incorreta, a resposta correta era:Um matematico\n\n\n");
					}



					printf(" DESEJA JOGAR NOVAMENTE \?\n SIM[1] VOLTAR PARA MENU [0]\n");
					scanf("%i",&comando);
				}
				break;
				
			case 2:
				while(comando==2) {

					//// SEGUNDO JOGO ////
					srand(time(NULL));
					char nome1[15],nome2[15];
					int caixas[5];
					int i, cobra = 0, botao = 0;
					
					
					// Definindo aleatoriamente quem ira come√ßar o jogo 
					int vez = rand()% 2;
					
					//Selecionando aleatoriamente a caixa contendo a cobra e o bot„o
					for(i=0; i<5; i++){
						caixas[i] = 0;
					}
					while(cobra == botao)
					{
						cobra = rand()%5;
						botao = rand()%5;
					}
					caixas[cobra] = 1;
					caixas[botao] = 4;

					printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
					printf("\n \t\t\t    Cobra na caixa    \n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n");
					
					printf("\n-Digite o nome dos dois jogadores que irao jogar.");
					fflush(stdin);
					printf("\n\n-Digite o nome do primeiro jogador:");
					fgets(nome1, 15, stdin);
					printf("-Digite o nome do segundo  jogador:");
					fgets(nome2, 15, stdin);
					
					printf("\n-%s e seu colega de trabalho %s estavam explorando a tumba do farao Neebe quando",nome1, nome2);
					printf("\n-entraram em uma grande sala com escrituras na parede. Enquanto inspecionavam as");
					printf("\n-escrituras, eles acidentalmente pressionaram um botao escondido que lacrou as");
					printf("\n-portas, prendendo-os la dentro. Entao, cinco caixas apareceram no centro da sala, uma");
					printf("\n-delas contendo o botao para abrir as portas, mas uma delas contem uma cobra mortal!");
					printf("\n-%s e %s decidem jogar turnos para abrir uma caixa de cada vez, na esperanca de nao", nome1, nome2);
					printf("\n-Encontrar a cobra\n");
					
					
					bool gameOver = false;
					
					while(gameOver == false){
						char jogadorDaVez[15];
						int escolhaDoJogador;

						//Alterando as vezes entre os jogadores 
						if(vez == 0){
							strcpy(jogadorDaVez, nome1);
							vez = 1;
						} else {
							strcpy(jogadorDaVez, nome2);
							vez = 0;
						}
						
						//Escolha da caixa do jogador
						printf("Escolha uma das caixas %s\n", jogadorDaVez);
						for(i = 0; i < 5; i++){
							if(caixas[i] != 3){
								printf("[%d]\t", i+1);
							}
						}
						printf("\n\nCaixa escolhida: ");
						scanf("%d", &escolhaDoJogador);
						
						//CondiÁao que verifica se o jogador escolheu a caixa com a cobra, se sim entao game over, se n√£o a caixa vai ser excluida e a rodada segue
						if(caixas[escolhaDoJogador-1] == 1){
							printf("\n\n@@@@@@@@@@@     O jogador %s foi mordido pela cobra e acabou morto dentro da tumba do farao neebe     @@@@@@@@@@@", jogadorDaVez);
							gameOver = true;
						} else if(caixas[escolhaDoJogador-1] == 4) {
							printf("\n\n@@@@@@@@@@@         O botao foi encontrado e ambos conseguiram escapar da tumba do faro neebe         @@@@@@@@@@@", jogadorDaVez);
							gameOver = true;
						} else {
							printf("A caixa [%d] esta VAZIA\n\n", escolhaDoJogador);
							caixas[escolhaDoJogador-1] = 3;
						}
						
					}


					printf("\n\n-Gostaria de jogar olho de cobra de novo\?\n\nSIM[2] NAO[0]\n");
					scanf("%i",&comando);
				}
				break;

			case 3:

				printf("\n\n\n\n\n\n\n\n\n");
				printf("       \t\t GAME OVER   \n");
				printf("\n\t    CRIADORES: Fabio Gabriel, Joao Matheus Pessoa, Jefferson Dantas   \n");
				
			
				printf("\n PROGRAMA ENCERRADO!");
				exit(0);
				break;
		} 
	}
}