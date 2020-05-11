//PROBLEMA 2
#include <iostream>
using namespace std;
void invertir(int arreglo[],int tam,int pos)
{ 	
	int a=arreglo[pos];
	arreglo[pos]=arreglo[tam-pos-1];
	arreglo[tam-pos-1]=a;
	if(pos+1<tam/2) 
		return invertir(arreglo,tam,++pos);	
}
void invertir_i(int arreglo[],int tam)
{
	int pos=0;
	while(pos+1<tam/2){
		int a=arreglo[pos];
		arreglo[pos]=arreglo[tam-pos-1];
		arreglo[tam-pos-1]=a;
		pos++;		
	}
	cout<<endl;
	for(int i=0;i<tam;i++)
		cout<<arreglo[i]<<" ";
}
int main()
{
	int arreglo[]={1,2,3,4,5,6,7,8};
	invertir(arreglo,8,0);	
	for(int i=0;i<8;i++)
		cout<<arreglo[i]<<" ";	
	invertir_i(arreglo,8);
}
