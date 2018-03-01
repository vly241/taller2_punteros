
//--------------------------------------------------------
//trabajo de punteros

//estudiantes
//valeria liscano yepes
//paula andrea cabrera
//carlos andres arroyave

//---------------------------------------------------------



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <math.h>

void ejerA_1();
void ejerA_2();
//void ejerA_3();
void ejerB_1();
void ejerB_2();
void ejerB_3();
void ejerC_1();
void ejerC_2();
void ejerC_3();
void ejerC_4();
void ejerC_5();
void ejerC_6();
int ejerC_7();
int ejerC_8();
void ejerC_9();
void ejerC_10();
void ejerC_11();
void ejerC_12();
void ejerD_1();
void ejerD_2();
void ejerD_3();
void ejerD_4();

//parte de puntero punto 8
int vA(char*);
int vE(char*);
int vI(char*);
int vO(char*);
int vU(char*);
//parte de punteros punto 7
int conteo(char *);
//parte de punteros punto 8
void pedirDatos();
void sumarMatrices(int **,int **,int,int);
void mostrarMatrizSuma(int **,int,int);
int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;

//parte de estructura punteros parte 2
struct competidor
	{
		char nombre[30];
		int edad;
		char sexo[10];
		char club[30];
	}*p_usuario1[0];
	
	
	struct estudiante
{
	char nombre[20];
	int edad;
	int grado;
	float promedio;
}*p_estudiante1[0], *p_estudiante2[0], *p_estudiante3[0];

//parte de estructuras punteros parte 3

struct trabajadores{
	float salario;
	
}*P_trabajador[0];

//parte de estructuras punteros parte 4
struct promedio
 {
 	float nota1;
 	float nota2;
 	float nota3;
 };
 

 struct alumno
 {
 	char nombre[20];
 	char sexo[10];
 	int edad;
 	struct promedio alumno;
 }*p_estudiante[0];

//menus

void a(){
     int num;
    while(num!=4){
    printf("\t\n USTED DECIDIO INGRESAR HA ARREGLOS CON PUNTEROS.\n\n");
    printf("Ingrese un numero segun lo que desee hacer:\n");
    printf("1.)Primer Punto.\n");
    printf("2.)Segundo Punto.\n");
    printf("3.)Tercer Punto.\n");
    printf("4.)Cerrar el Programa.\n");
    printf("Ingrese Numero:");
    scanf("%i",&num);
    switch(num){
case 1:

    ejerA_1();
    system("pause");
    system("cls");

    break;
case 2:

    ejerA_2();
    system("pause");
    system("cls");
    break;
case 3:
    //ejerA_3();
    break;
default:
    system("cls");
    printf("HASTA LUEGO, ESPERO HABER AYUDADO CON SUS NECESIDADES.\n");
    system("pause");
    }
    }
}

void b(){
         int num;
    while(num!=4){
    printf("\t\n USTED DECIDIO INGRESAR HA MATRICEZ CON PUNTEROS.\n\n");
    printf("Ingrese un numero segun lo que desee hacer:\n");
    printf("1.)Primer Punto.\n");
    printf("2.)Segundo Punto.\n");
    printf("3.)Tercer Punto.\n");
    printf("4.)Cerrar el Programa.\n");
    printf("Ingrese Numero:");
    scanf("%i",&num);
    switch(num){
case 1:
    ejerB_1();
    system("pause");
    system("cls");
    break;
case 2:
    ejerB_2();
    system("pause");
    system("cls");
    break;
case 3:
    ejerB_3();
    system("pause");
    system("cls");
    break;
default:
    system("cls");
    printf("HASTA LUEGO, ESPERO HABER AYUDADO CON SUS NECESIDADES.\n");
    system("pause");
    }
    }
}

void c(){
         int num;
    while(num!=13){
    printf("\t\n USTED DECIDIO INGRESAR HA EJERCICIOS CON PUNTEROS.\n\n");
    printf("Ingrese un numero segun lo que desee hacer:\n");
    printf("1.)Primer Punto.\n");
    printf("2.)Segundo Punto.\n");
    printf("3.)Tercer Punto.\n");
    printf("4.)Cuarto Punto.\n");
    printf("5.)Quinto Punto.\n");
    printf("6.)Sexto Punto.\n");
    printf("7.)Septimo Punto.\n");
    printf("8.)Octavo Punto.\n");
    printf("9.)Noveno Punto.\n");
    printf("10.)Decimo Punto.\n");
    printf("11.)Onceavo Punto.\n");
    printf("12.)Doceavo Punto.\n");
    printf("13.)Cerrar el Programa.\n");
    printf("Ingrese Numero:");
    scanf("%i",&num);
    switch(num){
case 1:
    ejerC_1();
    system("pause");
    system("cls");
    break;
case 2:
    ejerC_2();
    system("pause");
    system("cls");
    break;
case 3:
   ejerC_3();
   system("pause");
    system("cls");
    break;
case 4:
    ejerC_4();
    system("pause");
    system("cls");
    break;
case 5:
    ejerC_5();
    system("pause");
    system("cls");

    break;
case 6:
    ejerC_6();
    system("pause");
    system("cls");

case 7:

   ejerC_7();
   system("pause");
    system("cls");

    break;
case 8:
    ejerC_8();
    system("pause");
    system("cls");
    break;
case 9:
    
   ejerC_9();
   system("pause");
    system("cls");
    break;
case 10:
   ejerC_10();
   system("pause");
    system("cls");
    break;
case 11:
    ejerC_11();
    system("pause");
    system("cls");
    break;
case 12:
    ejerC_12();
    system("pause");
    system("cls");
    
    break;

default:
    system("cls");
    printf("HASTA LUEGO, ESPERO HABER AYUDADO CON SUS NECESIDADES.\n");
    system("pause");
    }
    }
}

void d(){
    int num;
    while(num!=5){
    printf("\t\n USTED DECIDIO INGRESAR HA ESTRUCTURAS CON PUNTEROS.\n\n");
    printf("Ingrese un numero segun lo que desee hacer:\n");
    printf("1.)Primer Punto.\n");
    printf("2.)Segundo Punto.\n");
    printf("3.)Tercer Punto.\n");
    printf("4.)Cuarto Punto.\n");
    printf("5.)Cerrar el Programa.\n");
    printf("Ingrese Numero:");
    scanf("%i",&num);
    switch(num){
case 1:
    ejerD_1();
    break;
case 2:
    ejerD_2();
    break;
case 3:
    ejerD_3();
    break;
case 4:
    ejerD_4();
    break;
default:
    system("cls");
    printf("HASTA LUEGO, ESPERO HABER AYUDADO CON SUS NECESIDADES.\n");
    system("pause");
    }
    }
}

int main(){
    system("cls");
    int num;
    while(num!=5){
    printf("\t\n BIENVENIDO AL SEGUNDO TALLER DE ESTRUCTURA DE DATOS. \n\n");
    printf("Ingrese un numero segun lo que desee hacer:\n");
    printf("1.)Ejercicios de Arreglos con Punteros.\n");
    printf("2.)Ejercicios de Matricez con Punteros.\n");
    printf("3.)Ejercicios de Punteros.\n");
    printf("4.)Ejercicios de Estructura con Punteros.\n");
    printf("5.)Cerrar el Programa.\n");
    printf("Ingrese Numero:");
    scanf("%i",&num);
    switch(num){
case 1:
    system("cls");
    a();
    break;
case 2:
    b();
    break;
case 3:
    c ();
    break;
case 4:
     d();
    break;
default:
    system("cls");
    printf("HASTA LUEGO, ESPERO HABER AYUDADO CON SUS NECESIDADES.\n");
    system("pause");
    }
    }
    return 0;
}



//comienzo de desarrollo ejercicios

void ejerA_1(){
	int i;

float n_decimales[4]={32.583,11.239,45.781,22.237};

float *P_n_decimales;



for(i=0;i<4;i++)
{

	printf("%.3f\n",n_decimales[i]);

}



}

void ejerA_2(){
	int num,num1,x,y,i;
  int *a[2]={&x,&y};
printf("ingrese dos numeros:\n");
  scanf("%i%i",&num,&num1);

for(i=0;i<2;i++){


  *a [0]=num;
  *a[1]=num1;



}
printf("la multiplicacion seria:%ix%i=%i\n",x,y,x*y );



}


//void ejerA_3()
	
    





void ejerB_1(){

	int i,j,m[3][3];
    int m2[3][3];
    int *P_m2=&m2[0][0];
    int *P_m=&m[0][0];
    printf("Ingrese los valores de la matriz:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%i",&*(P_m2+i+j));
        }
    }
    
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Posicion [%i][%i] = %i\n",i,j,*(P_m2+i+j));
            printf("Posicion en memoria = %i\n",(P_m2));
        }
    }
    printf("\n\tSumatoria\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(P_m+i+j)=(*(P_m2+i+j)+(*(P_m2+i+j)));
            printf("%i\t",*(P_m+i+j));
        }
        printf("\n");
    }
    free(P_m2);
    getch();
    system("cls");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Posicion[%i][%i]= %i\t",i,j,(P_m+i+j));
        }
    }
    free(P_m);
    
    getch();


}

void ejerB_2(){
	int matriz[3][3];
    int i,j;
    int *mz_puntero;
    mz_puntero = &matriz[0][0];
    printf("Ha continuacion se imprimiran ciertos numeros automaticamente por el sistema:\n\n");
    for(i=0;i<3;i++){
        i+1;
        for(j=0;j<3;j++){
            j+1;
            matriz[i][j]= 1+ rand () %((99+1)-1);
            printf("%i\t",matriz[i][j]);
            mz_puntero++;
        }
        printf("\n");
    }
}

void ejerB_3(){
	int i,j,a,num,h;
    int primos[3][3];
    int *P_primos=&primos[0][0];

    printf("-Numeros primos:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a=0;

            num= 1+rand()%((99+1)-1);

            for(h=1;h<=num;h++)
            {
                if(num%h==0)
                {
                    a++;
                }
            }
            if(a==2)
            {
                *(P_primos+i+j)=num;
                printf("%i\t",*(P_primos+i+j));

            }else
            {
                j--;
            }

        }
        printf("\n\n");
    }
    printf("Posicion de numeros primos en memoria:\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Posicion [%i][%i]= %i\n",i ,j ,*(P_primos+i+j));
            printf("Posicion en memoria= %i\n\n",(P_primos+i+j));
        }
    }
}

void ejerC_1(){

	int i, j, num;
    int *puntero;
    puntero=&num;
    printf("Ingrese un numero para saber si es par o impar.\n");
    printf("Ingrese numero:");
    scanf("%i",&num);
    if(*puntero%2 == 0){
        printf("El numero %i es par.\n",*puntero);
        printf("Posicion de memoria: %p",puntero);
    }else{
        printf("El numero %i es impar.\n",*puntero);
        printf("Posicion de memoria: %p",puntero);
    }
    printf("\n\n");
}


void ejerC_2(){
	int num,i,a;
int *puntero=&num;
a=0;
printf("Ingrese un digito para saber si es un numero primo o no.\n");
printf("Igrese un numero: ");
scanf("%i",&num);
for(i=1;i<=*puntero;i++)
{
    if(*puntero%i==0){
         a++;
    }
}
if(a==2)
{
    printf("El numero %i es primo\n",*puntero);
    printf("Su posicion en memoria es:%p\n\n",&num);
}else{
    printf("El numero %i no es primo\n",*puntero);
    printf("Su posicion en memoria es:%p\n\n",&num);

}
}

void ejerC_3(){

	system("cls");
	int vector[10];
	int *puntero=&vector[0];
	int i, j, k;
	printf("Ingrese diez numeros para determinar si son pares e impares.\n");
	for(i=1;i<=10;i++){
		printf("Ingrese numero:");
		scanf("%i",&vector[i]);
	}
	printf("\nsi pasa.");
	for(i=1;i<=10;i++){
		if(*puntero % 2 == 0){
			printf("\nEl numero %i es par.",*puntero);
			printf("\nSu posicion de memoria es:%p\n",&vector[i]);
			}else{
				printf("\nEl numero %i es inpar.\n",*puntero);
				printf("Su posicion de memoria es:%p\n",&vector[i]);
			}
		}
}

void ejerC_4(){
	int vector[10];
int i;
int menor=0;
int *p=&menor;

 printf("Ingrese diez numeros para luego determinar cual es el numero menor.\n");
for (i=0; i<10; i++){
   printf( "%i.)Ingrese numero:\n",i+1);
   scanf("%d", &vector[i]);
}


for (i=0; i<10; i++){
    if (vector[i]< menor){
    menor=vector[i];
    }
}

printf("El numero menor es %d\n",*p);
printf("La posicion en memoria es: %p",p);

}

void ejerC_5(){

	int n, salto, i, j, k,num,aux2, aux;
	printf("\tUSTED DECIDIO UTILIZAR EL METODO DE SHELL SORT.\n\n");
	printf("Los numeros que se pondran en el arreglo seran aleatorios.\n");
	printf("Ingrese las dimensiones del vector:");
	scanf("%d",&aux2);
	n=aux2;
	int vector[n];
	int *p=&vector[n];
	srand(time(NULL));
	for (j=0;j<=n;j++){
		num=1 + rand() % ((n+1)-1);
		vector[j]=num;
	}
salto=n/2;
while (salto>0){
	for(i=salto;i<n;i++){
		j=i-salto;
		while(j>=0){
			k=j+salto;
				if (vector[j]<=vector[k]){
					j=-1;
				}else{
					aux = vector[j];
					vector[j] = vector[k];
					vector[k]=aux;
					j-=salto;
				}
		}
	}
	salto = salto/2;
}



	system("cls");
	printf("\n\tDecida una opcion de ordenamiento:\n");
	printf(" 1. Ordenamiento Ascendete.\n");
	printf(" 2. Ordenamiento Descentente.\n");
	printf("Ingrese numero:");
	scanf("%d",&num);
	switch(num){
	case 1:
	printf("Usted Decidio El metodo Ascendente.\n");
	for (i=0;i<n;i++){
	printf("%i \n",*p);
	printf("Su posicion de memoria es:%p\n",&vector[i]);
	}
	printf("\n");
	system("pause");
	system("cls");
	break;
	case 2:
		printf("Usted Decidio El metodo Descendente.\n");
		for (i=n;i>0;i--){
		printf("%i \n",*p);
		printf("Su posicion de memoria es:%p\n",&vector[i]);
	}
	system("pause");
	system("cls");
	break;
		case 3:
		system("cls");
		for(i=0;i<100;i++){
		printf("\nERROR: Ese numero no esta en la lista, escoja de nuevo.");
		}
		system("pause");
		break;
		default:
			system("cls");
			for(i=0;i<100;i++){
			printf("\nERROR: Ese numero no esta en la lista, escoja de nuevo.");
			}
			printf("\nPRESIONE UNA TECLA PARA CONTINUAR.");
			system("pause");
		break;
	}

}


void ejerC_6(){

	int n, j, num,aux2;
	printf("\tUSTED DECIDIO UTILIZAR EL METODO DE SHELL SORT.\n\n");
	printf("Los numeros que se pondran en el arreglo seran aleatorios.\n");
	printf("Ingrese las dimensiones del vector:");
	scanf("%d",&aux2);
	n=aux2;
	int vector[n];
	int *p=&vector[n];
	srand(time(NULL));
	for (j=0;j<=n;j++){
		num=1 + rand() % ((n+1)-1);
		vector[j]=num;
		num+=num;
		printf("%i\n",vector[j]);
	}
	int compa;
	printf("\nAhora ingrese un numero para verificar si esta en el arreglo.\n");
	printf("Ingrese numero:");
	scanf("%i",&compa);
	for(j=0;j<=n;j++){
		if(vector[j]==compa){
			printf("\nEl numero %i si esta en el arreglo.",compa);
	}
	}
}


int ejerC_7(){
	char nombre[20];

	printf("ingrese su nombre: ");
	scanf( "%s",&nombre);

	printf("el nombre ingresado tiene %i vocales",conteo(nombre));

	return 0;
}

int conteo(char *s){
	int cont = 0;
	while(*s){
		switch(*s){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	cont++;
		}
		s++;
	}

	return cont;
}



int  ejerC_8(){

    char p[50];

	printf("ingrese la palabra (cadena de caracteres):");
	scanf("%s",&p);

	printf("\nLa vocal a esta: %i veces",vA(p));
	printf("\nLa vocal e esta: %i veces",vE(p));
	printf("\nLa vocal i esta: %i veces",vI(p));
	printf("\nLa vocal o esta: %i veces",vO(p));
	printf("\nLa vocal u esta: %i veces",vU(p));

     return 0;
}

int vA(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'a': cont++;
		}
		s++;
	}
	return cont;
}

int vE(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'e': cont++;
		}
		s++;
	}
	return cont;
}

int vI(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'i': cont++;
		}
		s++;
	}
	return cont;
}

int vO(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'o': cont++;
		}
		s++;
	}
	return cont;
}

int vU(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'u': cont++;
		}
		s++;
	}
	return cont;
}

void ejerC_11(){
	
    int i,ciclo;
    float mayor=0;
    struct alumno{
    char nombre[30];
    int edad;
    float promedio;
    }*p_alu[3];

    for(i=0;i<3 ;i++){
        p_alu[i]=(struct alumno *) malloc(sizeof(struct alumno));
        printf("Ingrese el nombre el estudiante: %i\n",i+1);fflush(stdin);
        printf("Nombre:\n");fflush(stdin);
        scanf("%s",&p_alu[i]->nombre);fflush(stdin);
        printf("Edad:\n");fflush(stdin);
        scanf("%d",&p_alu[i]->edad);fflush(stdin);
        printf("Promedio:\n");fflush(stdin);
        scanf("%f",&p_alu[i]->promedio);fflush(stdin);
    }
    getch();
    system("cls");
    printf("Informacion Ingresada\n");
    for(i=0;i<3;i++){
        printf("\nInformacion del estudiante: %i\n",i+1);
        printf("\nNombre:  %s ",p_alu[i]->nombre);
        printf("\nEdad: %d",p_alu[i]->edad);
        printf("\nPromedio: %.2f",p_alu[i]->promedio);
    }
    for(i=0;i<3;i++){
        if (mayor<p_alu[i]->promedio) {
                mayor = p_alu[i]->promedio;
                ciclo = i;
        }
    }
    getch();
    printf("\n\n\n");
    printf("\t\tEl alumno con mejor promedio es: %s con: %.2f edad: %d\n",p_alu[ciclo]->nombre,mayor,p_alu[ciclo]->edad);
    
    
    getch();
    system("cls");
    

}

void ejerC_9(){
	    int z,c,fi,columnas,i;
		int mA[z][c], mB[z][c], mC[z][c];
		int *pa = &mA[0][0], *pb = &mB[0][0], *pc = &mC[0][0];
	
		printf("ingrese la longitud de las filas: ");
		scanf("%d",&fi);
		printf("ingrese la longitud de las columnas: ");
		scanf("%d",&columnas);
		
	
		
		
		
	
		for(i=0;i<3;i++){
			printf("\n\tMatriz %i\n",i+1);
		for(z = 0; z < fi; z++){
			for(c = 0; c < columnas; c++){
				printf("%d ", *(pa+c+z*columnas));
			}
			printf("\n");
		}
		}
		
	
	
		
		printf("\nLa Suma De Las Dos Matrices\n");
		for(z = 0; z < fi; z++){
			for(c = 0; c < columnas; c++){
				*(pc+c+z*columnas) = *(pa+c+z*columnas) + *(pb+c+z*columnas);
				printf("%d ", *(pc+c+z*columnas));
			}
			printf("\n");
		}
	}

void ejerC_10(){
	    int fi,col,i,c;
		int l, matriz[l][l];
		int *pm = &matriz[0][0];	
		printf("Ingrese longitud de filas: ");
		scanf("%d", &fi);
		printf("Ingrese longitud de columnas: ");
		scanf("%d", &col);
	
		printf("\tLlene La Matriz\n");
		for(i = 0; i< fi; i++){
			for(c = 0; c < col; c++){
				printf("Ingrese Numero En La Posicion [%d][%d]: ",i, c);
				scanf("%d",(pm + c + i *col));
			}
		}
	
		
		
	
		
		printf("\tMatriz Traspuesta\n");
		for(i = 0; i < fi; i++){
			for(c = 0; c < col; c++){
				printf("%d ", *(pm + c + i *col));
			}
			printf("\n");
		}
	}

void ejerC_12(){
	
	int horas1, horas2, horas3, minutos1, minutos2, minutos3, segundos1, segundos2, segundos3;
	int horas,minutos,segundos;
	int *p_horas=&horas;
	int *p_minutos=&minutos;
	int *p_segundos=&segundos;
	
	printf("*****BIENVENIDO*****\n");
	printf("ingrese el tiempo en que recorrio cada  etapa:\n");
	printf("1. Primer tiempo:\n");
	printf("horas:");
	scanf("%i",&horas1);
	printf("minutos:");
	scanf("%i", &minutos1);
	printf("segundos:");
	scanf("%i", &segundos1);
	
	system("PAUSE");
	system("cls");
	
	printf("2. Segundo tiempo:\n");
	printf("horas:");
	scanf("%i",&horas2);
	printf("minutos:");
	scanf("%i", &minutos2);
	printf("segundos:");
	scanf("%i", &segundos2);
	
	system("PAUSE");
	system("cls");
	
	printf("3. Tercer tiempo:\n");
	printf("horas:");
	scanf("%i",&horas3);
	printf("minutos:");
	scanf("%i", &minutos3);
	printf("segundos:");
	scanf("%i", &segundos3);
	
	system("PAUSE");
	system("cls");
	
	horas=horas1+horas2+horas3;
	minutos=minutos1+minutos2+minutos3;
	segundos=segundos1+segundos2+segundos3;
	
	
	while(segundos>=60)
	{
		p_segundos=p_segundos-60;
		p_minutos=p_minutos+1;
	}
	
	while(minutos>=60)
	{
		p_minutos=p_minutos-60;
		p_horas=p_horas+1;
	}
	
	
	printf("El tiempo total que usted recorrio en las tres etapas es:\n");
	printf("%i horas, %i minutos y %i segundos.",horas,minutos, segundos);

}
 
 
	

void ejerD_1() {
     
	 int i;
	
	 p_usuario1[i]=(struct competidor*)malloc(sizeof(struct competidor));
	 
	printf("*****BIENVENID@ A LA PLATAFORMA*****\n");
	printf("Ingrese los siguientes datos del competidor:\n");
	

	printf("1. digite su nombre: \n");
	scanf("%s",p_usuario1[i]->nombre);
	fflush(stdin);
	
	printf("2. digite su edad: \n");
	scanf("%i", &p_usuario1[i]->edad);
	fflush(stdin);
	
	printf("3. digite su sexo: \n");
	scanf("%s",p_usuario1[i]->sexo);
	fflush(stdin);
	
	printf("4. ingrese el club: \n");
	scanf("%s",p_usuario1[i]->club);
	fflush(stdin);
	
	system("cls");

if(p_usuario1[i]->edad<=15){
	printf("su categoria de competicion es: Infantil. \n");
	
}else if (p_usuario1[i]->edad<=30)
{
	printf("su categoria de competicion es: Joven. \n");
}else
{
	printf("su categoria de competicion es: Mayor. \n");
}
	
	printf("nombre: %s\n", p_usuario1[i]->nombre);
	printf("edad: %i\n", p_usuario1[i]->edad);
	printf("sexo: %s\n", p_usuario1[i]->sexo);
	printf("club: %s\n", p_usuario1[i]->club);
	
	
	
}



void ejerD_2() {
	int i;
	float promedio;
	
	p_estudiante1[i]=(struct estudiante*)malloc(sizeof(struct estudiante));
	p_estudiante2[i]=(struct estudiante*)malloc(sizeof(struct estudiante));
	p_estudiante3[i]=(struct estudiante*)malloc(sizeof(struct estudiante));
	
	printf("***BIENVENID@***\n");
	printf("-ingrese los siguientes datos para 3 alumnos:\n");

system("PAUSE");
	system("cls");
	
	printf("estudiante #1:\n");
	printf("1. ingrese el nombre del estudiante:\n");
	scanf(p_estudiante1[i]->nombre);
	fflush(stdin);
	
	printf("2. ingrese la edad del estudiante:\n");
	scanf("%i", &p_estudiante1[i]->edad);
	fflush(stdin);
	
	printf("3. digite en numeros el grado del estudiante:\n");
	scanf("%i", &p_estudiante1[i]->grado);
	fflush(stdin);
	
	printf("4. digite el promedio del estudiante:\n");
	scanf("%f", &p_estudiante1[i]->promedio);
	fflush(stdin);
	
	system("PAUSE");
	system("cls");
	
	printf("estudiante #2:\n");
	printf("1. ingrese el nombre del estudiante:\n");
	gets(p_estudiante2[i]->nombre);
	fflush(stdin);
	
	printf("2. ingrese la edad del estudiante:\n");
	scanf("%i", &p_estudiante2[i]->edad);
	fflush(stdin);
	
	printf("3. digite en numeros el grado del estudiante:\n");
	scanf("%i", &p_estudiante2[i]->grado);
	fflush(stdin);
	
	printf("4. digite el promedio del estudiante:\n");
	scanf("%f", &p_estudiante2[i]->promedio);
	fflush(stdin);
	
	system("PAUSE");
	system("cls");
	
	printf("estudiante #3:\n");
	printf("1. ingrese el nombre del estudiante:\n");
	gets(p_estudiante3[i]->nombre);
	fflush(stdin);
	
	printf("2. ingrese la edad del estudiante:\n");
	scanf("%i", &p_estudiante3[i]->edad);
	fflush(stdin);
	
	printf("3. digite en numeros el grado del estudiante:\n");
	scanf("%i", &p_estudiante3[i]->grado);
	fflush(stdin);
	
	printf("4. digite el promedio del estudiante:\n");
	scanf("%f", &p_estudiante3[i]->promedio);
	fflush(stdin);
	
	system("PAUSE");
	system("cls");
	
	
	if((p_estudiante1[i]->promedio>p_estudiante2[i]->promedio)&&(p_estudiante1[i]->promedio>p_estudiante3[i]->promedio)){
		
		printf("el mejor promedio es: %.1f\nalumno: %s\nedad: %i \ngrado: %i \n",p_estudiante1[i]->promedio, p_estudiante1[i]->nombre, p_estudiante1[i]->edad, p_estudiante1[i]->grado);

		}else if((p_estudiante2[i]->promedio>p_estudiante1[i]->promedio)&&(p_estudiante2[i]->promedio>p_estudiante3[i]->promedio))
		{
			printf("el mejor promedio es: %.1f\nalumno: %s\nedad: %i \ngrado: %i \n",p_estudiante2[i]->promedio, p_estudiante2[i]->nombre, p_estudiante2[i]->edad, p_estudiante2[i]->grado);
		}else{
			printf("el mejor promedio es: %.1f\nalumno: %s\nedad: %i \ngrado: %i \n",p_estudiante3[i]->promedio, p_estudiante3[i]->nombre, p_estudiante3[i]->edad, p_estudiante3[i]->grado);
		}
		
		
		
	
	
}

//


void ejerD_3(){

int i,j,n;
    int mayor=0,menor=50000000000000000,vuelta_1,vuelta_2;
    printf("*****BIENVENIDO*****\n");
    printf("Ingrese el numero de trabajadores:\n");
    scanf("%i",&n);
    j=n;
    printf("Digite el salario de cada uno:\n");
    for(i=0;i<n;i++)
    {
        P_trabajador[i]=(struct trabajadores*)malloc(sizeof(struct trabajadores));
        printf("Ingrese el salario del trabajador #%i: ",i+1);
        scanf("%f",&P_trabajador[i]->salario);
        if(P_trabajador[i]->salario>mayor)
        {
            mayor=P_trabajador[i]->salario;
            vuelta_1=i;
        }
         if(P_trabajador[i]->salario<menor)
        {
            menor=P_trabajador[i]->salario;
            vuelta_2=i;
        }
        
        system("cls");
        fflush(stdin);
    }
    printf("El trabajador con mas salario es:\n");
    
    while(vuelta_1< j)
    {
        fflush(stdin);
        printf("Trabajador #%i: %.2f\n",vuelta_1+1,P_trabajador[vuelta_1]->salario);
        vuelta_1++;
    }
    getch();
    printf("El trabajador con menor salario es:\n");
    
    while(vuelta_2< j)
    {
        fflush(stdin);
        printf("Trabajador #%i: %.2f\n",vuelta_2+1,P_trabajador[vuelta_2]->salario);
        vuelta_2++;
    }
	
}

//


void ejerD_4() {
	int i;
	float suma=0, promediot=0;
	
	p_estudiante[i]=(struct alumno*)malloc(sizeof(struct alumno));
	
	printf("*****BIENVENIDO*****\n");
	printf("Ingrese los siguientes datos para un alumno:\n");
	
	printf("Nombre:");
	gets(p_estudiante[i]->nombre);
	fflush(stdin);
	
	printf("Edad:");
	scanf("%i", &p_estudiante[i]->edad);
	fflush(stdin);
	
	printf("Sexo:");
	gets(p_estudiante[i]->sexo);
	fflush(stdin);
	
	system("PAUSE");
	system("cls");
	
	printf("Ahora debera ingresar sus tres notas y como resultado le daremos su promedio.\n");
	
	printf("1. nota 1:");
	scanf("%f", &p_estudiante[i]->alumno.nota1);
	fflush(stdin);
	
	printf("2. nota 2:");
	scanf("%f", &p_estudiante[i]->alumno.nota2);
    fflush(stdin);
	
	printf("3. nota 3:");
	scanf("%f", &p_estudiante[i]->alumno.nota3);
    fflush(stdin);
	
	suma=p_estudiante[i]->alumno.nota1+p_estudiante[i]->alumno.nota2+p_estudiante[i]->alumno.nota3;
	promediot=suma/3;
	
	printf("Su promedio es: %.1f\n",promediot);
	printf("Nombre: %s\n",p_estudiante[i]->nombre);
	printf("Edad: %i\n", p_estudiante[i]->edad);
	printf("Sexo: %s\n", p_estudiante[i]->sexo);
	
}



