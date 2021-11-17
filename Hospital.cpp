#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	system("Color 0F");
	float price,totalPrice;
	int age,option;
    printf("\n\nEdad del paciente: ");
    cin>>age;
    printf("Tipo de enfermedades\n\n1.-Com%cn		$275.80\n2.-Nivel b%csico		$340.20\n3.-Nivel medio		$567.00\n4.-Nivel Alto		$955.10\n\n",163,160);
    printf("Ingresa el numero de la opcion del menú")
    cin>>option;
    
    switch(option)
	{
    	case 1: price = 275.80; break;
    	case 2: price = 340.20; break;
    	case 3: price = 567.00; break;
    	case 4: price = 955.10; break;
    	default: system(Hospital.cpp); printf("Elije una opci%cn del menu",162); break;
	}
	
	if (age>=14 && age<=22)
	{
		totalPrice = (price * .15) + price;
		cout<<"El costo total: "<<fixed<<setprecision(2)<<totalPrice;
	}else 
	{
		totalPrice = price;
		cout<<"\nEl costo total es: "<<fixed<<setprecision(2)<<totalPrice;
	}    
}


