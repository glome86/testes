#include "funcoes.h"
int mostrarPonteirosArrays(){
	int my_array[] = {1,23,17,4,-5,100};
    int *ptr;

	int i;
	/** Aqui tem duas maneiras de 'resgatar' o endereço do array */
	/* maneira 1 */
    //ptr = &my_array[0];     /* point our pointer to the first element of the array */
	/* maneira 2 */
    ptr = my_array;

    printf("\n\n");
    for (i = 0; i < 7; i++)
      {
        printf("my_array[%d] = %d   ",i,my_array[i]);   /*<-- A */
        /** 
			exemplo1: maneira mais padrão
		*/  
		//printf("ptr + %d = %d\n",i, *(ptr + i));        /*<-- B */
		/** 
			exemplo2: desloca equivale a um sizeof(type), mostra conteudo e depois desloca 
		*/
		//printf("ptr + %d = %d\n", i, *ptr++);
		/** 
			exemplo3: primeiro desloca e depois mostra conteudo  
		*/
		printf("ptr + %d = %d\n", i, *(++ptr));
      }

	return 0;
}