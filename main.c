#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "funcoes.h"
#include "interface.h"

//	MAIN

void main(){
    struct Livro l;
    l.n = 0;
    
    int i;
	int larg;
	int alt;

	alt = 10;		//	TAMANHO DO QUADRADO
	larg = 50;		//	TAMANHO DO QUADRADO

	abertura(i, larg, alt);
	
	do{
		/*
		puts("------------------------\n");
		puts("Menu:\n");
	    
		puts("1 - Cadastrar receita.");
		puts("2 - Alterar receita.");
		puts("3 - Excluir receita.");
		puts("4 - Imprime Livro.");                 //  MENU ANTIGO
		puts("5 - Imprime Receita.");
		puts("6 - Relatorio por categoria.");
		puts("7 - Relatorio Anual.");
		puts("0 - Sair.");
		
		puts("------------------------");
		puts("");
		*/
		
		quadrado1(i, larg);
		menu(i, larg);
		quadrado2(i, larg);

		puts("\nDigite a opcao desejada:");
		int entrada;
		scanf("%d", &entrada);
		
		struct Receita a;   // "a" vai ser usado nas funçoes

		switch(entrada){
			case 1:
				cadastraReceita(&l);
				break;
				
			case 2:
				a = encontraReceita(l);
				imprimeReceita(i, larg, a);
				recadastraReceita(&l, a.i);
				break;
				
			case 3:
			    a = encontraReceita(l);
			    imprimeReceita(i, larg, a);
			    excluiReceita(&l, a.i);
			    break;
				
			case 4:
				puts("\nTodas as Receitas:\n");
				imprimeLivro(i, larg, l);
				break;
				
			case 5:
				a = encontraReceita(l);
		        imprimeReceita(i, larg, a);
				break;

			case 6:
				relatorioCategorico(i, larg, l);
				break;
				
			case 7:
				relatorioAnual(i, larg, l);
				break;
				
			case 0:
				sair();
				break;
		}
	}while(1);

	system("pause");
}
