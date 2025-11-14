#include <stdio.h>
int main(){FILE*f;f=fopen("usuarios.csv","w");fprintf(f,"id,nome,tipo\n1,Rodrigo,admin\n2,Vitoria,professor\n3,Giovanna,aluno");fclose(f);f=fopen("notas.csv","w");fprintf(f,"aluno_id,nota\n3,9.0");fclose(f);printf("Arquivos criados.\n");return 0;}
