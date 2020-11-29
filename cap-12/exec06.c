#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nomeProduto[20];
  int quantidadeProduto;
  float valorProduto;
} lista;


void gravarProdutos (lista *produtos, int qtde);
void lerProdutos (lista *produtos, int qtde);
void calcularValorTotal (lista *produtos, int qtde);
void reiniciarPrograma ();
int main ();


// Esta função é responsável por adicionar produtos
// na lista e posteriormente gravá-los no arquivo
void adicionarProdutos (lista *produtos, int qtde) {
  int i;

  printf("\nInforme os produtos:\n");

  for (i = 0; i < qtde; i++) {
    printf("\n=================== PRODUTO %i ===================\n", i+1);

    printf("\n=> Nome do produto: ");
    getchar();
    setbuf(stdin, NULL);
    scanf("%[a-z A-Z]s", produtos[i].nomeProduto);

    printf("=> Quantidade do produto: ");
    setbuf(stdin, NULL);
    scanf("%i", &produtos[i].quantidadeProduto);

    printf("=> Valor do produto: R$ ");
    setbuf(stdin, NULL);
    scanf("%f", &produtos[i].valorProduto);
  }

  gravarProdutos (produtos, qtde);
}


// Esta função é responsável por gravar a lista
// de produtos no arquivo
void gravarProdutos (lista *produtos, int qtde) {
  FILE *arq;

  arq = fopen("produtos.txt", "w");

  if (arq == NULL) {
   perror("[!] Erro");
    exit(1);
  }

  int i;

  for (i = 0; i < qtde; i++) {
    setbuf(stdin, NULL);
    fprintf(arq, "%s %i %f\n", 
      produtos[i].nomeProduto,
      produtos[i].quantidadeProduto,
      produtos[i].valorProduto);
  }

  fclose(arq);

  lerProdutos(produtos, qtde);
}


// Esta função verifica a quantidade de linhas salvas no arquivo para 
// verificar se a quantidade de produtos inserida pelo usuário é
// igual a quantidade de linhas presentes no próprio arquivo
int verificarQtdeLinhas () {
  FILE *arq;
  arq = fopen("produtos.txt", "r");

  char c;

  int linhas = 0;

  // Lê cada caractere até chegar ao final do arquivo EOF
  while (fread(&c, sizeof(char), 1, arq)) {
    if (c == '\n') {
      linhas++;
    }
  }

  fclose(arq);

  return linhas;
}


// Esta função faz a leitura de produtos do arquivo
void lerProdutos (lista *produtos, int qtde) {
  FILE *arq;

  arq = fopen("produtos.txt", "r");

  if (arq == NULL) {
   perror("[!] Erro");
    exit(1);
  }

  int qtdeLinhas = verificarQtdeLinhas();

  // Verificando se a quantidade de linhas do arquivo é igual
  // a quantidade de linhas inseridas pelo usuário
  if (qtdeLinhas == qtde) {
    int i;

    for (i = 0; i < qtde; i++) {
      fscanf(arq, "%s %i %f", 
        produtos[i].nomeProduto, 
        &produtos[i].quantidadeProduto,
        &produtos[i].valorProduto);
    }

    fclose(arq);

    calcularValorTotal(produtos, qtde);
  } else {
    printf("\n[!] Erro, a quantidade de produtos é inválida.\n");

    fclose(arq);
    reiniciarPrograma();
  }
} 


// Esta função faz o cálculo do valor total de cada produto cadastrado
void calcularValorTotal (lista *produtos, int qtde) {
  float valorTotal = 0;
  float multiAux = 0;
  int i;

  for (i = 0; i < qtde; i++) {
   multiAux = produtos[i].quantidadeProduto * produtos[i].valorProduto;
   valorTotal += multiAux;
  }

  printf("\n==============================================\n");
  printf("\n=> Valor total: R$ %0.2f\n", valorTotal);

  reiniciarPrograma();
}


// Esta função realiza a leitura da quantidade de produtos para serem
// lidos
int lerQtdeProdutos () {
  int qtde;

  printf("[+] Quantos produtos deseja ler? ");
  setbuf(stdin, NULL);
  scanf("%i", &qtde);

  setbuf(stdout, NULL);

  if (qtde >= 1) {
    return qtde;
  } else {
    printf("[!] Erro! Informe uma quantidade >= 1\n");
    lerQtdeProdutos();
  }
}


void reiniciarPrograma () {
  char resp;

  while (1) {
    printf("\n[-] Deseja reiniciar o programa? [S/N] ");
    setbuf(stdin, NULL);
    scanf("%c", &resp);
    getchar();

    switch (resp) {
      case 'S':
      case 's': main(); break;
      case 'N':
      case 'n': exit(0); break;
      default: printf("\n[!] Erro! Digite uma entrada correta [S/N].\n"); break;
    }
  }
}


void iniciarPrograma (lista *produtos, int qtde) {
  char resp;

  while (1) {
    printf("[*] Deseja gravar uma nova lista de compras? [S/N] ");
    setbuf(stdin, NULL);
    scanf("%c", &resp);
    getchar();

    if (resp == 'S' || resp == 's') {
      qtde = lerQtdeProdutos();
      adicionarProdutos(produtos, qtde);
    } else if (resp == 'N' || resp == 'n') {
      qtde = verificarQtdeLinhas();
      lerProdutos(produtos, qtde);
    } else {
      printf("[!] Erro! Digite uma entrada correta [S/N].\n");
      continue;
    }
  }
}


int main () {
  system("clear");

  int qtde = 0;
  lista produtos[qtde];

  iniciarPrograma(produtos, qtde);

  return 0;
}