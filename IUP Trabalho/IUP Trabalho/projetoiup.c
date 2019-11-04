#include <stdio.h>
#include <stdlib.h>
#include <iup.h>

Ihandle* texto;
Ihandle* texto2;


int minhaFunc(Ihandle* self){
    char *valor1 = IupGetAttribute(texto, "VALUE");
    IupSetAttribute(texto2,"VALUE", valor1);
    return EXIT_SUCCESS;
}


int sair_cb(void){
  return IUP_CLOSE;
}

int funcaoTeste(Ihandle *self){
	printf("feito");
	return EXIT_SUCCESS;
}

int main(int argc, char **argv){
	texto = IupText(NULL);
	Ihandle* vbox = IupVbox(texto,texto2, NULL);
	Ihandle* janela = IupDialog(vbox);

	
	
  Ihandle *dlg, *multitext;
  Ihandle *file_menu, *item_sair, *item_salvar;
  Ihandle *item_cadastra, *item_alterar, *item_excluir;
  Ihandle *item_imprimelivro, *item_imprimereceita;
  Ihandle *item_relatoriocategoria, *item_relatorioanual;
  Ihandle *sub1_menu, *menu;

  IupOpen(&argc, &argv);

  multitext = IupText(NULL);
  IupSetAttribute(multitext, "MULTILINE", "YES");
  IupSetAttribute(multitext, "EXPAND", "YES");

  item_cadastra = IupItem("Cadastrar receita", NULL);
  item_alterar = IupItem("Alterar receita", NULL);
  item_excluir = IupItem("Excluir receita", NULL);
  item_imprimelivro = IupItem("Imprimir livro", NULL);
  item_imprimereceita = IupItem("Imprimir Receita", NULL);
  item_relatoriocategoria = IupItem("Relatório por categoria", NULL);
  item_relatorioanual = IupItem ("Relatório Anual", NULL);
  item_salvar = IupItem("Salvar", NULL);
  item_sair = IupItem("Sair", NULL);
  IupSetCallback(item_sair, "ACTION", (Icallback)sair_cb);

  file_menu = IupMenu(
    item_cadastra,
    item_alterar,
    item_excluir,
    IupSeparator(),
    item_imprimelivro,
    item_imprimereceita,
    IupSeparator(),
    item_relatoriocategoria,
    item_relatorioanual,
    item_salvar,
    IupSeparator(),
    item_sair,
    NULL);

  sub1_menu = IupSubmenu("Menu", file_menu);

  menu = IupMenu(sub1_menu, NULL);

  vbox = IupVbox(
    multitext,
    NULL);

  dlg = IupDialog(vbox);
  IupSetAttributeHandle(dlg, "MENU", menu);
  IupSetAttribute(dlg, "TITLE", "Bem vindo");
  IupSetAttribute(dlg, "SIZE", "QUARTERxQUARTER");

  IupShowXY(dlg, IUP_CENTER, IUP_CENTER);
  IupSetAttribute(dlg, "USERSIZE", NULL);
  IupSetCallback(item_cadastra, "ACTION", (Icallback)funcaoTeste);

  IupMainLoop();
  
  IupShow(janela);

  IupClose();
  return EXIT_SUCCESS;
}
