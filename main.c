#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <locale.h>

int ox = 0, oy =0 , px = 0, py = 0, mx = 0, my = 0, mx1 = 0, my1 = 0, mx2 = 0, my2 = 0, mx3 = 0, my3 = 0;
int mdx = 0, mdy = 0, colunas = 0, linhas  = 0;
int fase = 1;
char comando;
char mapa[28][70];
bool jogando = false, nivel = true, isKey = false;
int num, cy, cx, num1, num2, num3;

void telaWin(){
    printf(" \n");
    printf("                         ##    ##  #######  ##     ##      \n");
    printf("                          ##  ##  ##     ## ##     ##      \n");
    printf("                           ####   ##     ## ##     ##      \n");
    printf("                            ##    ##     ## ##     ##      \n");
    printf("                            ##    ##     ## ##     ##      \n");
    printf("                            ##    ##     ## ##     ##      \n");
    printf("                            ##     #######   #######       \n");
    printf(" \n");

    printf("                   ##      ## #### ##    ##    ####    #### \n");
    printf("                   ##  ##  ##  ##  ###   ##    ####    #### \n");
    printf("                   ##  ##  ##  ##  ####  ##    ####    #### \n");
    printf("                   ##  ##  ##  ##  ## ## ##     ##      ##  \n");
    printf("                   ##  ##  ##  ##  ##  ####                 \n");
    printf("                   ##  ##  ##  ##  ##   ###    ####    #### \n");
    printf("                    ###  ###  #### ##    ##    ####    #### \n");
    printf(" \n");
    printf("                                    Para Continuar Pressione Uma Tecla");
    getch();
    system("CLS");
    passafase();
}

                                        // tela final

void telafinal(){

    printf("\n");
    printf("                            ######      ###    ##     ## ######## \n");
    printf("                           ##    ##    ## ##   ###   ### ##       \n");
    printf("                           ##         ##   ##  #### #### ##       \n");
    printf("                           ##   #### ##     ## ## ### ## ######   \n");
    printf("                           ##    ##  ######### ##     ## ##       \n");
    printf("                           ##    ##  ##     ## ##     ## ##       \n");
    printf("                            ######   ##     ## ##     ## ######## \n");
    printf("\n");

    printf("                            #######  ##     ## ######## ########   \n");
    printf("                           ##     ## ##     ## ##       ##     ##  \n");
    printf("                           ##     ## ##     ## ##       ##     ##  \n");
    printf("                           ##     ## ##     ## ######   ########   \n");
    printf("                           ##     ##  ##   ##  ##       ##   ##    \n");
    printf("                           ##     ##   ## ##   ##       ##    ##   \n");
    printf("                            #######     ###    ######## ##     ##  \n");
    printf("\n");

    printf("                              Para Continuar Pressione Uma Tecla");
    getch();
    system("CLS");
    fase = 1;
    nivel= true;
    isKey = false;
    jogando = false;

}


                                        //tela inicial

void telaIncial(){

	system("color f2");
	printf("\n");
	printf("     ###    ########  ##     ## ######## ##    ## ######## ##     ## ########  ########  ######  \n");
	printf("    ## ##   ##     ## ##     ## ##       ###   ##    ##    ##     ## ##     ## ##       ##    ##\n");
	printf("   ##   ##  ##     ## ##     ## ##       ####  ##    ##    ##     ## ##     ## ##       ##      \n");
	printf("  ##     ## ##     ## ##     ## ######   ## ## ##    ##    ##     ## ########  ######    ###### \n");
	printf("  ######### ##     ##  ##   ##  ##       ##  ####    ##    ##     ## ##   ##   ##             ## \n");
	printf("  ##     ## ##     ##   ## ##   ##       ##   ###    ##    ##     ## ##    ##  ##       ##    ## \n");
	printf("  ##     ## ########     ###    ######## ##    ##    ##     #######  ##     ## ########  ######  \n");
	printf("\n");

	printf("                                  #######  ########       ### \n");
	printf("                                 ##     ## ##            ## ## \n");
	printf("                                 ##     ## ##           ##   ##\n");
	printf("                                 ##     ## ######      ##     ## \n");
	printf("                                 ##     ## ##          #########\n");
	printf("                                 ##     ## ##          ##     ##\n");
	printf("                                  #######  ##          ##     ##\n");
	printf("\n");

	printf("        ######  ##     ##    ###    ########     ###     ######  ######## ######## ######## \n");
	printf("       ##    ## ##     ##   ## ##   ##     ##   ## ##   ##    ##    ##    ##       ##     ## \n");
	printf("       ##       ##     ##  ##   ##  ##     ##  ##   ##  ##          ##    ##       ##     ## \n");
	printf("       ##       ######### ##     ## ########  ##     ## ##          ##    ######   ######## \n");
	printf("       ##       ##     ## ######### ##   ##   ######### ##          ##    ##       ##   ##  \n");
	printf("       ##    ## ##     ## ##     ## ##    ##  ##     ## ##    ##    ##    ##       ##    ## \n");
	printf("        ######  ##     ## ##     ## ##     ## ##     ##  ######     ##    ######## ##     ##  \n");
	printf("\n");
	printf("                                                                                  by Devi|man");
	printf("\n");

	printf("                              Para Continuar Pressione Uma Tecla");
	getch();

}

                                        // gera fase

void geraFase(){
		                                       //linhas

    if(linhas == 3 && ((colunas < 7) || (colunas >= 12 && colunas <= 16) || (colunas > 19 && colunas < 25) || (colunas > 26 && colunas <= 35))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 3 && ((colunas > 37 && colunas < 41 ) || (colunas >= 43 && colunas <= 61))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 6 && ((colunas >= 3 && colunas <= 12) || (colunas >= 16 && colunas <= 23) || (colunas >= 26 && colunas <= 30))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 6 && ((colunas >= 33 && colunas <= 38) || (colunas >= 41 && colunas <= 44) || (colunas >= 46 && colunas <= 57)|| (colunas >= 61 && colunas <= 67))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 9 && ((colunas >= 1 && colunas < 9) || (colunas >= 12 && colunas < 24))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 11 && ((colunas >= 24 && colunas < 36) || (colunas >= 37 && colunas < 45))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 10 && ((colunas >= 45 && colunas < 48) || (colunas >= 51 && colunas < 58) || (colunas > 60 && colunas < 68))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 13 && ((colunas <= 12) || (colunas >= 16 && colunas < 30) || (colunas > 33 && colunas < 67))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 17 && ((colunas >= 1 && colunas < 9) || (colunas >= 12 && colunas < 24))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 20 && ((colunas >= 24 && colunas < 36) || (colunas >= 37 && colunas < 45))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 18 && ((colunas >= 45 && colunas < 48) || (colunas >= 51 && colunas < 58) || (colunas > 60 && colunas < 68))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 22 && ((colunas >= 3 && colunas < 7) || (colunas >= 12 && colunas <= 16) || (colunas > 19 && colunas < 25) || (colunas > 26 && colunas <= 34))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 22 && ((colunas > 37 && colunas < 41 ) || (colunas >= 43 && colunas <= 61))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }
    else if(linhas == 25 && ((colunas > 3 && colunas < 38 ) || (colunas > 40 && colunas < 68 ))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';
    }

		                                 //colunas

    else if(colunas == 6 && ((linhas >= 2 && linhas < 5) || (linhas >= 7 && linhas < 12) || (linhas >= 15 && linhas < 24))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 10 && ((linhas > 3 && linhas <= 9) || (linhas > 11 && linhas < 15) || (linhas > 17 && linhas < 26))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 14 && ((linhas >= 1 && linhas <= 11) || (linhas > 12 && linhas < 16) || (linhas > 18 && linhas < 27))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 18 && ((linhas >= 1 && linhas <= 6) || (linhas > 17 && linhas <= 19) || (linhas > 21 && linhas < 26))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 21 && ((linhas >= 2 && linhas < 5) || (linhas >= 8 && linhas < 12) || (linhas >= 15 && linhas < 20))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 25 && ((linhas > 3 && linhas <= 9) || (linhas > 11 && linhas < 15) || (linhas >= 19 && linhas < 26))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 29 && ((linhas >= 5 && linhas <= 11) || (linhas > 21 && linhas < 25))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 32 && ((linhas >= 1 && linhas <= 6) || (linhas > 17 && linhas <= 19))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 36 && ((linhas >= 2 && linhas < 5) || (linhas >= 7 && linhas < 12) || (linhas >= 15 && linhas < 24))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

    }
    else if(colunas == 40 && ((linhas > 3 && linhas <= 9) || (linhas > 11 && linhas < 15) || (linhas > 17 && linhas < 24))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

		}
		else if(colunas == 44 && ((linhas >= 5 && linhas <= 11) || (linhas > 12 && linhas < 16) || (linhas > 18 && linhas < 25))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

		}
		else if(colunas == 49 && ((linhas >= 2 && linhas <= 13) || (linhas > 17 && linhas <= 23))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

		}
		else if(colunas == 54 && ((linhas >= 2 && linhas < 5) || (linhas >= 7 && linhas < 12) || (linhas >= 15 && linhas < 20))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

		}
		else if(colunas == 59 && ((linhas > 3 && linhas <= 9) || (linhas > 11 && linhas < 15) || (linhas > 17 && linhas < 24))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

		}
		else if(colunas == 63 && ((linhas >= 1 && linhas <= 11) || (linhas > 12 && linhas < 16) || (linhas > 18 && linhas < 25))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

		}
		else if(colunas == 67 && ((linhas >= 2 && linhas <= 6) || (linhas > 17 && linhas <= 19) || (linhas > 21 && linhas < 26))){
			printf("%C", 219);
			mapa[linhas][colunas] = '#';

		}

		else
		{
            printf(" ");
			mapa[linhas][colunas] = ' ';
		}

}
                                        //desenha o jogo

void desenhaTela(){

	system("CLS");

	for (linhas = 0; linhas < 28; linhas++){
		for (colunas = 0; colunas < 80; colunas++){
			if (linhas == 0 || colunas == 0 || colunas == 70 - 1 || linhas == 28 - 1)
			{
				printf("%c",177);
				mapa[linhas][colunas] = '#';
			}

			else if (colunas == px && linhas == py)
			{
				printf("%c",173);
				mapa[linhas][colunas] = 'i';
			}

			else if (colunas == mx && linhas == my)
			{
				printf("%c",165);
				mapa[linhas][colunas] = 'm';
			}

			else if (colunas == mx1 && linhas == my1)
			{
				printf("%c",165);
				mapa[linhas][colunas] = 'm';
			}

			else if (colunas == mx2 && linhas == my2)
			{
				printf("%c",165);
				mapa[linhas][colunas] = 'm';
			}

			else if (colunas == mx3 && linhas == my3)
			{
				printf("%c",165);
				mapa[linhas][colunas] = 'm';
			}

			else if (colunas == mdx && linhas == mdy)
			{
			    if(fase == 2){
                    printf("%c",230);
                    mapa[linhas][colunas] = 'm';
				}
			}


			else if (colunas == ox && linhas == oy)
			{
			    if(!(mapa[linhas + 1][colunas + 1] == '#' && mapa[linhas - 1][colunas - 1] =='#')){
                    printf("%c",31);
                    mapa[linhas][colunas] = 'p';
			    }
			    else{
                    ox += 1;
                    printf("%c",31);
                    mapa[linhas][colunas] = 'p';
			    }
			}

			else if (colunas == 71)
			{

			   if(linhas == 1)printf("Movimento: W(Cima), S(Baixo)");
			   if(linhas == 2)printf("           A(Esquerda),D(Direita)");
			   if(linhas == 3)printf("           ICONES          ");
               if(linhas == 4)printf("Monstro: %c",165);
               if(linhas == 5)printf("Chave: %c", 170);
               if(linhas == 6)printf("Porta: %c",31);
               if(linhas == 7)printf("Jogador: %c",173);
               if(linhas == 8)printf("Fase: %i", fase);
               if(isKey){
                   if(linhas == 9)printf("Status: Chave Coletada ");
                   //printf(" %C\n", 170);
               }
               else{
                   if(linhas == 9)printf("Status: Chave a Coletar");
               }
			}
			else if (colunas == cx && linhas == cy)
            {
                if(isKey){
                    printf(" ");
                }
                else{
                    printf("%c",170);
                    mapa[linhas][colunas] = 'c';
                }

            }

			else
			{
				geraFase();
				jogando = true;

			}

		}
		printf("\n");
	}
	printf("\n");


}

void movimentaPersonagem(){

	switch(comando){
	case 'w' :
		if(mapa[py -1][px] != '#'){
			py -= 1;
			if(mapa [py][px] == 'm'){
                system("CLS");
                telafinal();
			}
			if(mapa [py][px] == 'c'){
                isKey = true;
			}
			if(mapa [py][px] == 'p'){

                if(isKey == true){
                    system("CLS");
                    telaWin();
                }
			}
		}

		break;

	case 's':
		if(mapa[py + 1][px] != '#'){
			py += 1;
			if(mapa [py][px] == 'm'){
                system("CLS");
                telafinal();
			}
			if(mapa [py][px] == 'c'){
                isKey = true;
			}
			if(mapa [py][px] == 'p'){
                if(isKey == true){
                    system("CLS");
                    telaWin();
                }
			}

		}

		break;

	case 'a':
		if(mapa[py][px - 1] != '#'){
			px -= 1;
			if(mapa [py][px] == 'm'){
                system("CLS");
                telafinal();
			}
			if(mapa [py][px] == 'c'){
                isKey = true;
			}
			if(mapa [py][px] == 'p'){
                if(isKey == true){
                    system("CLS");
                    telaWin();
                }
			}
		}
		break;

	case 'd':
		if(mapa[py][px + 1] != '#'){
			px += 1;
			if(mapa [py][px] == 'm'){
                system("CLS");
                telafinal();
			}
			if(mapa [py][px] == 'c'){
                isKey = true;

			}
			if(mapa [py][px] == 'p'){
                if(isKey == true){
                    system("CLS");
                    telaWin();

                }
			}
		}

		break;

	default:
	    getch();
		//system("PAUSE");
	}

}

void passafase(){
    system("CLS");
    nivel = true;
    px = 1, py = 1;
    fase++;
    isKey = false;
    jogando = false;
    desenhaTela();
    geraposicao();
    //geraFase();


}

void MonstroUm(){

    num = rand() %5;
    num1 = rand() %5;
    num2 = rand() %5;
    num3 = rand() %5;

	switch(num){
	case 1 :
		if(mapa[my -1][mx] != '#'){
			my -= 1;
			if(mapa [my][mx] == 'i'){
                system("CLS");
                telafinal();
			}
		}
		break;

	case 2:
		if(mapa[my + 1][mx] != '#'){
			my += 1;
			if(mapa [my][mx] == 'i'){
                system("CLS");
                telafinal();
			}
		}

		break;

	case 3:
		if(mapa[my][mx - 1] != '#'){
			mx -= 1;
			if(mapa [my][mx] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;

	case 4:
		if(mapa[my][mx + 1] != '#'){
			mx += 1;
			if(mapa [my][mx] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;
	}

	switch(num1){
	case 1 :
		if(mapa[my1 -1][mx1] != '#'){
			my1 -= 1;
			if(mapa [my1][mx1] == 'i'){
                system("CLS");
                telafinal();
			}
		}
		break;

	case 2:
		if(mapa[my1 + 1][mx1] != '#'){
			my1 += 1;
			if(mapa [my1][mx1] == 'i'){
                system("CLS");
                telafinal();
			}
		}

		break;

	case 3:
		if(mapa[my1][mx1 - 1] != '#'){
			mx1 -= 1;
			if(mapa [my1][mx1] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;

	case 4:
		if(mapa[my1][mx1 + 1] != '#'){
			mx1 += 1;
			if(mapa [my1][mx1] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;
	}

	switch(num2){
	case 1 :
		if(mapa[my2 -1][mx2] != '#'){
			my2 -= 1;
			if(mapa [my2][mx2] == 'i'){
                system("CLS");
                telafinal();
			}
		}
		break;

	case 2:
		if(mapa[my2 + 1][mx2] != '#'){
			my2 += 1;
			if(mapa [my2][mx2] == 'i'){
                system("CLS");
                telafinal();
			}
		}

		break;

	case 3:
		if(mapa[my2][mx2 - 1] != '#'){
			mx2 -= 1;
			if(mapa [my2][mx2] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;

	case 4:
		if(mapa[my2][mx2 + 1] != '#'){
			mx2 += 1;
			if(mapa [my2][mx2] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;
	}

	switch(num3){
	case 1 :
		if(mapa[my3 -1][mx3] != '#'){
			my3 -= 1;
			if(mapa [my3][mx3] == 'i'){
                system("CLS");
                telafinal();
			}
		}
		break;

	case 2:
		if(mapa[my3 + 1][mx3] != '#'){
			my3 += 1;
			if(mapa [my3][mx3] == 'i'){
                system("CLS");
                telafinal();
			}
		}

		break;

	case 3:
		if(mapa[my3][mx3 - 1] != '#'){
			mx3 -= 1;
			if(mapa [my3][mx3] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;

	case 4:
		if(mapa[my3][mx3 + 1] != '#'){
			mx3 += 1;
			if(mapa [my3][mx3] == 'i'){
                system("CLS");
                telafinal();
            }
		}

		break;
	}

}
void MonstroDois(){
    if(mdx < px){
        mdx += 1;
        if(mapa [mdy][mdx] == 'i'){
            system("CLS");
            telafinal();
        }
    }
    else if(mdx > px){
        mdx -= 1;
        if(mapa [mdy][mdx] == 'i'){
            system("CLS");
            telafinal();
        }
    }
    else if(mdy < py){
        mdy += 1;
        if(mapa [mdy][mdx] == 'i'){
            system("CLS");
            telafinal();
        }
    }
    else if(mdy > py){
        mdy -= 1;
        if(mapa [mdy][mdx] == 'i'){
            system("CLS");
            telafinal();
        }
	}
}

void geraposicao(){

    if (nivel == true)
        {
            ox = rand() %69, oy = rand() %27;
            if (ox == 0 || oy == 0)
            {
            ox = rand() %69, oy = rand() %27;
            }

            cx = rand() %69, cy = rand() %27;
            if (cx == 0 ||  cy == 0)
            {
            cx = rand() %69, cy = rand() %27;
            }

            mx = rand() %69, my = rand() %27;
            if (mx == 0 || my == 0)
            {
            mx = rand() %69, my = rand() %27;
            }

            mx1 = rand() %69, my1 = rand() %27;
            if (mx1 == 0 || my1 == 0)
            {
            mx1 = rand() %69, my1 = rand() %27;
            }

            mx2 = rand() %69, my2 = rand() %27;
            if (mx2 == 0 || my2 == 0)
            {
            mx2 = rand() %69, my2 = rand() %27;
            }

            mx3 = rand() %69, my3 = rand() %27;
            if (mx3 == 0 || my3 == 0)
            {
            mx3 = rand() %69, my3 = rand() %27;
            }

            nivel = false;

        }

}

int main() {
    //setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	mdx = (int) (65 * 0.7), mdy = (int) (22 *0.7);
	px = 1, py = 1;
	geraposicao();

	for (;;){

		if(jogando == false){
			telaIncial();
		}

		desenhaTela();

		if( fase == 1){
            MonstroUm();
		}

		else if( fase == 2){
            MonstroUm();
            MonstroDois();
		}
		comando = getch();
		movimentaPersonagem();

	}
}
