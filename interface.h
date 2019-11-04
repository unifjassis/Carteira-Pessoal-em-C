//	INTERFACE

void espaco(int tam, int i){
	for(i = 0; i <tam; i++){
		printf("%c", 32);
	}
	printf("%c\n", 186);
}

void linha(int i, int alt){
	for(i = 0; i < alt; i++){
		printf("%c", 205);
	}
}

void coluna(int i, int alt, int larg){
	printf("\n");
	for(i = 0; i < alt; i++){
		printf("%c", 186);
		espaco(larg, i);
		printf("%c\n", 186);
	}
}

void lateralEsquerdaCima(){
	printf("%c", 201);
}

void lateralDireitaCima(){
	printf("%c", 187);
}

void lateralEsquerdaBaixo(){
	printf("%c", 200);
}

void lateralDireitaBaixo(){
	printf("%c", 188);
}

void quadrado1(int i, int larg){
	lateralEsquerdaCima();  //
	linha(i, larg);         //  PRIMEIRA LINHA DESENHADA
	lateralDireitaCima();   //
}

void quadrado2(int i, int larg){
	lateralEsquerdaBaixo(); //
	linha(i, larg);         //  ULTIMA LINHA DESENHADA
	lateralDireitaBaixo();  //
	printf("\n");
}

void quadradoUnico(int i, int larg){
	lateralEsquerdaCima();  //
	linha(i, larg);         //  QUADRADO SEM A LATERAL DIREITA
	printf("%c", 175);   	//
}

void linhaBranco(int i, int larg){
	printf("%c", 186);          //
	espaco(larg, i);            //  LINHA EM BRANCO
	//printf("%c\n", 186);      //
}
