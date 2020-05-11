// PROBLEMA 1
#include <iostream>
using namespace std;
int suma(int arreglo[],int tam)
{
	if(tam==1)
		return arreglo[0];
	else     
		return arreglo[tam-1]+suma(arreglo,--tam);
}
void suma_i(int arreglo[],int tam)
{
	cout<<endl;
	int cont=0;
	for(int i=0;i<tam;i++)
		cont+=arreglo[i];
	cout<<"suma iterativa:"<<cont;
}
int main()
{
	int arreglo[]={1,2,3,4,5};
	int tam=5;
	cout<<"suma recursiva:"<<suma(arreglo,5);
	suma_i(arreglo,tam);
}
