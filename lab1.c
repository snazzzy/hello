#include <stdio.h>
//this is a dummy
int main(){
	int ascii = 0;
	int number =0;
	char c = getchar();
	while(c != EOF){
	number++;
	if(c <= '0' && c >= '9'){
	ascii++;
	} 
	c = getchar();
	


	}
	printf("ascii:%d/nnumber:%d", ascii, number);	
	return 0;
}
