//  FUNÇOES

void abertura(int i, int larg, int alt){
	quadrado1(i, larg, alt);
	printf("\n%c Bem vindo a carteira pessoal!", 186);
	espaco(larg - 30, i);
	quadrado2(i, larg, alt);
}

void menu(int i, int larg){

    printf("\n");
    
    printf("%c Menu:", 186);
    espaco(larg - 6, i);
	//printf("%c\n", 186);
	
	linhaBranco(i, larg);
    
	printf("%c 1 - Cadastrar receita.", 186);
	espaco(larg - 23, i);
	//printf("%c\n", 186);

	printf("%c 2 - Alterar receita.", 186);
	espaco(larg - 21, i);
	//printf("%c\n", 186);

	printf("%c 3 - Excluir receita.", 186);
	espaco(larg - 21, i);
	//printf("%c\n", 186);

	printf("%c 4 - Imprime Livro.", 186);
	espaco(larg - 19, i);
	//printf("%c\n", 186);

	printf("%c 5 - Imprime Receita.", 186);
	espaco(larg - 21, i);
	//printf("%c\n", 186);

	printf("%c 6 - Relatorio por categoria.", 186);
	espaco(larg - 29, i);
	//printf("%c\n", 186);

	printf("%c 7 - Relatorio Anual.", 186);
	espaco(larg - 21, i);
	//printf("%c\n", 186);
	
	linhaBranco(i, larg);

	printf("%c 0 - Sair.", 186);
	espaco(larg - 10, i);
	//printf("%c\n", 186);
}

void printaCategoria(){
	puts("\nCategoria:\n");
	puts("1- Moradia;");
	puts("2- Estudo;");
	puts("3- Transporte;");
	puts("4- Alimentacao;");
	puts("5- Trabalho;");
}

void tiraEnter(char *s){
    int i;
    for(i=0 ; s[i] != '\n'; i++);
    s[i]=0;

}

struct Receita perguntaUsuarioReceita(){
    struct Receita r;
	
	puts("\nEntre com os dados da receita:");
	
    puts("\nValor:");
	scanf("%f", &(r.valor));

    puts("\nData:");
    scanf("%d", &(r.data.dia) );
    scanf("%d", &(r.data.mes) );
    scanf("%d", &(r.data.ano) );

    puts("\nCliente:");
    fflush(stdin);
    fgets(r.cliente, 200, stdin);
    tiraEnter(r.cliente);
    
    puts("\nDescricao:");
    fflush(stdin);
    fgets(r.descricao, 200, stdin);
    tiraEnter(r.descricao);

	printaCategoria();
	scanf("%d", &(r.categoria));

    puts("\nObrigado.\n");

    return r;
}

void cadastraReceita(struct Livro* l){
    struct Receita nova = perguntaUsuarioReceita();
    l->receitas[ l->n ] = nova;
    l->n++;
}

void recadastraReceita(struct Livro* l, int pos){
	puts("");
    struct Receita nova = perguntaUsuarioReceita();
    l->receitas[ pos ] = nova;
}

char* categoria(int categoria, char* novaCategoria){
	if(categoria == 1){
		strcpy(novaCategoria, "Moradia");
	}

	else if(categoria == 2){
        strcpy(novaCategoria, "Estudo");
	}

	else if(categoria == 3){
        strcpy(novaCategoria, "Transporte");
	}

    else if(categoria == 4){
        strcpy(novaCategoria, "Alimentacao");
	}

	else{
        strcpy(novaCategoria, "Trabalho");
	}

	return novaCategoria;
}

struct Receita encontraReceita(struct Livro l){
	struct Receita b;
	puts("\nQual o nome deseja buscar:\n");
	fflush(stdin);

	char nome[20];

	fgets(nome, 20, stdin);
	//nome[strlen(nome)-1] = '\0';
	tiraEnter(nome);

	int i;
	for(i = 0; i < l.n; i++){
		if(strcmp(l.receitas[i].cliente, nome) == 0){
			b = l.receitas[i];
			b.i = i;
			return b;
			//imprimeReceita(l.receitas[i]);    //  ANTES ESTAVA ASSIM SEM RETORNAR
		}
	}
}

void imprimeReceita(int i, int larg, struct Receita r){
	char b[30];     //  USADO PARA TRANSFORMAR CATEGORIA NUMERICA EM PALAVRA
	char buff[10];
	categoria(r.categoria,b);

	quadrado1(i, larg);
	printf("\n%c Receita:", 186);
	espaco(larg - 9, i);
	
	linhaBranco(i, larg);

    printf("%c Nome: %s", 186, r.cliente);
    espaco(larg - (strlen(r.cliente) + strlen(" Nome: ")), i);
    
    printf("%c Valor: %.2f", 186, r.valor);
    sprintf(buff, "%.2f", r.valor);
	espaco(larg - (strlen(buff) + strlen(" Valor: ")), i);

	if(r.data.dia < 10){                                //
        printf("%c Data: 0%d/", 186, r.data.dia);
	}
	
	else if(r.data.dia >= 10){                          //
		printf("%c Data: %d/", 186, r.data.dia);
	}                                                   //  VERIFICACAO DA DATA QUE SAIA BUGADA
	
	if(r.data.mes < 10){                                //
        printf("0%d/", r.data.mes);
	}
	
	else if(r.data.mes >= 10){                          //
        printf("%d/", r.data.mes);
	}
	
	printf("%d", r.data.ano);

	int tam = 8;
    sprintf(buff, "%d", tam);
    espaco(larg - (strlen(buff) + 2*strlen(" Data: ") + strlen("//")), i);      //  DEMOREI MUITO PRA ACHAR A LOGICA DISSO
    
	printf("%c Categoria: %s", 186, b);
	espaco(larg - (strlen(b) + strlen(" Categoria: ")), i);
	
	printf("%c Descricao: %s", 186,  r.descricao);
	espaco(larg - (strlen(r.descricao) + strlen(" Descricao: ")), i);
	quadrado2(i, larg);

	//categoria(r.categoria);           //ANTES ESTAVA ASSIM, APENAS NUMERO
    //puts("\n");
}

void imprimeLivro(int i, int larg, struct Livro l){
    for(i=0 ; i < l.n; i++){
        imprimeReceita(i, larg, l.receitas[i]);
        //puts("------------------------\n");
    }
}

void excluiReceita(struct Livro* l, int pos){
	int i;
	for(i = pos; i < l->n; i++){
		l->receitas[ i ] = l->receitas[ i+1 ];
	}

	l->n--;
	
	puts("Receita Escluida!\n");
}

void relatorioCategorico(int i, int larg, struct Livro l){
	puts("Qual categoria deseja buscar:");
	printaCategoria();
	int categoria;
	scanf("%d", &categoria);	
	
	puts("De qual mes:");
	int mes;
	scanf("%d", &mes);
	
    for(i=0 ; i < l.n; i++){
    	
		if(l.receitas[i].data.mes == mes){
			if(l.receitas[i].categoria == categoria){
	    		imprimeReceita(i, larg, l.receitas[i]);
	    		//puts("------------------------\n");
			}
		}
    }
}

void relatorioAnual(int i, int larg, struct Livro l){
	puts("Qual ano deseja buscar:");
	int ano;
	scanf("%d", &ano);
	
    for(i=0 ; i < l.n; i++){
    	
    	if(l.receitas[i].data.ano == ano){
    		imprimeReceita(i, larg, l.receitas[i]);	
    		puts("------------------------\n");
		}
    }
	
}

void sair(){
	puts("\nObrigado e volte sempre!");
	exit(0);
}
