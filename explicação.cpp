// 1. Estrutura Básica de um Programa em C++
#include <stdio.h>  // Diretivas de pré-processador: Inclui o conteúdo do arquivo de cabeçalho <stdio.h> para usar funções como printf().

int main() {  // Função principal: Quando você executa o programa, o código dentro da função main() é o primeiro a ser executado.
    printf("Hello, World!\n");  // Função printf(): Exibe "Hello, World!" na tela, \n representa uma nova linha.
    return 0;  // Retorno da função: Indica que o programa terminou com sucesso, retornando 0.
}

// 2. Variáveis e Tipos de Dados
int idade = 25;  // int: Tipo inteiro, usado para armazenar números inteiros.
float altura = 1.75;  // float: Tipo de ponto flutuante, usado para números com partes decimais.
char inicial = 'A';  // char: Tipo de caractere, usado para armazenar um único caractere.

// 3. Estruturas de Controle
// if/else: Executa um bloco de código com base em uma condição.
int idade2 = 18;
if (idade2 >= 18) {  // Condicional: Verifica se idade2 é maior ou igual a 18.
    printf("Você é maior de idade.\n");
} else {
    printf("Você é menor de idade.\n");
}

// while: Repetição baseada em uma condição.
int i = 0;
while (i < 5) {  // Repetição: Executa enquanto i for menor que 5.
    printf("%d\n", i);  // Exibe o valor de i.
    i++;  // Incrementa i.
}

// for: Repetição com inicialização, condição e incremento.
for (int i = 0; i < 5; i++) {  // Estrutura compacta: Inicializa, verifica condição e incrementa.
    printf("%d\n", i);  // Exibe o valor de i.
}

// 4. Funções
int soma(int a, int b) {  // Declaração de função: Soma dois inteiros.
    return a + b;
}

int main2() {
    int resultado = soma(5, 3);  // Chamando a função: Passa os valores 5 e 3 para a função soma.
    printf("Resultado: %d\n", resultado);  // Exibe o resultado.
    return 0;
}

// 5. Arrays
int numeros[5] = {1, 2, 3, 4, 5};  // Declaração de array: Define um array de 5 inteiros.
printf("%d\n", numeros[2]);  // Acesso a elementos: Imprime o terceiro elemento do array, que é 3.

// 6. Estruturas de Dados Personalizadas (struct)
struct Pessoa {  // Declaração de struct: Define um novo tipo de dado com os campos nome e idade.
    char nome[50];
    int idade;
};

int main3() {
    struct Pessoa p1;  // Uso de struct: Declara uma variável do tipo Pessoa.
    p1.idade = 30;  // Atribui o valor 30 ao campo idade.
    printf("Idade: %d\n", p1.idade);  // Exibe a idade de p1.
    return 0;
}

// 7. Condições nas Estruturas de Controle
int idade3 = 20;

if (idade3 >= 18) {  // if: Verifica se a condição é verdadeira e executa o bloco de código.
    printf("Você é maior de idade.\n");
} else if (idade3 >= 13) {  // else if: Verifica uma condição alternativa se a primeira for falsa.
    printf("Você é um adolescente.\n");
} else {  // else: Executa se nenhuma das condições anteriores for verdadeira.
    printf("Você é uma criança.\n");
}

// while: Repetição baseada em uma condição.
int j = 0;
while (j < 5) {
    printf("j = %d\n", j);  // Exibe o valor de j.
    j++;
}

// do-while: Garante que o bloco de código seja executado pelo menos uma vez.
int k = 5;
do {
    printf("k = %d\n", k);  // Executa pelo menos uma vez.
    k++;
} while (k < 5);

// for: Repetição controlada.
for (int l = 0; l < 5; l++) {
    printf("l = %d\n", l);  // Exibe o valor de l.
}

// switch: Estrutura de escolha baseada no valor de uma expressão.
int dia = 3;

switch (dia) {
    case 1:
        printf("Domingo\n");
        break;  // break: Interrompe o fluxo de execução no switch.
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    default:
        printf("Dia inválido\n");  // default: Executa se nenhuma correspondência for encontrada.
}

// 8. Operadores Lógicos e Condições Compostas
int x = 5;
int y = 10;

if (x > 0 && y < 20) {  // Condições compostas: Combinação de múltiplas condições.
    printf("Ambas as condições são verdadeiras.\n");
}

// 9. Leitura de Dados com scanf e fgets
int idade4;
scanf("%d", &idade4);  // Leitura de um inteiro.

float altura2;
scanf("%f", &altura2);  // Leitura de um ponto flutuante.

char letra;
scanf("%c", &letra);  // Leitura de um caractere.

char nome[50];
scanf("%s", nome);  // Leitura de uma string (sem espaços).

char linha[100];
fgets(linha, sizeof(linha), stdin);  // Leitura de uma linha inteira (com espaços).

// Para se preparar para uma prova prática de C++ usando as bibliotecas
// #include <stdio.h>, #include <string.h>, e #include <stdbool.h>,
// é importante entender os principais conceitos e funções fornecidos por essas bibliotecas,
// além de dominar a sintaxe básica de C++.

// 1. Biblioteca stdio.h:
// Entrada e Saída:

#include <stdio.h>

int main() {
    // printf: Função para imprimir texto e variáveis na tela.
    int valor = 10;
    printf("Valor: %d\n", valor);

    // scanf: Função para leitura de dados do usuário.
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("Você digitou: %d\n", valor);

    // fgets: Lê uma linha de texto de uma stream, como stdin.
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    printf("Você digitou: %s", str);

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

    // Manipulação de erros:
    // perror: Mostra uma mensagem de erro descritiva.
    // feof, ferror: Para verificar o fim do arquivo e erros durante operações com arquivos.

    // Exemplo simples de uso de feof:
    if (feof(arquivoLeitura)) {
        printf("Fim do arquivo alcançado\n");
    }

    // Exemplo simples de uso de ferror:
    if (ferror(arquivoLeitura)) {
        perror("Erro ao ler o arquivo");
    }

    // 2. Biblioteca string.h:
    #include <string.h>

    // Manipulação de strings:
    char str1[50] = "Hello";
    char str2[50] = "World";

    // strlen: Retorna o comprimento de uma string.
    int len = strlen(str1);
    printf("Comprimento de str1: %d\n", len);

    // strcpy, strncpy: Copiam uma string para outra.
    strcpy(str2, str1);
    printf("str2 após strcpy: %s\n", str2);

    // strcat, strncat: Concatenam strings.
    strcat(str1, str2);
    printf("str1 após strcat: %s\n", str1);

    // strcmp, strncmp: Comparam duas strings.
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais\n");
    } else {
        printf("As strings são diferentes\n");
    }

    // strchr, strrchr: Encontram a primeira ou última ocorrência de um caractere em uma string.
    char *p = strchr(str1, 'l');
    if (p != NULL) {
        printf("Primeira ocorrência de 'l': %s\n", p);
    }

    // Tokenização:
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
        printf("Condição verdadeira\n");
    }

    // 4. Estruturas de Controle:

    // Condicionais:

    // if, else if, else: Controle de fluxo baseado em condições.
    int num = 5;
    if (num > 0) {
        printf("Número positivo\n");
    } else if (num < 0) {
        printf("Número negativo\n");
    } else {
        printf("Número é zero\n");
    }

    // switch: Para selecionar entre múltiplos casos baseados no valor de uma expressão.
    switch (num) {
        case 1:
            printf("Número é 1\n");
            break;
        case 5:
            printf("Número é 5\n");
            break;
        default:
            printf("Número é outro\n");
            break;
    }

    // Laços:

    // for: Usado para iterar um número fixo de vezes.
    for (int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }

    // while: Executa enquanto uma condição for verdadeira.
    int i = 0;
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }

    // do...while: Similar ao while, mas garante que o laço será executado pelo menos uma vez.
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

    // continue: Pula para a próxima iteração do loop.
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) continue;
        printf("i = %d\n", i);
    }

    // 5. Manipulação de Dados:

    // Tipos de Dados:
    int inteiro = 10;
    float flutuante = 3.14;
    char caractere = 'A';
    double duplaPrecisao = 9.81;
    bool booleano = true;

    // Arrays: Conjuntos de variáveis do mesmo tipo.
    int numeros[10];
    for (i = 0; i < 10; i++) {
        numeros[i] = i * 2;
    }

    // Strings: Arrays de caracteres que terminam com \0.
    char string[] = "Hello World";

    // Funções:

    // Definição e chamada de funções.
    void minhaFuncao(int x) {
        printf("Valor: %d\n", x);
    }
    minhaFuncao(42);

    // 6. Manipulação de Ponteiros:

    // Ponteiros: Variáveis que armazenam endereços de memória.
    int *ptr;
    int variavel = 10;
    ptr = &variavel;
    printf("Valor de variavel através do ponteiro: %d\n", *ptr);

    // 7. Estruturas:

    // Structs: Definição de novos tipos de dados compostos.
    struct Pessoa {
        char nome[50];
        int idade;
    };
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "João");
    pessoa1.idade = 30;

    // Acesso a membros:
    printf("Nome: %s, Idade: %d\n", pessoa1.nome, pessoa1.idade);

    // 8. Gerenciamento de Memória:

    // Alocação Dinâmica:
    int *vetor = (int*)malloc(10 * sizeof(int));
    if (vetor == NULL) {
        perror("Erro ao alocar memória");
        return 1;
    }
    // Alocar mais memória:
    vetor = (int*)realloc(vetor, 20 * sizeof(int));
    if (vetor == NULL) {
        perror("Erro ao realocar memória");
        return 1;
    }
    // Liberar a memória:
    free(vetor);

    // 9. Práticas de Programação:

    // Testes e Depuração:
    // Sempre teste seu código com entradas variadas para garantir que ele funcione em todas as situações esperadas.
    // Use printf para ajudar na depuração, imprimindo valores intermediários.

    // Organização e Legibilidade:
    // Comente seu código de maneira clara e concisa.
    // Use nomes de variáveis significativos.
    // Mantenha seu código bem indentado.

    return 0;
}

