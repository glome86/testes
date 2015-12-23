#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;

void fnConfigMsgPromocional(char** pszMensagem){
	char bufferAux[100]; memset(bufferAux, 0, sizeof(bufferAux));
	strncpy(bufferAux,*pszMensagem,strlen(*pszMensagem));
	free(pszMensagem);
	*pszMensagem = (char*)calloc(strlen(bufferAux)+strlen("tamanho do novo buffer ")+1,sizeof(char));
	strcpy(*pszMensagem,"tamanho do novo buffer ");
	strcat(*pszMensagem,bufferAux);
}

int main(){
	char buffer[] = {"esta eh a mensagem original"};
	char* pszMensagemOriginal = (char*)calloc(strlen(buffer),sizeof(char));
	strcpy(pszMensagemOriginal, buffer);
	fnConfigMsgPromocional(&pszMensagemOriginal);
	cout << "RESULTADO: " << pszMensagemOriginal;
	free(pszMensagemOriginal);
	return 1;
}