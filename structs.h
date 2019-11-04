//  STRUCTS

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Receita{
    struct Data data;
    float valor;
    char cliente[200];
    char descricao[200];
    int categoria;
    int i;
};

struct Data criaData(int dia, int mes, int ano){
    struct Data d;
    d.dia = dia;
    d.mes = mes;
    d.ano = ano;
    return d;
};

struct Livro{
    struct Receita receitas[100];
    int n;
};
