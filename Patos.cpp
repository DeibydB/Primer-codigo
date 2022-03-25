#include<iostream>
using namespace std;
void entero();
void caracter();
void doble();
void flotante();
void cadena();

main()
{
int opcion;
cin>>opcion;

switch(opcion)
	{
		case 1: entero();
				break;
		case 2: caracter();
				break;	
		case 3: doble();
				break;
		case 4: flotante();
				break;
		case 5: cadena();
				break;
		default: cout<<"Opcion incorrecta.";
				break;
	}	

}

//ENTERO
void entero()
{
	int patos[5];
	int i;
	
	patos[1]=1;
	patos[0]=3;
	patos[3]=8;
	patos[2]=27;
	patos [4]=12;
	
	for(int i=0;i<=5;i++)
	{
		cout<<patos[i]<<endl;
	}
}

//CARACTER
void caracter()
{
	char abecedario[5];
	int i;
	
	abecedario[1]='A';
	abecedario[3]='C';
	abecedario[4]='D';
	abecedario[2]='B';
	abecedario[5]='E';
	
	for(int i=1;i<=5;i++)
	{
		cout<<abecedario[i]<<endl;
	}
}

//DOBLE
void doble()
{
	double notas[6];
	int i;
	
	notas[1]=1.4;
	notas[3]=5.0;
	notas[4]=3.5;
	notas[2]=2.1;
	notas[5]=2.2;
	
	for(int i=1;i<=5;i++)
	{
		cout<<notas[i]<<endl;
	}	
}

//FLOTANTE
void flotante()
{
	float decimales[20];
	int i;
	
	decimales[4]=4 ;
	decimales[2]=7.89 ;
	decimales[3]=9.43 ;
	decimales[1]=11.32 ;
	decimales[5]=15.23 ;
	
	for(int i=1;i<=5;i++)
	{
		cout<<decimales[i]<<endl;
	}
}

//CADENA
void cadena()
{
	string nombres[10];
	int i=1;
	
	nombres[1]="Juan Carlos";
	nombres[2]="Xiuraldy";
	nombres[3]="Edwin";
	nombres[4]="Deibyd";
	nombres[5]="Jeisson";
	
	
	while (i<=5)
	{
		cout<<nombres[i]<<endl;
		i++;
	}
	
}
