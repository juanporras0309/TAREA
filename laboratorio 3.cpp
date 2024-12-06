#include<stdio.h>

typedef struct {
char codigo[8];
char nombre[15];
int nota;
} MATERIA;

void ListarMateriasDpto(const char nombre[],const char dpto[]);
void ListarMateriasNota(const char nombre[],int nota);

int main() {
char nombre[20],dpto[3];
int nota,opc;

printf("Introduzca el nombre del archivo de materias:");
scanf("%s",nombre);

printf("\n(1) Listar Materias de un departamento");
printf("\n(2) Listar Materias por nota");
printf("\nIntroduzca su eleccion (1/2):");
scanf("%d", &opc);

switch(opc) {
case 1: 
printf("Departamento: ");
scanf("%s",dpto);
ListarMateriasDpto(nombre,dpto);
break;
case 2: 
printf("Nota:");
scanf("%d", &nota);
ListarMateriasNota(nombre,nota);
break;

default: 
printf("\nOpcion incorrecta. Vuelva a intentar");
}
}

void ListarMateriasDpto(const char nombre[], const char dpto[])
{
FILE *fp;
MATERIA m;
fp= fopen(nombre, "r");
if (fp != NULL) {
while (!feof(fp)) {
fscanf(fp,"%7s %15s %d",m.codigo,m.nombre,&m.nota);
if (m.codigo[0] == dpto[0] && m.codigo[1] == dpto[1]){

printf("%7s %15s %d\n",m.codigo,m.nombre,m.nota);
}
}
fclose(fp);
} else{

printf("ERROR: No se pudo abrir el archivo %s\n",nombre);
}
}
void ListarMateriasNota(const char nombre[],int nota)
{
FILE *fp;
MATERIA m;
fp=fopen(nombre,"r");
if (fp != NULL) {
while (!feof(fp)){
fscanf(fp,"%7s %15s %d",m.codigo,m.nombre,&m.nota);
if (m.nota == nota){
printf("%7s %15s %d\n",m.codigo,m.nombre,m.nota);
}
}
fclose(fp);
} 
 else {
printf("ERROR: No se pudo abrir el archivo %s\n",nombre);
}
}

