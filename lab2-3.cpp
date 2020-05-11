//PROBLEMA 3
#include <iostream>
using namespace std;
int ascendente(int arreglo[],int tam)
{
	int may=0,j=0;
	for(int i=0;i<tam;i++){
		if(arreglo[i]>=may){
			may=arreglo[i];
			j=i;
		}			
	}
	int aux=arreglo[tam-1];
	arreglo[tam-1]=arreglo[j];
	arreglo[j]=aux;
	if(tam>1)
		return ascendente(arreglo,--tam);
}
int main()
{				// 0 1 2 3 4 5
	int arreglo[]={4,2,6,3,1,5};
	ascendente(arreglo,6);
	for(int i=0;i<6;i++)
		cout<<arreglo[i]<<endl;
}
