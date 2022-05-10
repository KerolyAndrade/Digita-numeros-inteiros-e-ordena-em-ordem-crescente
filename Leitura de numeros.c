#include <stdio.h>
#include <stdlib.h>


    void ordena();
    int vet[1000];

int main(){
   int i;

   //for criado para a leitura numerica colocada pelo ususario
   for (i=0; i<1000; i++){
       printf("Digite um numero inteiro: ");
       scanf("%d", &vet[i]);
   }


   ordena();
   printf ("Ordem crescente: ");
   for (i=0; i<1000; i++){
        printf("%d ", vet[i]);
   }

   printf("\n");
   system("pause");

}

//função para ordenar os numeros inteiro coloco pelo usuario
void ordena(){

   int i, j, aux;

   for( i=0; i<1000; i++ ){

       for( j=i+1; j<1000; j++ ){

           if( vet[i] > vet[j] ){

               aux = vet[i];

               vet[i] = vet[j];

               vet[j] = aux;

           }

       }

   }

}
