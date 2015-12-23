#include "funcoes.h"

/**
 - OBJETIVO: falar o básico de ponteiros
*/
int mostrarPonteiros(){
	/** caracterizando tamanhos dos tipos */
	printf("------------------------------------------\n");
	printf("size of a short is %d\n", sizeof(short));
    printf("size of a int is %d\n", sizeof(int));
    printf("size of a long is %d\n", sizeof(long));

	printf("------------------------------------------\n");

	/** mostrando os 'lvalues(endereço)' e 'rvalues(valores)' */
	int j, k;
    int *ptr;

	k = 2;
	j = 7;	
	printf("conteudo da variavel k eh %d\n", k);	
	printf("conteudo da variavel j eh %d\n", j);

	j = k;
	printf("o novo conteudo da variavel j eh %d\n", j);

	printf("------------------------------------------\n");

	/* o operador '&' recupera o endereço da variavel k */
    ptr = &k;
	printf("\n");	
	printf("k has the value %d and is stored at %p\n", k, (void *)&k);
	printf("j has the value %d and is stored at %p\n", j, (void *)&j);
  
	/** Isso é bem interessante ter claro, um ponteiro tem tres situações:
	    ptr  -> aqui é o endereço que ele aponta. 
	    *ptr -> aqui é o conteudo do que ele aponta. 
	    &ptr -> aqui é o endereço do proprio ponteiro. 
	*/
    printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);

	printf("------------------------------------------\n");

	return 1;
}

/**
 - OBJETIVO: falar de ponteiros pra ponteiros 
*/
int mostrarPonteiros2(){
	
	/** mostrando os 'lvalues(endereço)' e 'rvalues(valores)' */
	int *ptr = NULL;
	int **ptrPtr = NULL; // ponteiro que aponta pra outro ponteiro, ou seja, só recebe 'lvalue';

	printf("---------------------------------------------\n");	
	printf("-> mostra o endereco do proprio ponteiro \n");	
	printf("&ptr = %p\n", (void *)&ptr);
    printf("&ptrPtr %p\n",(void *)&ptrPtr);
	printf("\n");
	printf("-> mostra o endereco que ele tah aopntando \n");	
	printf("ptr = %p\n", (void *)ptr);
    printf("ptrPtr = %p\n",(void *)ptrPtr);
	printf("\n");
	printf("-> mostra o conteudo do endereco que o ponteiro aponta\n");	
	int k = 2;
    ptr = &k; //atribuo o endereço de k para ptr
	printf("novo valor de ptr = %p\n", (void *)ptr);
	printf("conteudo de *ptr = %d\n", (void *)*ptr);
	printf("\n");
	printf("-> trabalhando com ponteiro de ponteiros\n");	
	ptrPtr = &ptr; // atribuo o endereço de 'ptr' pra 'ptrPtr'
    printf("ptrPtr = %p\n",(void *)ptrPtr); // (exibe o endereço apontado)   mostra o endereço do ponteiro que ele aponta
	printf("*ptrPtr = %p\n",(void *)*ptrPtr); // (exibe o conteudo apontado) mostra o endereço do conteudo do ponteiro que ele aponta 
	printf("&ptrPtr = %p\n",(void *)&ptrPtr); // (exibe o proprio endereço)  mostra o proprio endereço de ptrPtr	
	printf("**ptrPtr = %d\n",(void *)**ptrPtr); // (exibe o conteudo do ponteiro apontado) mostra o conteudo do ponteiro que ptrPtr aponta

	printf("---------------------------------------------\n");	
	/*
	printf("*ptr = %p\n", (void *)&ptr);
    printf("**ptrPtr %p\n",(void *)&ptrPtr);*/
	
    /*printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);*/

	return 1;
}

/**
 - OBJETIVO: mostrar a passagem de parametros por valor e por referencia 
*/
void mostrarPonteiros3(int x, int y){
	int x1 = 3;
	int y1 = 4;
	printf("---------------------------------------------\n");	
	printf("&x = %p\n",&x);
	printf("&y = %p\n",&y);

	printf("---------------------------------------------\n");	
	printf("&x1 = %p\n",&x1);
	printf("&y1 = %p\n",&y1);
	
}
void mostrarPonteiros3_1(int &x, int &y){


}

