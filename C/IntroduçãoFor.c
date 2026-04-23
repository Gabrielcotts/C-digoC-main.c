int main(){

int num[5];
int i = 0;

	printf("Digite 10 numeros: ");
	
	for(i = 0; i <= 10; i++){
	scanf("%i", &num[i]);	
	}	
	printf("Numeros digitados: \n ");
		for(i = 0; i <= 10; i++){
	printf ("%i \n", 
	num[i]);	
	}	
	return 0;
}
