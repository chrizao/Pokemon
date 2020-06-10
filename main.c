#include <stdio.h>
#include <windows.h>
#include <time.h>

void main(int argc, char *argv[]) {

	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 780, 720, TRUE);
	
	int i;
	
	int pokemon1[5], pokemon2[5], pokemon3[5], pokemon4[5], pokemon5[5], pokemon6[5], pokemon7[5], pokemon8[5], pokemon9[5], pokemon10[5], pokemon11[5], pokemon12[5];
	int ataque1, ataque2, ataque3, ataque4;
	
	int levelCharmander = 5;
	int levelSquirtle = 5;
	int levelBulbassaur = 5;
	
	int vidaCharmander = 20;
	int vidaSquirtle = 20;
	int vidaBulbassaur = 20;
	
	int incrementacaoVida;  // Mudar depois
	int incrementalDano;    // Mudar depois
	
	int tipoNormal = 0;
	int tipoAgua = 1;
	int tipoFogo = 2;
	int tipoPlanta = 3;
	
	// int ataque[] = {IDAtaque, numeroAtaques, tipo, dano, defesa, velocidade, chanceAcerto};
	int scratch[] = {1, 15, tipoNormal, 2, 0, 50, 100};
	int growl[] = {2, 10, tipoNormal, 0, -10, 50, 100};
	int ember[] = {3, 8, tipoFogo, 10, 0, 55, 75};
	
	int ataquesCharmander[4] = {ataque1 = scratch, ataque2 = growl, ataque3, ataque4};
	int ataquesSquirtle[4] = {ataque1 = scratch, ataque2 = growl, ataque3, ataque4};
	int ataquesBulbassaur[4] = {ataque1 = scratch, ataque2 = growl, ataque3, ataque4};
	
	int ash[6][5] = {pokemon1, pokemon2, pokemon3, pokemon4, pokemon5, pokemon6};  // ash[pokemons][definicao de pokemon]
	int gary[6][5] = {pokemon7, pokemon8, pokemon9, pokemon10, pokemon11, pokemon12};  // gary[pokemons][definicao de pokemon]
	
	// int pokemon[] = {IDPokemon, nivel, vida, tipo, ataques[4]};
	int charmander[] = {1, levelCharmander, vidaCharmander, tipoFogo, ataquesCharmander};
	int squirtle[] = {2, levelSquirtle, vidaSquirtle, tipoAgua, ataquesSquirtle};
	int bulbassaur[] = {3, levelBulbassaur, vidaBulbassaur, tipoPlanta, ataquesBulbassaur};
	
	int escolhaUsuario, ataqueUsuario, ataqueIa;
	
	printf("Ola Ash, para iniciar a sua jornada como um treinador Pokemon, escolha um Pokemon inicial:\n");
	printf("Voce pode escolher entre o 1 = charmander, 2 = squirtle e o 3 = bulbassaur\n");
	scanf("%d", &escolhaUsuario);
	
	if(escolhaUsuario == 1){
		for(i = 0; i <= 4; i++){
			pokemon1[i] = charmander[i];
		}
		
		system("cls");  // Limpa tela
	
		printf("Professor Oak:\n");
		printf("Agora que voce escolheu o Charmander como seu pokemon, voce deve treina-lo para batalhar e\npara que ele cresca e fique forte.  Ele eh um pokemon do tipo Fogo, e eh forte contra\nPokemons do tipo Planta.\n");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Gary Oak:\n");
		printf("Mas vovo, e eu?!");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Professor Oak:\n");
		printf("Calma meu neto, agora voce pode escolher o seu pokemon.\n");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Gary escolhe o Squirtle.");
		printf("\npressione para continuar...");
		for(i = 0; i <= 4; i++){
			pokemon7[i] = squirtle[i];
		}
		getch();
		
		system("cls");
		
		printf("Gary te desafiou para uma batalha!");
		printf("\npressione para continuar...");
		getch();
		
		while(pokemon1[2] > 0 && pokemon7[2] > 0){
			printf("\nSelecione um ataque:\n");
			printf("Scratch(1)\n");
			printf("Growl(2)\n");
			scanf("%d", &ataqueUsuario);
		
			if(ataqueUsuario == 1){
				printf("Charmander usou Scratch!\n");
				pokemon7[2] -= scratch[3];
				printf("Squirtle recebeu %d e agora tem %d pontos de vida\n", scratch[3], pokemon7[2]);
				if(pokemon7[2] <= 0){
					printf("Squirtle esta fora de combate\n");
					printf("Charmander e o vencedor!");
					break;
				}
			}else if(ataqueUsuario == 2){
				printf("Charmander usou Growl!\n");
			}
			
			ataqueIa = rand() % 2;
			ataqueIa += 1;
			
			if(ataqueIa == 1){
				printf("Squirtle usou Scratch!\n");
				pokemon1[2] -= scratch[3];
				printf("Charmander recebeu %d e agora tem %d pontos de vida\n", scratch[3], pokemon1[2]);
				if(pokemon1[2] <= 0){
					printf("Charmander esta fora de combate\n");
					printf("Squirtle e o vencedor!");
					break;
				}
			}else if(ataqueIa == 2){
				printf("Squirtle usou Growl!\n");
			}
		}
		
	}
		
		
		
		
	else if(escolhaUsuario == 2){
		for(i = 0; i <= 4; i++){
			pokemon1[i] = squirtle[i];
		}
		
		system("cls");  // Limpa tela
	
		printf("Professor Oak:\n");
		printf("Agora que voce escolheu o Squirtle como seu pokemon, voce deve treina-lo para batalhar e\npara que ele cresca e fique forte.  Ele eh um pokemon do tipo Agua, e eh forte contra\nPokemons do tipo Fogo.\n");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Gary Oak:\n");
		printf("Mas vovo, e eu?!");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Professor Oak:\n");
		printf("Calma meu neto, agora voce pode escolher o seu pokemon.\n");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Gary escolhe o Bulbassaur.");
		printf("\npressione para continuar...");
		for(i = 0; i <= 4; i++){
			pokemon7[i] = bulbassaur[i];
		}
		getch();
		
		system("cls");
		
		printf("Gary te desafiou para uma batalha!");
		printf("\npressione para continuar...");
		getch();
		
		
		while(pokemon1[2] > 0 && pokemon7[2] > 0){
			printf("\nSelecione um ataque:\n");
			printf("Scratch(1)\n");
			printf("Growl(2)\n");
			scanf("%d", &ataqueUsuario);
		
		if(ataqueUsuario == 1){
				printf("Squirtle usou Scratch!\n");
				pokemon7[2] -= scratch[3];
				printf("Bulbassaur recebeu %d e agora tem %d pontos de vida\n", scratch[3], pokemon7[2]);
				if(pokemon7[2] <= 0){
					printf("Bulbassaur esta fora de combate\n");
					printf("Squirtle é o vencedor!");
					break;
				}
			}else if(ataqueUsuario == 2){
				printf("Bulbassaur usou Growl!\n");
			}
			
			ataqueIa = rand() % 2;
			ataqueIa += 1;
			
			if(ataqueIa == 1){
				printf("Bulbassaur usou Scratch!\n");
				pokemon1[2] -= scratch[3];
				printf("Squirtle recebeu %d e agora tem %d pontos de vida\n", scratch[3], pokemon1[2]);
				if(pokemon1[2] <= 0){
					printf("Squirtle esta fora de combate\n");
					printf("Bulbassaur e o vencedor!");
					break;
				}
			}else if(ataqueIa == 2){
				printf("Bulbassaur usou Growl!\n");
			}
		}
	}
	else{
		for(i = 0; i <= 4; i++){
			pokemon1[i] = bulbassaur[i];
		}
		
		system("cls");  // Limpa tela
	
		printf("Professor Oak:\n");
		printf("Agora que voce escolheu o Bulbassaur como seu pokemon, voce deve treina-lo para batalhar e\npara que ele\ncresca e fique forte.  Ele eh um pokemon do tipo Planta, e eh forte contra\nPokemons do tipo Agua.\n");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Gary Oak:\n");
		printf("Mas vovo, e eu?!");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Professor Oak:\n");
		printf("Calma meu neto, agora voce pode escolher o seu pokemon.\n");
		printf("\npressione para continuar...");
		getch();
		
		system("cls");
		
		printf("Gary escolhe o Charmander.");
		printf("\npressione para continuar...");
		for(i = 0; i <= 4; i++){
			pokemon7[i] = charmander[i];
		}
		getch();
		
		system("cls");
		
		printf("Gary te desafiou para uma batalha!");
		printf("\npressione para continuar...");
		getch();
		
		while(pokemon1[2] > 0 && pokemon7[2] > 0){
			printf("\nSelecione um ataque:\n");
			printf("Scratch(1)\n");
			printf("Growl(2)\n");
			scanf("%d", &ataqueUsuario);
		
		if(ataqueUsuario == 1){
				printf("Bulbassaur usou Scratch!\n");
				pokemon7[2] -= scratch[3];
				printf("Charmander recebeu %d e agora tem %d pontos de vida\n", scratch[3], pokemon7[2]);
				if(pokemon7[2] <= 0){
					printf("Charmander esta fora de combate\n");
					printf("Bulbassaur e o vencedor!");
					break;
				}
			}else if(ataqueUsuario == 2){
				printf("Bulbassaur usou Growl!\n");
			}
			
			ataqueIa = rand() % 2;
			ataqueIa += 1;
			
			if(ataqueIa == 1){
				printf("Charmander usou Scratch!\n");
				pokemon1[2] -= scratch[3];
				printf("Bulbassaur recebeu %d e agora tem %d pontos de vida\n", scratch[3], pokemon1[2]);
				if(pokemon1[2] <= 0){
					printf("Bulbassaur esta fora de combate\n");
					printf("Charmander e o vencedor!");
					break;
				}
			}else if(ataqueIa == 2){
				printf("Charmander usou Growl!\n");
			}
		}
	}
	
	
	getch();
}
