/*Este Programa se desarrolla para el contenido de una cadena de caracteres utilizando operadores lógicos
Autores=Leidy Ximena Garzón y Sebastian Babativa Veloza
Versón=1.0*/

 #include <stdio.h>
#define MAX_TAM 10
void main(void)
{
     char arr1[MAX_TAM]={"Sebastian"};
	 char arr2[MAX_TAM]; 
	 
	 
	 arr2[0]=arr1[0]<<2;//cambia de S a L
	 arr2[1]=arr1[1]; //en esta posición tenemos la misma letra que necesitamos por eso no utilizamos ningun operador lógicos
	 arr2[2]=(arr1[2] | 9)&125;//cambia de b a i
	 arr2[3]=(arr1[3]&96) |4;//cambia de a a d
	 arr2[4]=(arr1[4]>>1)|64;//cambia de s a y
	 arr2[5]=arr1[5] & 170;//cambia de t a espacio
	 arr2[6]=arr1[6]<<5;//cambia de i a espacio
	 arr2[7]=arr1[7]<<4;//cambia de a a espacio
	 arr2[8]=arr1[8]&49;//cambia de n a espacio
	 arr2[9]='\0';//fin de cadena
	 
	printf("\n Este programa convierte el nombre \n %s en %s utilizando operadores lógicas( >> , << , & , | ) ",arr1,arr2);
	
	printf("\n\n el resultado es %s \n\n",arr2);
}