#include <stdio.h>

int main() {
		int num;
		float a;
		float b;
		
		printf("dame un numero entero  ");
	scanf("%d",&a);
		printf("dame otro numero entero  ");
	scanf("%f",&b);
		printf("dame un numero con decimales    ");
	scanf("%f",&num);
	
	if(a<b && a<num){
		printf("\nPrimer numero es menor");
	}else{if(b<a && b<num){
		printf("\n Segundo numero es menor");
	}else{if(num<a && num<b){
		printf("\n Tercer numero es menor");
	}else{if((a!=b) && (b!=num) && (a!=num)){	
		printf("\nLos tres numeros son iguales");		
	}
	}}}
	
	      {if(a>b && a>num){
		printf("\nPrimer numero es mayor");
	}else{if(b>a && b>num){
		printf("\nSegundo numero es el mayor");
	}else{if(num>a && num>b){
		printf("\nTercer numero es mayor");
	}}} 
	
	return 0;
}
}
