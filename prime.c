#include <stdio.h>

int main(){
	int i = 0,  max = 0, status = 0;	
	while (status == 0){			
		printf("TYPE THE MAXIMUM NUMBER TO CHECK\n");
		scanf("%d", &max);
		printf("\nPRIME NUMBERS UNTIL %d\n\n", max);
		while (i <= max){
			if (i == 2){
				printf(" %d -> PRIME\n", i);
			}
			if (i % 2 != 0){
				int divisor = 1, divisor_qnt = 0;
				while (divisor <= i){
					if (i % divisor == 0){
						divisor_qnt++;
					}
					divisor++;				
				}
				if (divisor_qnt == 2){
					printf(" %d -> PRIME\n", i);
				}
			}
			i++;
		}
		printf("TYPE 0 TO CONTINUE OR 1 TO EXIT\n");
		scanf("%d", &status);		
	}
}
