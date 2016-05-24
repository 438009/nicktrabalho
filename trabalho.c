include<stdio.h>
#include<stdlib.h>

int const tam=30;

int main()

{
    float av1[tam];
    char aluno[tam][20];
    float aux;
    char auxaluno[20];
    int i,j;
    for(i=0;i<tam;i++)
{
    printf("\n entre com o nome do Aluno%d:\n",i+1);
    scanf("%s",aluno[i]);
    setbuf(stdin,NULL);
    
    printf("\n%s entre com sua av1:\n",aluno[i]);
    scanf("%f",& av1[i]);
}


//ordena em ordem decrecente

for(i=0;i<tam;i++)


{
    for(j=i+1;j<tam;j++)
    
   { 
if(av1[j]>av1[i])
{

aux=av1[j];

strcpy(auxaluno,aluno[j]);

av1[j]=av1[i];

strcpy(aluno[j],aluno[i]);


av1[i]=aux;

strcpy(aluno[i],auxaluno);

}

}

}
for(i=0;i<tam;i++)
{
    printf("\n%s \t %.2f\t\t",aluno[i],av1[i]);
    printf("\n--------------------------------------");
    
}

return 0;

}
