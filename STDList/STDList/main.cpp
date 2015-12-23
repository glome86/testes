//http://br.ccm.net/faq/10156-introducao-ao-stl-em-c-standard-template-library#std-list-t

#include <list>
#include <iostream>
using namespace std;

int main(){
	int value = 0;
	list<int> myList(5,0);
	list<int>::iterator it = myList.begin();
	
	for(it = myList.begin(); it != myList.end(); it++){
		*it = value++;		
	}

	return 0;
}