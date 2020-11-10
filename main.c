#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 200
int main(void) {
    char login[15] = "Solimar";
    char login1[15];
    char senha[15] = "1234";
    char senha1[15];
    char logado;
    int calcidade;
    struct cadastro {
    char nome[SIZE];
    char email[SIZE];
    int numero;
    char cpf[SIZE], telefone[SIZE], cep[SIZE], diag[SIZE], nasc[SIZE];
    char rua[SIZE], bairro[SIZE], cidade[SIZE], estado[SIZE], comorbidade[SIZE];
    };
        struct cadastro pac;

    int anoAtual;
    time_t data_ano;
    time(&data_ano);
    void cadastro(){};

    struct tm * data = localtime(&data_ano);
    anoAtual = (data -> tm_year+1900);
    printf("%d\n",anoAtual);

    system("cls");
    system("color F4");
    printf("LOGIN: ");
    gets(login1);
    if (strcmp(login, login1) == 0) {
        printf("SENHA: ");
        gets(senha1);
        if (strcmp(senha, senha1) == 0) {
            printf("LOGADO!");
            cadastro(cadastro);
            logado = 'S';

        }
        else {
            printf("Senha inválida!");
        }
    }
    else {
        printf("Login inválido!");
    }

    if (logado == 'S') {
        __fpurge(stdin);
        FILE *ponteiroArquivo;
        ponteiroArquivo=(fopen("cadastros.txt", "a"));
        printf("\nNome do paciente: ");
        fgets(pac.nome, 200, stdin);
        printf("CPF: ");
        __fpurge(stdin);
        fgets(pac.cpf, 200, stdin);
        printf("Data de nascimento: ");
        __fpurge(stdin);
        fgets(pac.nasc, 200, stdin);
        printf("Telefone: ");
        __fpurge(stdin);
        fgets(pac.telefone, 200, stdin);
        printf("CEP: ");
        __fpurge(stdin);
        fgets(pac.cep, 200, stdin);
        printf("Rua: ");
        __fpurge(stdin);
        fgets(pac.rua, 200, stdin);
        printf("Número: ");
        __fpurge(stdin);
        scanf("%d", &pac.numero);
        printf("Bairro: ");
        __fpurge(stdin);
        fgets(pac.bairro, 200, stdin);
        printf("Cidade: ");
        __fpurge(stdin);
        fgets(pac.cidade, 200, stdin);
        printf("Estado: ");
        __fpurge(stdin);
        fgets(pac.estado, 200, stdin);
        printf("Email: ");
        __fpurge(stdin);
        fgets(pac.email, 200, stdin);
        printf("Data do diagnóstico: ");
        __fpurge(stdin);
        fgets(pac.diag, 200, stdin);
        printf("O paciente tem alguma comorbidade? Se sim, qual? ");
        __fpurge(stdin);
        fgets(pac.comorbidade, 200, stdin);

        printf("\n");

        fprintf(ponteiroArquivo, "Nome: %s\n", pac.nome);
        fprintf(ponteiroArquivo, "CPF: %s\n", pac.cpf);
        fprintf(ponteiroArquivo, "Data de nascimento: %s\n", pac.nasc);
        fprintf(ponteiroArquivo, "Telefone: %s\n", pac.telefone);
        fprintf(ponteiroArquivo, "CEP: %s\n", pac.cep);
        fprintf(ponteiroArquivo, "Rua: %s\n", pac.rua);
        fprintf(ponteiroArquivo, "Número: %i\n", pac.numero);
        fprintf(ponteiroArquivo, "Bairro: %s\n", pac.bairro);
        fprintf(ponteiroArquivo, "Cidade: %s\n", pac.cidade);
        fprintf(ponteiroArquivo, "Estado: %s\n", pac.estado);
        fprintf(ponteiroArquivo, "Email: %s\n", pac.email);
        fprintf(ponteiroArquivo, "Data do diagnostico: %s\n", pac.diag);
        fprintf(ponteiroArquivo, "Comorbidade: %s\n", pac.comorbidade);

        fclose(ponteiroArquivo);

    }


    return 0;
}

void cadastro() {
    printf("Teste");
}
