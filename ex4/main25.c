#include <stdio.h>

int mulit(int i,int j){
	if(i<1){
		return 0;
	}
	if(j<1){
	    mulit(i-1,9);
		printf("\n");
	}else{
	    mulit(i,j-1);
		printf("%d*%d=%d\t",i,j,i*j);
	}
	
}

int main(){
	mulit(9,9);
	return 0;
} 
