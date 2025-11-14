#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Simple C program to create users, turmas and notas CSV files.
// Demonstrates file I/O, decision structures, loops and functions in separate file.

void create_default_files() {
    FILE *f;
    f = fopen("usuarios.csv", "w");
    if(f) {
        fprintf(f, "id,nome,tipo,login\n");
        fprintf(f, "1,Rodrigo Blujos,admin,rodrigo\n");
        fprintf(f, "2,Victoria Caetano,professor,victoria\n");
        fprintf(f, "3,Giovanna Queres,aluno,giovanna\n");
        fclose(f);
    }
    f = fopen("turmas.csv","w");
    if(f) {
        fprintf(f, "id,nome,curso,professor_id\n");
        fprintf(f, "1,Programacao Estruturada,ADS,2\n");
        fclose(f);
    }
    f = fopen("notas.csv","w");
    if(f) {
        fprintf(f, "aluno_id,turma_id,nota\n");
        fprintf(f, "3,1,9.5\n");
        fclose(f);
    }
    printf("Arquivos CSV criados: usuarios.csv, turmas.csv, notas.csv\n");
}

int main() {
    int opc;
    printf("==== Módulo C - Gerador de CSVs ====\n");
    printf("1. Criar arquivos default\n");
    printf("2. Sair\n");
    printf("Escolha: ");
    if(scanf("%d", &opc) != 1) return 0;
    if(opc == 1) {
        create_default_files();
    }
    printf("Encerrando.\n");
    return 0;
}
