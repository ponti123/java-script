#include <stdio.h>
#include <stdlib.h>


struct a{
                char nome[20];
				float prezzo;
};
struct a prodotto[999];

float media(int a,int perc){

int somma,med;

med=(prodotto[a].prezzo/100)*perc;
somma=med+prodotto[a].prezzo;
return somma;

}
int main(int argc, char *argv[]) {
	
	int n=0,perc=0,i=0,a=0;
	

	printf("Inserire i prodotti: ");
    scanf("%i",&n);

	float med[n];

	do{
    printf("Inserire la percentuale: ");
    scanf("%i",&perc);
	}while(perc==0);

	for(i=0;i<n;i++)
	{
			printf("Inserire il nome del prodotto: ");
			scanf("%s",&prodotto[i].nome);
			printf("Inserire il prezzo: ");
			scanf("%f",&prodotto[i].prezzo);
            printf("----------------------------------\n");
			med[i]=media(a,perc);

            a++;
	}
	
	for(i=0;i<n;i++)
{
             printf("\n%s= %.2f\n",prodotto[i].nome,med[i]);
			 printf("-----------------------------------");
}
	
	
	
	
	
	
	
	
	
		
	
	return 0;
}
