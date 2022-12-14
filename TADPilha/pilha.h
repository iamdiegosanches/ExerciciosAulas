#ifndef HEADER_PILHA
#define HEADER_PILHA

typedef struct{
    int codigo;
    char nome[100];
    int quantidade;
    int preco;
} TProduto;

typedef struct celula {
    TProduto item;
    struct celula* prox;
} TCelula;

typedef struct {
    TCelula *fundo;
    TCelula *topo;
    int tamanho;
} TPilha;

void FPVazia (TPilha *Pilha);
int Vazia (TPilha Pilha);
int Tamanho (TPilha Pilha);
void Push (TPilha *Pilha, TProduto x);
void Pop (TPilha *Pilha, TProduto *Item);
void Liberar(TPilha *Pilha);
void LerProduto(TProduto *x);
void ImprimirProduto(TProduto x);
void Imprimir (TPilha *Pilha1);
TProduto Pesquisar (TProduto Item, TPilha *Pilha1);

#endif // HEADER_PILHA
