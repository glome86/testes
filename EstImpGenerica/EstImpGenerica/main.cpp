#include "estruturas.h"
int fnPonteiroFuncao(char* szConteudo){
		
	return 1;
}

ST_DHTML stTAGsMarcaImp[] = {
	{"a", "\x1b\x2b", "\x3b\x4b", 0}, //comando1
	{"b", "\x5b\x6b", "\x7b\x8b", 0}, //comando2
	{"c", "\x9b\x1b",		  "", 0}, //comando3
	{"d", "\x1b\x2b", "\x3b\x4b", 0 , fnPonteiroFuncao}, //comando4
	NULL
};

int fnSubstituiTagParaCmd(char* szTextoSrc, char* szTag, ST_DHTML* szTagCmd){
	
	int i = 0;
	while(true){ //vou percorrer todas as tags
		if (strcmp(szTag, szTagCmd[i].szTag) == 0){
			switch(szTagCmd[i].iTipo){
				case 0: 
					//faz algo
					return 1;
				case 1: 
					//faz algo
					return 2;
				case 3: 
					//faz algo
					return 3;
			}		
		}	
		i++;
		if (strcmp(szTagCmd[i].szTag,"") == 0)
			break;
	}

	return 1;
}


int main(){

	fnSubstituiTagParaCmd("texto pra sofrer mudança", "e" , stTAGsMarcaImp);

	return 1;
}