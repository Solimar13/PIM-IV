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
    char res[15] = "SIM";
    char logado;
    int calcidade;
    int retorno;
    struct cadastro {
    char nome[SIZE];
    char email[SIZE];
    int numero, dia, mes, ano;
    char cpf[SIZE], telefone[SIZE], cep[SIZE], diag[SIZE];
    char rua[SIZE], bairro[SIZE], cidade[SIZE], estado[SIZE], comorbidade[10], quais[SIZE];
    };
        struct cadastro pac;

    int anoAtual;
    time_t data_ano;
    time(&data_ano);
    void cadastro(){};

    struct tm * data = localtime(&data_ano);
    anoAtual = (data -> tm_year+1900);

    system("cls");
    system("color F4");
    printf("\n========================================================\nSistema de Cadastro para pacientes com COVID-19\n========================================================\nLOGIN: ");
    gets(login1);
    if (strcmp(login, login1) == 0) {
        printf("SENHA: ");
        gets(senha1);
        if (strcmp(senha, senha1) == 0) {
            printf("\nLOGADO!");
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
        fflush(stdin);
        FILE *ponteiroArquivo;
        ponteiroArquivo=(fopen("cadastros.txt", "a"));
        printf("\n\nNome do paciente: ");
        fgets(pac.nome, 200, stdin);
        printf("CPF: ");
        fflush(stdin);
        fgets(pac.cpf, 200, stdin);
        printf("Data de nascimento:");
        printf("\nDia: ");
        fflush(stdin);
        scanf("%d", &pac.dia);
        printf("Mes: ");
        fflush(stdin);
        scanf("%d", &pac.mes);
        printf("Ano: ");
        fflush(stdin);
        scanf("%d", &pac.ano);
        printf("Telefone: ");
        fflush(stdin);
        fgets(pac.telefone, 200, stdin);
        printf("CEP: ");
        fflush(stdin);
        fgets(pac.cep, 200, stdin);
        printf("Rua: ");
        fflush(stdin);
        fgets(pac.rua, 200, stdin);
        printf("Numero: ");
        fflush(stdin);
        scanf("%d", &pac.numero);
        printf("Bairro: ");
        fflush(stdin);
        fgets(pac.bairro, 200, stdin);
        printf("Cidade: ");
        fflush(stdin);
        fgets(pac.cidade, 200, stdin);
        printf("Estado: ");
        fflush(stdin);
        fgets(pac.estado, 200, stdin);
        printf("Email: ");
        fflush(stdin);
        fgets(pac.email, 200, stdin);
        printf("Data do diagnostico: ");
        fflush(stdin);
        fgets(pac.diag, 200, stdin);
        printf("O paciente tem alguma comorbidade? SIM/NA0 ");
        fflush(stdin);
        fgets(pac.comorbidade, 200, stdin);
        retorno = strcmp(res, pac.comorbidade);
        if (retorno < 0)
        {
            printf("Quais? ");
            fflush(stdin);
            fgets(pac.quais, 200, stdin);
        }
        else{
            strcpy(pac.quais, "Nenhum");
        }
        printf("\n");
        fprintf(ponteiroArquivo, "\nNome: %s", pac.nome);
        fprintf(ponteiroArquivo, "CPF: %s", pac.cpf);
        fprintf(ponteiroArquivo, "Data de nascimento: %d/%d/%d\n", pac.dia, pac.mes, pac.ano);
        fprintf(ponteiroArquivo, "Telefone: %s", pac.telefone);
        fprintf(ponteiroArquivo, "CEP: %s", pac.cep);
        fprintf(ponteiroArquivo, "Rua: %s", pac.rua);
        fprintf(ponteiroArquivo, "Número: %i\n", pac.numero);
        fprintf(ponteiroArquivo, "Bairro: %s", pac.bairro);
        fprintf(ponteiroArquivo, "Cidade: %s", pac.cidade);
        fprintf(ponteiroArquivo, "Estado: %s", pac.estado);
        fprintf(ponteiroArquivo, "Email: %s", pac.email);
        fprintf(ponteiroArquivo, "Data do diagnostico: %s", pac.diag);
        fprintf(ponteiroArquivo, "Comorbidade: %s", pac.comorbidade);
        fprintf(ponteiroArquivo, "Quais comorbidade(s)? %s\n", pac.quais);
        calcidade = anoAtual - pac.ano;
        if (calcidade > 65 || retorno < 0) {
            FILE *ponteiroRisco;
            ponteiroRisco=(fopen("grupoderisco.txt", "a"));
            fprintf(ponteiroRisco, "\nCEP: %s", pac.cep);
            fprintf(ponteiroRisco, "Idade: %d\n", calcidade);
            printf("\n\nO Paciente foi identificado como pertencente ao grupo de risco.\n");
            fclose(ponteiroRisco);
    }
        fclose(ponteiroArquivo);

    }
}

