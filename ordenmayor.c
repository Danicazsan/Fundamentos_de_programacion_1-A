#include <stdio.h>


int main() {
	int n1,n2,n3;

	 printf("ingrese un numero:");
	 scanf("%d",&n1);
	 printf("ingrese otro numero:");
	 scanf("%d",&n2);
	 printf("ingrese otro numero:");
	 scanf("%d",&n3);

	 if(n1>n2 && n1>n3){

		if(n2>n3){

			printf("los numeros de mayor a menor son: %d , %d ,%d\n",n1,n2,n3);


		}else{

			printf("los numeros de mayor a menor son: %d , %d ,%d\n",n1,n3,n2);

		}


	 }else if(n2>n1 && n2>n3){

		 if(n1>n3){


			 printf("los numeros de mayor a menor son: %d , %d ,%d\n",n2,n1,n3);

		 }else{

			 printf("los numeros de mayor a menor son: %d , %d ,%d\n",n2,n3,n1);

		 }


	 }else if(n3>n1 && n3>n2){

		 if(n2>n1){

			 printf("los numeros de mayor a menor son: %d , %d ,%d\n",n3,n2,n1);


		 }else{

			 printf("los numeros de mayor a menor son: %d , %d ,%d\n",n3,n1,n2);

		 }


	 }

	return 0;
}

