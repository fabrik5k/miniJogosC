#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>


void main() {

	// tamanho do compilador
	SMALL_RECT windowSize = {0, 0, 71, 40};
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
	system ("color 2");

	int escolha;
	int comando;
	int loading;
	printf("ROBCO CONSOLE DE JOGOS ELETRONICOS   v1.10\n");
	printf("\n\nGostaria de iniciar\?:\n");
	printf("SIM[1] NAO[0] \n->");
	scanf("%i",&escolha);

	while(escolha == 1) {

		printf("\n  ********************************************************************\n");
		printf("  ********************************************************************\n");
		printf("  ********  XXX      XXX  XXXXXXX  XXXX        XX  XX     XX  ********\n");
		printf("  ********  XX XX  XX XX  XX       XX  XX      XX  XX     XX  ********\n");
		printf("  ********  XX   XX   XX  XX       XX   XX     XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XXXXX    XX    XX    XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XX       XX      XX  XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XX       XX       XX XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XXXXXXX  XX         XXX  XXXXXXXXX  ********\n");
		printf("  ********                                                    ********\n");
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

					// carregando jogo
					printf("\nAguarde o jogo ser carregado...\n");
					char load[11] = "carregando\n";
					for (loading = 0; loading < 11; loading++) {
						printf("%c ",load[loading]);
						Sleep(500); // sleep 0,5 segundo
					}

					//// PRIMEIRO JOGO //// 

					int resposta[3];
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
					scanf("%i",&resposta[0]);
					if(resposta[0] ==2) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[0]!= 2 ) {
						printf("- Resposta errada, a resposta correta era: Washington District of Columbia\n\n\n");
					}

					//pergunta 2
					printf("2 - Qual o nome da formula mais conhecida da equacao do segundo grau\?\n");
					printf("\n1) Formula de Bhaskara");
					printf("\n2) Formula de Euler");
					printf("\n3) Formula de Heron\n->");
					scanf("%i",&resposta[1]);
					if(resposta[1]==1) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[1]!=1) {
						printf("- Respota errada,a respota correta era: Formula de Bhaskara\n\n\n");
					}

					//pergunta 3
					printf("Ultima pergunta: Quem foi FIBONACCI\?\n");
					printf("\n1) Um pintor renascentista");
					printf("\n2) Ator italiano");
					printf("\n3) Um matematico\n->");
					scanf("%i",&resposta[2]);
					if(resposta[2]==3) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[2]!=3) {
						printf("- Resposta incorreta, a resposta correta era:Um matematico\n\n\n");
					}



					printf(" DESEJA JOGAR NOVAMENTE \?\n SIM[1] VOLTAR PARA MENU [0]\n");
					scanf("%i",&comando);
				}
				break;
				
			case 2:
				while(comando==2) {

					// carregando jogo
					printf("Aguarde o jogo ser carregado...\n");
					char load[11] = "carregando\n";
					for (loading = 0; loading < 11; loading++) {
						printf("%c ",load[loading]);
						Sleep(500); // sleep 0,5 segundo
					}

					//// SEGUNDO JOGO ////

					srand(time(NULL));
					char nome1[15],nome2[15];
					int caixas[5];
					int i;
					
					// Definindo aleatoriamente quem irá começar o jogo 
					int vez = rand()% 2;
					
					//Selecionando aleatoriamente a caixa contendo a cobra
					for(i=0; i<5; i++){
						caixas[i] = 0;
					}
					caixas[rand()%5] = 1;

					printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
					printf("\n \t\t\t    Cobre na caixa    \n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n");
					
					printf("\n-Digite o nome dos dois jogadores que irão jogar.");
					fflush(stdin);
					printf("\n\n-Digite o nome do primeiro jogador:");
					fgets(nome1, 15, stdin);
					printf("-Digite o nome do segundo  jogador:");
					fgets(nome2, 15, stdin);
					
					printf("\n-%s e seu colega de trabalho %s estavam explorando a tumba do faraó Neebe quando",nome1, nome2);
					printf("\n-entraram em uma grande sala com escrituras na parede. Enquanto inspecionavam as");
					printf("\n-escrituras, eles acidentalmente pressionaram um botão escondido que lacrou as");
					printf("\n-portas, prendendo-os lá dentro. Então, cinco caixas apareceram no centro da sala, uma");
					printf("\n-delas contendo o botão para abrir as portas, mas uma delas contém uma cobra mortal!");
					printf("\n-%s e %s decidem jogar turnos para abrir uma caixa de cada vez, na esperança de não", nome1, nome2);
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
						
						//Condição que verifica se o jogador escolheu a caixa com a cobra, se sim entao game over, se não a caixa vai ser excluida e a rodada segue
						printf("\n\nCaixa escolhida pelo jogador:");
						scanf("%d", &escolhaDoJogador);
						if(caixas[escolhaDoJogador-1] == 1){
							printf("\n\n@@@@@@@@@@@     O JOGADOR %s FOI MORDIDO PELA COBRA E ACABOU MORTO DENTRO DA TUMBA DO FARAÓ NEEBE     @@@@@@@@@@@", jogadorDaVez);
							gameOver = true;
						} else {
							caixas[escolhaDoJogador-1] = 3;
						}
						
					}


					printf("\n\n-Gostaria de jogar olho de cobra de novo\?\n\nSIM[2] NAO[0]\n");
					scanf("%i",&comando);
				}
				break;

			case 3:

				printf("\n\n\n\n\n\n\n\n\n");
				printf("       \t\tXXXXXXXXXX   XXXXX   XXX      XXX  XXXXXXX   \n");
				printf("       \t\tXX          XX   XX  XX XX  XX XX  XX        \n");
				printf("       \t\tXX          XX   XX  XX   XX   XX  XX        \n");
				printf("       \t\tXX   XXXXX  XXXXXXX  XX        XX  XXXXX     \n");
				printf("       \t\tXX   XXXXX  XX   XX  XX        XX  XX        \n");
				printf("       \t\tXX      XX  XX   XX  XX        XX  XX        \n");
				printf("       \t\tXXXXXXXXXX  XX   XX  XX        XX  XXXXXXX   \n");
				printf("\n");
				printf("       \t\tXXXXXXXX   XX      XX   XXXXXXX  XXXXXXX      \n");
				printf("       \t\tXX    XX   XX      XX   XX       XX     XX     \n");
				printf("       \t\tXX    XX   XX      XX   XX       XX     XX    \n");
				printf("       \t\tXX    XX    XX    XX    XXXXX    XXXXXXXX     \n");
				printf("       \t\tXX    XX     XX  XX     XX       XX     XX    \n");
				printf("       \t\tXX    XX      XXXX      XX       XX      XX   \n");
				printf("       \t\tXXXXXXXX       XX       XXXXXXX  XX      XX   \n");
				printf("\n\t    CRIADORES: Fábio Gabriel, João Matheus Pessoa, Jefferson Dantas   \n");
				
				char load[25] = " \n\n\n\n\n\n\n\n\nENCERRANDO...\n";
				for (loading = 0; loading < 25; loading++) {
					printf("%c ",load[loading]);
					Sleep(500); // sleep 0,5 segundo
				}
				printf("\n PROGRAMA ENCERRADO!");
				exit(0);
				break;
		} 
	}
}