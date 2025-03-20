#include <stdio.h>

int main() {
	
	int sum = 1;
	for(int i = 1; i <= 5; i++){
	    for(int j = 1; j <= 5 - i; j++){
	        printf(" ");
	    }
	    
	    for(int j = 1; j <= i; j++){
	        printf("%d ", sum);
	        sum++;
	    }
	    printf("\n");
	}

}

