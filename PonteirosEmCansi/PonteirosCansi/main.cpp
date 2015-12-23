#include "funcoes.h"
int Contador = 0;
int Contador2 = 10;
int testesRecursividade(char*pszParametro){
	printf("ANTES = %s\n", pszParametro);
	if (Contador<5){
		Contador++;
		testesRecursividade(pszParametro);
	}
	printf("DEPOIS\n");
	return Contador2;
}
int main(void){
	//mostrarPonteiros();
	//mostrarPonteiros2();

	int G_x = 1;
	int G_y = 2;
	printf("&G_x = %p\n",&G_x);
	printf("&G_y = %p\n",&G_y);
	mostrarPonteiros3(G_x, G_y);

	//mostrarPonteirosArrays();
	//mostrarPonteirosStrings();
	//mostrarPonteirosStrings2();
	//mostrarPonteirosStrings3();
	/*char teste_array[10]; 
	memset(teste_array,0,sizeof(teste_array));
	sprintf(teste_array,"%s","ESSE EH UM TESTE");
	int RETFINAL = testesRecursividade(teste_array);
	printf("RETFINAL = %d\n", RETFINAL);*/
	return 0;	
}