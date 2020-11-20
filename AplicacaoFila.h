
typedef struct dados Dados;

typedef struct fila Fila;

Fila* create(int n);

Dados* novoDados(char* nome, char* motivo, int senha);

void inserir(Fila *fi, Dados* d);

int remover(Fila *fi);

int size(Fila *fi);

int first(Fila *fi);

int printAll(Fila *fi);

int isEmpty(Fila *fi);

int clear(Fila *fi);

