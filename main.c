#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int codigo;
    char titulo[100];
    char autor[80];
    char editora[60];
    int anoPublicacao;
    int qtddDisponivel;
    int status;  // disponivel ou emprestado
}CadastrarLivros;

typedef struct {
    int matricula;
    char nomeUsuario[100];
    char curso[50];
    char telefone[15];
    Data dataCadastro;
}CadastrarUsuario;

typedef struct {
    int codEmpestimo;
    int matriculaUsuario;
    int codLivro;
    Data dataEmprestimo;
    Data dataDevolucao;
    int status;     // Ativo ou devolvido
}SistemaEmpestimos;

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
