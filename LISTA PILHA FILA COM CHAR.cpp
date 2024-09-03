#include <stdio.h>

// Definição da estrutura do nó
struct No {
    char valor;
    No* prox;

    No(char _valor) {
        valor = _valor;
        prox = NULL;
    }
};

// Definição da estrutura da Lista
struct Lista {
    No* inicio;
    No* fim;
    int n;

    Lista() {
        inicio = NULL;
        fim = NULL;
        n = 0;
    }

    void inserirInicio(char valor) {
        No* novo = new No(valor);
        if (inicio == NULL) {
            inicio = novo;
            fim = novo;
        } else {
            novo->prox = inicio;
            inicio = novo;
        }
        n++;
    }

    void inserirFinal(char valor) {
        No* novo = new No(valor);
        if (inicio == NULL) {
            inicio = novo;
            fim = novo;
        } else {
            fim->prox = novo;
            fim = novo;
        }
        n++;
    }

    void removerInicio() {
        if (n == 0) return;
        if (n == 1) {
            delete(inicio);
            inicio = NULL;
            fim = NULL;
            n--;
            return;
        }
        No* aux = inicio;
        inicio = inicio->prox;
        delete(aux);
        n--;
    }

    void removerFinal() {
        if (n == 0) return;
        if (n == 1) {
            delete(inicio);
            inicio = NULL;
            fim = NULL;
            n--;
            return;
        }
        No* aux = inicio;
        while (aux->prox != fim) {
            aux = aux->prox;
        }
        delete(fim);
        fim = aux;
        aux->prox = NULL;
        n--;
    }

    void imprimirLista() {
        No* aux = inicio;
        //printf("%d %d\n", aux, aux->valor);
        while (aux != NULL) {
            printf("%c\n", aux->valor);
            //printf("%d %d\n", aux->prox, aux->valor);
            aux = aux->prox;
        }
    }
};

// Definição da estrutura da Pilha
struct Pilha {
    No* topo;
    int n;

    Pilha() {
        topo = NULL;
        n = 0;
    }

    void inserir(char valor) {
        No* novo = new No(valor);
        novo->prox = topo;
        topo = novo;
        n++;
    }

    void remover() {
        if (n == 0) return;
        No* aux = topo;
        topo = topo->prox;
        delete aux;
        n--;
    }

    char topoPilha() {
        if (topo == NULL) return 0;
        return topo->valor;
    }

     void imprimirPilha() {
        No* aux = topo;
        while (aux != NULL) {
            printf("%c\n", aux->valor);
            aux = aux->prox;
        }
    }

};

// Definição da estrutura da Fila
struct Fila {
    No* inicio;
    No* fim;
    int n;

    Fila() {
        inicio = NULL;
        fim = NULL;
        n = 0;
    }

    void enfileirar(char valor) {
        No* novo = new No(valor);
        if (inicio == NULL) {
            inicio = novo;
            fim = novo;
        } else {
            fim->prox = novo;
            fim = novo;
        }
        n++;
    }

    void desenfileirar(){
        if (n == 0) return;
        if (n == 1) {
            delete(inicio);
            inicio = NULL;
            fim = NULL;
            n = 0;
            return;
        }
        No* aux = inicio;
        inicio = inicio->prox;
        delete(aux);
        n--;
    }

    char frente() {
        if (inicio == NULL) return 0;
        return inicio->valor;
    }

    void imprimirFila() {
        No* aux = inicio;
        while (aux != NULL) {
            printf("%c\n", aux->valor);
            aux = aux->prox;
        }
    }
};

// Função principal
int main() {


    return 0;
}
