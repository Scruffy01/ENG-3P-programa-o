#include <stdio.h>
#define N 500

struct Livro {

    char nome[100];
    char autor[100];
    double npaginas;

    void ler() {
        printf("\nDigite o nome do livro: ");
        scanf("%[^\n]%*c", nome);
        printf("Digite o nome do autor: ");
        scanf("%[^\n]%*c", autor);
        printf("Digite o Numero de paginas: ");
        scanf("%lf%*c", &npaginas);
    }

    void imprimir() {
        printf("\nNome do livro: %s\n", nome);
        printf("Autor: %s\n", autor);
        printf("N de paginas: %.0lf\n", npaginas);
    }

};

struct Cadastro {

    int qtdLivro;
    Livro livro[10];

    void ler() {
        printf("Digite a quantidade de livros: ");
        scanf("%d%*c", &qtdLivro);
        if (qtdLivro > 10) {
            qtdLivro = 10;
            printf("A quantidade max permitida e 10 livros.\n");
        }
        for (int i = 0; i < qtdLivro; i++) {
            livro[i].ler();
        }
    }

    void imprimir() {
        printf("\nQtd de Livros: %d\n", qtdLivro);
        for (int i = 0; i < qtdLivro; i++) {
            livro[i].imprimir();
        }
    }

    void analise() {
        int posicaodoLivro = 0;
        double maxPaginas = 0;

        for (int i = 0; i < qtdLivro; i++) {
            if (livro[i].npaginas > maxPaginas) {
                maxPaginas = livro[i].npaginas;
                posicaodoLivro = i;
            }
        }

        printf("\nLivro com maior N de paginas:\n");
        livro[posicaodoLivro].imprimir();
    }
};

int main() {
    Cadastro l;

    l.ler();

    printf("\nDigite:");
    printf("\n1-> Deseja imprimir todos os livros da biblioteca\n2-> Deseja imprimir o livro com mais paginas ");
    int escolha;
    scanf("%d%*c", &escolha);

    if (escolha == 1) {
        l.imprimir();
    } else if (escolha == 2) {
        l.analise();
    } else {
        printf("Escolha invalida.\n");
    }

    return 0;
}
