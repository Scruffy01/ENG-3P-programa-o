// 1. Estrutura B�sica de um Programa em C++
#include <stdio.h>  // Diretivas de pr�-processador: Inclui o conte�do do arquivo de cabe�alho <stdio.h> para usar fun��es como printf().

int main() {  // Fun��o principal: Quando voc� executa o programa, o c�digo dentro da fun��o main() � o primeiro a ser executado.
    printf("Hello, World!\n");  // Fun��o printf(): Exibe "Hello, World!" na tela, \n representa uma nova linha.
    return 0;  // Retorno da fun��o: Indica que o programa terminou com sucesso, retornando 0.
}

// 2. Vari�veis e Tipos de Dados
int idade = 25;  // int: Tipo inteiro, usado para armazenar n�meros inteiros.
float altura = 1.75;  // float: Tipo de ponto flutuante, usado para n�meros com partes decimais.
char inicial = 'A';  // char: Tipo de caractere, usado para armazenar um �nico caractere.

// 3. Estruturas de Controle
// if/else: Executa um bloco de c�digo com base em uma condi��o.
int idade2 = 18;
if (idade2 >= 18) {  // Condicional: Verifica se idade2 � maior ou igual a 18.
    printf("Voc� � maior de idade.\n");
} else {
    printf("Voc� � menor de idade.\n");
}

// while: Repeti��o baseada em uma condi��o.
int i = 0;
while (i < 5) {  // Repeti��o: Executa enquanto i for menor que 5.
    printf("%d\n", i);  // Exibe o valor de i.
    i++;  // Incrementa i.
}

// for: Repeti��o com inicializa��o, condi��o e incremento.
for (int i = 0; i < 5; i++) {  // Estrutura compacta: Inicializa, verifica condi��o e incrementa.
    printf("%d\n", i);  // Exibe o valor de i.
}

// 4. Fun��es
int soma(int a, int b) {  // Declara��o de fun��o: Soma dois inteiros.
    return a + b;
}

int main2() {
    int resultado = soma(5, 3);  // Chamando a fun��o: Passa os valores 5 e 3 para a fun��o soma.
    printf("Resultado: %d\n", resultado);  // Exibe o resultado.
    return 0;
}

// 5. Arrays
int numeros[5] = {1, 2, 3, 4, 5};  // Declara��o de array: Define um array de 5 inteiros.
printf("%d\n", numeros[2]);  // Acesso a elementos: Imprime o terceiro elemento do array, que � 3.

// 6. Estruturas de Dados Personalizadas (struct)
struct Pessoa {  // Declara��o de struct: Define um novo tipo de dado com os campos nome e idade.
    char nome[50];
    int idade;
};

int main3() {
    struct Pessoa p1;  // Uso de struct: Declara uma vari�vel do tipo Pessoa.
    p1.idade = 30;  // Atribui o valor 30 ao campo idade.
    printf("Idade: %d\n", p1.idade);  // Exibe a idade de p1.
    return 0;
}

// 7. Condi��es nas Estruturas de Controle
int idade3 = 20;

if (idade3 >= 18) {  // if: Verifica se a condi��o � verdadeira e executa o bloco de c�digo.
    printf("Voc� � maior de idade.\n");
} else if (idade3 >= 13) {  // else if: Verifica uma condi��o alternativa se a primeira for falsa.
    printf("Voc� � um adolescente.\n");
} else {  // else: Executa se nenhuma das condi��es anteriores for verdadeira.
    printf("Voc� � uma crian�a.\n");
}

// while: Repeti��o baseada em uma condi��o.
int j = 0;
while (j < 5) {
    printf("j = %d\n", j);  // Exibe o valor de j.
    j++;
}

// do-while: Garante que o bloco de c�digo seja executado pelo menos uma vez.
int k = 5;
do {
    printf("k = %d\n", k);  // Executa pelo menos uma vez.
    k++;
} while (k < 5);

// for: Repeti��o controlada.
for (int l = 0; l < 5; l++) {
    printf("l = %d\n", l);  // Exibe o valor de l.
}

// switch: Estrutura de escolha baseada no valor de uma express�o.
int dia = 3;

switch (dia) {
    case 1:
        printf("Domingo\n");
        break;  // break: Interrompe o fluxo de execu��o no switch.
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Ter�a-feira\n");
        break;
    default:
        printf("Dia inv�lido\n");  // default: Executa se nenhuma correspond�ncia for encontrada.
}

// 8. Operadores L�gicos e Condi��es Compostas
int x = 5;
int y = 10;

if (x > 0 && y < 20) {  // Condi��es compostas: Combina��o de m�ltiplas condi��es.
    printf("Ambas as condi��es s�o verdadeiras.\n");
}

// 9. Leitura de Dados com scanf e fgets
int idade4;
scanf("%d", &idade4);  // Leitura de um inteiro.

float altura2;
scanf("%f", &altura2);  // Leitura de um ponto flutuante.

char letra;
scanf("%c", &letra);  // Leitura de um caractere.

char nome[50];
scanf("%s", nome);  // Leitura de uma string (sem espa�os).

char linha[100];
fgets(linha, sizeof(linha), stdin);  // Leitura de uma linha inteira (com espa�os).

// Para se preparar para uma prova pr�tica de C++ usando as bibliotecas
// #include <stdio.h>, #include <string.h>, e #include <stdbool.h>,
// � importante entender os principais conceitos e fun��es fornecidos por essas bibliotecas,
// al�m de dominar a sintaxe b�sica de C++.

// 1. Biblioteca stdio.h:
// Entrada e Sa�da:

#include <stdio.h>

int main() {
    // printf: Fun��o para imprimir texto e vari�veis na tela.
    int valor = 10;
    printf("Valor: %d\n", valor);

    // scanf: Fun��o para leitura de dados do usu�rio.
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("Voc� digitou: %d\n", valor);

    // fgets: L� uma linha de texto de uma stream, como stdin.
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    printf("Voc� digitou: %s", str);

    // Arquivos:

    // fopen, fclose: Para abrir e fechar arquivos.
    FILE *arquivo = fopen("nome.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    fclose(arquivo);

    // fscanf, fprintf: Para leitura e escrita formatada em arquivos.
    FILE *arquivoEscrita = fopen("saida.txt", "w");
    if (arquivoEscrita != NULL) {
        fprintf(arquivoEscrita, "Escrevendo no arquivo\n");
        fclose(arquivoEscrita);
    }

    // fgetc, fputc: Para ler e escrever caracteres em arquivos.
    FILE *arquivoLeitura = fopen("saida.txt", "r");
    if (arquivoLeitura != NULL) {
        char c = fgetc(arquivoLeitura);
        while (c != EOF) {
            printf("%c", c);
            c = fgetc(arquivoLeitura);
        }
        fclose(arquivoLeitura);
    }

    // Manipula��o de erros:
    // perror: Mostra uma mensagem de erro descritiva.
    // feof, ferror: Para verificar o fim do arquivo e erros durante opera��es com arquivos.

    // Exemplo simples de uso de feof:
    if (feof(arquivoLeitura)) {
        printf("Fim do arquivo alcan�ado\n");
    }

    // Exemplo simples de uso de ferror:
    if (ferror(arquivoLeitura)) {
        perror("Erro ao ler o arquivo");
    }

    // 2. Biblioteca string.h:
    #include <string.h>

    // Manipula��o de strings:
    char str1[50] = "Hello";
    char str2[50] = "World";

    // strlen: Retorna o comprimento de uma string.
    int len = strlen(str1);
    printf("Comprimento de str1: %d\n", len);

    // strcpy, strncpy: Copiam uma string para outra.
    strcpy(str2, str1);
    printf("str2 ap�s strcpy: %s\n", str2);

    // strcat, strncat: Concatenam strings.
    strcat(str1, str2);
    printf("str1 ap�s strcat: %s\n", str1);

    // strcmp, strncmp: Comparam duas strings.
    if (strcmp(str1, str2) == 0) {
        printf("As strings s�o iguais\n");
    } else {
        printf("As strings s�o diferentes\n");
    }

    // strchr, strrchr: Encontram a primeira ou �ltima ocorr�ncia de um caractere em uma string.
    char *p = strchr(str1, 'l');
    if (p != NULL) {
        printf("Primeira ocorr�ncia de 'l': %s\n", p);
    }

    // Tokeniza��o:
    // strtok: Divide uma string em tokens com base em delimitadores.
    char str3[50] = "Hello World!";
    char *token = strtok(str3, " ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    // 3. Biblioteca stdbool.h:
    #include <stdbool.h>

    // Booleans:
    // Introduz os tipos bool, true, e false.
    bool condicao = true;
    if (condicao) {
        printf("Condi��o verdadeira\n");
    }

    // 4. Estruturas de Controle:

    // Condicionais:

    // if, else if, else: Controle de fluxo baseado em condi��es.
    int num = 5;
    if (num > 0) {
        printf("N�mero positivo\n");
    } else if (num < 0) {
        printf("N�mero negativo\n");
    } else {
        printf("N�mero � zero\n");
    }

    // switch: Para selecionar entre m�ltiplos casos baseados no valor de uma express�o.
    switch (num) {
        case 1:
            printf("N�mero � 1\n");
            break;
        case 5:
            printf("N�mero � 5\n");
            break;
        default:
            printf("N�mero � outro\n");
            break;
    }

    // La�os:

    // for: Usado para iterar um n�mero fixo de vezes.
    for (int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }

    // while: Executa enquanto uma condi��o for verdadeira.
    int i = 0;
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }

    // do...while: Similar ao while, mas garante que o la�o ser� executado pelo menos uma vez.
    i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 3);

    // Comandos de controle de loop:

    // break: Interrompe o loop imediatamente.
    for (i = 0; i < 10; i++) {
        if (i == 5) break;
        printf("i = %d\n", i);
    }

    // continue: Pula para a pr�xima itera��o do loop.
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) continue;
        printf("i = %d\n", i);
    }

    // 5. Manipula��o de Dados:

    // Tipos de Dados:
    int inteiro = 10;
    float flutuante = 3.14;
    char caractere = 'A';
    double duplaPrecisao = 9.81;
    bool booleano = true;

    // Arrays: Conjuntos de vari�veis do mesmo tipo.
    int numeros[10];
    for (i = 0; i < 10; i++) {
        numeros[i] = i * 2;
    }

    // Strings: Arrays de caracteres que terminam com \0.
    char string[] = "Hello World";

    // Fun��es:

    // Defini��o e chamada de fun��es.
    void minhaFuncao(int x) {
        printf("Valor: %d\n", x);
    }
    minhaFuncao(42);

    // 6. Manipula��o de Ponteiros:

    // Ponteiros: Vari�veis que armazenam endere�os de mem�ria.
    int *ptr;
    int variavel = 10;
    ptr = &variavel;
    printf("Valor de variavel atrav�s do ponteiro: %d\n", *ptr);

    // 7. Estruturas:

    // Structs: Defini��o de novos tipos de dados compostos.
    struct Pessoa {
        char nome[50];
        int idade;
    };
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "Jo�o");
    pessoa1.idade = 30;

    // Acesso a membros:
    printf("Nome: %s, Idade: %d\n", pessoa1.nome, pessoa1.idade);

    // 8. Gerenciamento de Mem�ria:

    // Aloca��o Din�mica:
    int *vetor = (int*)malloc(10 * sizeof(int));
    if (vetor == NULL) {
        perror("Erro ao alocar mem�ria");
        return 1;
    }
    // Alocar mais mem�ria:
    vetor = (int*)realloc(vetor, 20 * sizeof(int));
    if (vetor == NULL) {
        perror("Erro ao realocar mem�ria");
        return 1;
    }
    // Liberar a mem�ria:
    free(vetor);

    // 9. Pr�ticas de Programa��o:

    // Testes e Depura��o:
    // Sempre teste seu c�digo com entradas variadas para garantir que ele funcione em todas as situa��es esperadas.
    // Use printf para ajudar na depura��o, imprimindo valores intermedi�rios.

    // Organiza��o e Legibilidade:
    // Comente seu c�digo de maneira clara e concisa.
    // Use nomes de vari�veis significativos.
    // Mantenha seu c�digo bem indentado.

    return 0;
}

