
#include <stdio.h>
#include <stdlib.h>
#include <iup.h>

int sair_cb(void)
{
  return IUP_CLOSE;
}

int funcaoCadastra(Ihandle *self, int argc, char **argv){
	Ihandle *btn, *label, *label2, *label3, *label4, *label5, * vbox, *texto,
	 *texto2, *texto3, *texto4, *texto5, *texto6, *texto7, *login;
    IupOpen(&argc, &argv);
    
    btn = IupButton("Cadastrar",NULL);
	label = IupLabel("Valor: ");
    texto = IupText(NULL);
    label2 = IupLabel("Data: ");
    texto2 = IupText(NULL);
    texto3 = IupText(NULL);
    texto4 = IupText(NULL);
    label3 = IupLabel("Cliente: ");
    texto5 = IupText(NULL);
    label4 = IupLabel("Descrição: ");
    texto6 = IupText(NULL);
    label5 = IupLabel("Categoria: ");
    texto7 = IupText(NULL);
    
	vbox = IupVbox(label, texto, label2, texto2, texto3, texto4, label3,  texto5,
	label4,texto6, label5, texto7, btn, NULL);
	 
	IupSetAttribute(vbox, "ALIGNMENT", "ACENTER");
  	IupSetAttribute(vbox, "GAP", "10");
  	IupSetAttribute(vbox, "MARGIN", "150x150");

    Ihandle* janela = IupDialog(vbox);

    IupShow(janela);
    IupMainLoop();
    IupClose();
}

int funcaoAlterar(Ihandle *self, int argc, char **argv){
	Ihandle *texto, *texto2, *texto3, *texto4, *login;
	IupLabel("login");

    IupOpen(&argc, &argv);

    Ihandle* btn = IupButton("Alterar",NULL);
    texto = IupText(NULL);
    texto2 = IupText(NULL);
    texto3 = IupText(NULL);
    texto4 = IupText(NULL);
	Ihandle* vbox = IupVbox(texto, login, texto2, texto3, texto4, btn, NULL);
	IupSetAttribute(vbox, "ALIGNMENT", "ACENTER");
  	IupSetAttribute(vbox, "GAP", "10");
  	IupSetAttribute(vbox, "MARGIN", "150x150");

    Ihandle* janela = IupDialog(vbox);

    IupShow(janela);
    IupMainLoop();
    IupClose();
}

int funcaoExcluir(Ihandle *self, int argc, char **argv){
	Ihandle *texto, *texto2, *texto3, *texto4;

    IupOpen(&argc, &argv);

    Ihandle* btn = IupButton("Concluido",NULL);
    texto = IupText(NULL);
    texto2 = IupText(NULL);
    texto3 = IupText(NULL);
    texto4 = IupText(NULL);
	Ihandle* vbox = IupVbox(texto, texto2, texto3, texto4, btn, NULL);

    Ihandle* janela = IupDialog(vbox);

    IupShow(janela);
    IupMainLoop();
    IupClose();
}

int funcaoImprimeLivro(Ihandle *self, int argc, char **argv){
    int btn_exit_cb( Ihandle *self){
		return IUP_CLOSE;
	}
	
	Ihandle *button, *vbox, *dlg, *janela;
    IupOpen(&argc, &argv);
    
    button = IupButton("Fechar", NULL);
    IupSetCallback(button, "ACTION", (Icallback) btn_exit_cb);
    
	vbox = IupVbox(dlg, button, NULL);
	IupSetAttribute(vbox, "ALIGNMENT", "ACENTER");
  	IupSetAttribute(vbox, "GAP", "10");
  	IupSetAttribute(vbox, "MARGIN", "150x150");
  	
  	dlg = IupDialog (vbox);
	IupSetAttribute(dlg, "TITLE", "Impreção do Livro.");
	IupShowXY(dlg, IUP_CENTER, IUP_CENTER);

    IupShow(janela);
    IupMainLoop();
    IupClose();
}

int funcaoImprimeReceita(Ihandle *self, int argc, char **argv){
    int btn_exit_cb( Ihandle *self){
		return IUP_CLOSE;
	}

	Ihandle *button, *vbox, *dlg, *janela;
    IupOpen(&argc, &argv);

    button = IupButton("Fechar", NULL);
    IupSetCallback(button, "ACTION", (Icallback) btn_exit_cb);

	vbox = IupVbox(dlg, button, NULL);
	IupSetAttribute(vbox, "ALIGNMENT", "ACENTER");
  	IupSetAttribute(vbox, "GAP", "10");
  	IupSetAttribute(vbox, "MARGIN", "150x150");

  	dlg = IupDialog (vbox);
	IupSetAttribute(dlg, "TITLE", "Impreção de Receita.");
	IupShowXY(dlg, IUP_CENTER, IUP_CENTER);

    IupShow(janela);
    IupMainLoop();
    IupClose();
}

int funcaoRelatorioCategoria(Ihandle *self, int argc, char **argv){
    int btn_exit_cb( Ihandle *self){
		return IUP_CLOSE;
	}

	Ihandle *button, *vbox, *dlg, *janela;
    IupOpen(&argc, &argv);

    button = IupButton("Fechar", NULL);
    IupSetCallback(button, "ACTION", (Icallback) btn_exit_cb);

	vbox = IupVbox(dlg, button, NULL);
	IupSetAttribute(vbox, "ALIGNMENT", "ACENTER");
  	IupSetAttribute(vbox, "GAP", "10");
  	IupSetAttribute(vbox, "MARGIN", "150x150");

  	dlg = IupDialog (vbox);
	IupSetAttribute(dlg, "TITLE", "Relatorio por Categoria.");
	IupShowXY(dlg, IUP_CENTER, IUP_CENTER);

    IupShow(janela);
    IupMainLoop();
    IupClose();
}

int funcaoRelatorioAnual(Ihandle *self, int argc, char **argv){
    int btn_exit_cb( Ihandle *self){
		return IUP_CLOSE;
	}

	Ihandle *button, *vbox, *dlg, *janela;
    IupOpen(&argc, &argv);

    button = IupButton("Fechar", NULL);
    IupSetCallback(button, "ACTION", (Icallback) btn_exit_cb);

	vbox = IupVbox(dlg, button, NULL);
	IupSetAttribute(vbox, "ALIGNMENT", "ACENTER");
  	IupSetAttribute(vbox, "GAP", "10");
  	IupSetAttribute(vbox, "MARGIN", "150x150");

  	dlg = IupDialog (vbox);
	IupSetAttribute(dlg, "TITLE", "Relatorio Anual.");
	IupShowXY(dlg, IUP_CENTER, IUP_CENTER);

    IupShow(janela);
    IupMainLoop();
    IupClose();
}

int main(int argc, char **argv)
{
  Ihandle *dlg, *multitext, *vbox,*file_menu, *item_sair, *item_salvar,
  *item_cadastra, *item_alterar, *item_excluir, *item_imprimelivro,
  *item_imprimereceita,*item_relatoriocategoria,*item_relatorioanual,
  *sub1_menu, *menu;

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

  vbox = IupVbox(multitext,NULL);

  dlg = IupDialog(vbox);
  IupSetAttributeHandle(dlg, "MENU", menu);
  IupSetAttribute(dlg, "TITLE", "Bem vindo");
  IupSetAttribute(dlg, "SIZE", "QUARTERxQUARTER");

  IupShowXY(dlg, IUP_CENTER, IUP_CENTER);
  IupSetAttribute(dlg, "USERSIZE", NULL);
  
  IupSetCallback(item_cadastra, "ACTION", (Icallback)funcaoCadastra);
  IupSetCallback(item_alterar, "ACTION", (Icallback)funcaoAlterar);
  IupSetCallback(item_excluir, "ACTION", (Icallback)funcaoExcluir);
  IupSetCallback(item_imprimelivro, "ACTION", (Icallback)funcaoImprimeLivro);
  IupSetCallback(item_imprimereceita, "ACTION", (Icallback)funcaoImprimeReceita);
  IupSetCallback(item_relatoriocategoria, "ACTION", (Icallback)funcaoRelatorioCategoria);
  IupSetCallback(item_relatorioanual, "ACTION", (Icallback)funcaoRelatorioAnual);

  IupMainLoop();

  IupClose();
  return EXIT_SUCCESS;
}
