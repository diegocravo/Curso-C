#include <stdio.h>

int main() {
	
	//Cabeçalho do jogo
	
	printf("		 	   	   .------\\ /------.                             \n");
	printf("				   |       -       |                            \n");
	printf("				   |               |                            \n");
	printf("				   |               |                            \n");
	printf("				   |               |                            \n");
	printf("				_______________________                         \n");
	printf("				===========.===========                         \n");
	printf("				  / ~~~~~     ~~~~~ \\                          \n");
	printf("				 /|     |     |\\    |\\                        \n");
	printf("				 W   ---  / \\  ---   W                         \n");
	printf("				 \\.      |o o|      ./                         \n");
	printf("				  |                 |                           \n");
	printf("				  \\    #########    /                          \n");
	printf("				   \\  ## ----- ##  /                           \n");
	printf("				    \\##         ##/                            \n");
	printf("				     \\_____v_____/                             \n\n\n");
					
	printf("****************************************************************\n");
    printf("***************Welcome to the guessing game*********************\n");
    printf("****************************************************************\n");
    
    int nivel;
    printf("Escolha o Nível de Dificuldade:\n[1] Facil (Numero entre 0 e 10)\n[2] Dificil(Numero entre 0 e 100)\n[3] Impossible(Numero entre 0 e 1000)\nEscolha:");
    scanf("%d", &nivel);
    
    int modulo;
    switch(nivel){
    	case 1:
    		modulo = 10;
    		break;
    	case 2:
    		modulo = 100;
    		break;
    	default:
    		modulo = 1000;
    		break;	
	}
    
   	int segundos = time(0); 
	srand(segundos);
	int n1 = rand();
    
    int secretnumber = n1 % modulo;
    
    int chute;
    
    int tent = 1;
    
    double points = 1000;
    
    while(1){
		
    printf("Tentativa %d\n", tent);
    printf ("Qual o seu chute? ");
    
	scanf ("%d", &chute);
	printf("Seu chute foi %d \n", chute);
	
		if (chute <0){
			printf("You can't use negative numbers!\n'");
		
			continue;
		}
	
	int acertou = (chute == secretnumber);
	int maior =(chute > secretnumber);

	if(acertou){
	printf ("You guessed right.\n'");
	break;
	}
		
	else if(maior){
		printf("Your number is higher than the secret number!\n");
	}
		
		
	else{
		printf("Your number is lower than the secret number!\n");
	}
		tent ++;
		
		double pontosperdidos = 0;

			pontosperdidos = abs(chute - secretnumber) / (double)2;


		points = points - pontosperdidos;
	}
	printf ("Fim de Jogo!\n");
	printf ("Voce acertou em %d tentativas\n", tent);
	printf ("Total de pontos: %.2f \n", points);
}
