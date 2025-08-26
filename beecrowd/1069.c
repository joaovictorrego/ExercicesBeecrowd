#include <stdio.h>
#include <string.h>


int main(){
	int N;
	int i, j, k;
	char diamantes[1001];
	int quantidade;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		scanf("%s", diamantes);
		quantidade = 0;
		for(j = 0; j < strlen(diamantes); j++){
			if(diamantes[j] == '<'){
				//printf("%d\n", quantidade);
				for(k = j + 1; k < strlen(diamantes); k++){
					if(diamantes[k] == '>'){
						//printf("%d\n", quantidade);
						diamantes[k] = '0';
						quantidade = quantidade + 1;
						break;
					}
				}
			}
		}
		printf("%d\n", quantidade);
	}
	
	return 0;
}