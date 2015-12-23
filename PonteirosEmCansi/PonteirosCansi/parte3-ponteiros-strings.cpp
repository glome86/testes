#include "funcoes.h"


int mostrarPonteirosStrings3(){
	char strA[80] = "A string to be used for demonstration purposes";
	char *ptr1;
	char *ptr2;
	
	ptr1 = strA;	
    printf("The value of the char pointed to by ptr1 is \"%s\"\n", ptr1);
	ptr2 = ptr1;
	printf("The value of the char pointed to by ptr2 is \"%s\"\n", ptr2);
	/////////////////////////////////
	ptr1 = NULL;
    printf("The value of the char pointed to by ptr1 is \"%s\"\n", ptr1);
	//ptr2 = NULL;
	printf("The value of the char pointed to by ptr2 is \"%s\"\n", ptr2);
	/////////////////////////////////
	printf("The value of array is \"%s\"\n", strA);

	return 0;
}

char *my_strcpy(char *destination, char *source)
{
	char *p = destination;
	while (*source != '\0')
	{
	  *p++ = *source++;
	}
	*p = '\0';
	return destination;
}

int mostrarPonteirosStrings2(){
	char strA[80] = "A string to be used for demonstration purposes";
	char strB[80] = "1234567890123456789012345678901234567890";
	char *ptr;
	ptr = my_strcpy(strB, strA);
    puts(strB);
	putchar('\n');       /* move down one line on the screen */
	puts(ptr);

	/** ou seja, o que o método my_strcpy() retorna é o endereço do destino  */
	printf("strB has the value \"%s\" and is stored at \"%p\"\n", strB, (void *)&strB);
	printf("ptr has the value \"%p\" and is stored at \"%p\"\n", ptr, (void *)&ptr);

	/** CUIDADO !!!! 
		Da forma que o ponteiro está *ptr ... dá ERRO !!!! 
	printf("The value of the char pointed to by ptr is \"%s\"\n", *ptr);
		Pois existe um padrão 
		que em todas as funções do C, são passadas por valor, já que o valor do ponteiro é 
		um endereço ... então devemos passar o endereço como é feito logo abaixo.
	*/
    printf("The value of the char pointed to by ptr is \"%s\"\n", ptr);
	return 0;
}
int mostrarPonteirosStrings(){
	
	/**
	 Duas formas de escrever strings 
	 a) char my_string[40] = ('T', 'e', 'd', '\0'};
	 b) char my_string[40] = "Ted"; // implicitamente é add um '\0'

	*/


	/** Exemplo */
	char strA[80] = "Glauber da Silva Bernardo";
    char strB[80];

	char *pA;     /* a pointer to type character */
    char *pB;     /* another pointer to type character */
	/**
	Considere aqui que o protótipo da função puts() é:
      int puts(const char *s);
    Por enquato, ignore o const. O parâmetro passado a puts() é um ponteiro, ou seja, 
	é o valor de um ponteiro (já que todos os parâmetros em C são passados por valor), e 
	o valor de um ponteiro é o endereço para o qual ele está apontando, ou, simplesmente, 
	um endereço. Assim, quando escrevemos puts(strA); como vimos antes, estamos passando 
	o endereço de strA[0].
	*/
    puts(strA);   /* show string A */
    pA = strA;    /* point pA at string A */
    puts(pA);     /* show what pA is pointing to */
    pB = strB;    /* point pB at string B */
    putchar('\n');       /* move down one line on the screen */
    
	while(*pA != '\0')   /* line A (see text) */
    {
       *pB++ = *pA++;   /* line B (see text) */
    }
    *pB = '\0';          /* line C (see text) */
    puts(strB);          /* show strB on screen */
    
	return 0;
}
