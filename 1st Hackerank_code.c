#include<stdio.h>
int main(){
	
	int i, j, n, k, n1;
	 printf("Enter value for n\n");
    scanf("%d", &n);
    n1 = n;
	
for(i=1; i<=n; i++){
	
	for(j=1; j<n1; j++){
		printf(" ");
		}
	for(k=1; k<=i; k++){
		printf("#");
	}
	printf("\n");
	n1--;
}
	
	
	
	
	
	
	return 0;
}
