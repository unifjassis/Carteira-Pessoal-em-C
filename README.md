📌 Carteira Pessoal em C

Um sistema simples de gestão financeira pessoal desenvolvido em C, permitindo o controle de receitas e despesas, manipulação de arquivos para armazenamento dos dados.

🚀 Funcionalidades  
✔ Adicionar e remover transações financeiras  
✔ Categorização de despesas  
✔ Geração de relatórios financeiros  
✔ Armazenamento de dados em arquivos  

🛠 Tecnologias e Bibliotecas Utilizadas
Linguagem: C

Bibliotecas padrão: stdio.h, stdlib.h, string.h

📂 Estrutura do Código

📦 Carteira-Pessoal-em-C  
├── 📄 main.c          # Arquivo principal do projeto  
├── 📄 transacoes.c    # Lida com operações financeiras  
├── 📄 transacoes.h    # Cabeçalho com declarações das funções  
├── 📄 relatorios.c    # Geração de relatórios financeiros  
├── 📄 relatorios.h    # Cabeçalho para relatórios  
├── 📄 dados.txt       # Arquivo onde os dados são armazenados  
└── 📄 README.md       # Documentação do projeto  

🏁 Como Executar

Clone o repositório:  
git clone https://github.com/unifjassis/Carteira-Pessoal-em-C.git  
cd Carteira-Pessoal-em-C

Compile o código:  
gcc main.c transacoes.c relatorios.c -o carteira

Execute o programa:  
./carteira

🔹 Exemplo de Uso  
📌 Adicionando uma transação:

Digite o tipo de transação (receita/despesa): receita  
Digite o valor: 1000  
Digite a categoria: Salário  
Transação adicionada com sucesso!  

📌 Gerando um relatório:
Saldo atual: R$ 2500,00  
Despesas: R$ 500,00  
Receitas: R$ 3000,00  

📜 Licença
Este projeto é de código aberto sob a licença MIT.
