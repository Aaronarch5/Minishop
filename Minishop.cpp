// Minishop.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Programación Orientada a Objetos
/*

@
*/
#include <iostream>
#include <clocale>
#include <cctype>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    cout<<"Mini punto de venta Guerrero-Hernandez"<<endl;

    float producto1{2.98};
    float producto2{4.50};
    float producto3{9.98};
    float producto4{4.49};
    float producto5{6.87};
    float total{0};
    float subsuma1{0};
    float subsuma2{0};
    float subsuma3{0};
    float subsuma4{0};
    float subsuma5{0};

    int numeroproducto{0};
    int cantidadvendida{0};
    
    char respuesta{};

	///////////////////////////////////////////////////////////	
	cout<<"Listado de productos: "<<endl;
	cout<<"Producto 1: "<<producto1<<endl;
	cout<<"Producto 2: "<<producto2<<endl;
	cout<<"Producto 3: "<<producto3<<endl;
	cout<<"Producto 4: "<<producto4<<endl;
	cout<<"Producto 5: "<<producto5<<endl;
    ///////////////////////////////////////////////////////////
do
{
	cout<<"**Introduzca que producto quiere comprar: "<<endl;
    cin>>numeroproducto;
    cout<<"**Introduzca cuantas piezas quiere comprar:"<<endl;
    cin>>cantidadvendida;
    
	switch (numeroproducto)
	{
		case 1:
			subsuma1=producto1*cantidadvendida;
			break;
		
		case 2:
			subsuma2=producto2*cantidadvendida;
			break;
			
		case 3:
			subsuma3=producto3*cantidadvendida;
			break;
			
		case 4:
			subsuma4=producto4*cantidadvendida;
			break;
			
		case 5:
			subsuma5=producto5*cantidadvendida;
			break;
	}
	
	cout<<"¿Desea introducir otra producto? (s/n)"<<endl;
	cin>>respuesta;
	
}
	while (tolower(respuesta)=='s');
	cout<<"Fin de la compra"<<endl;
	
	
	cout<<"_________________________________________"<<endl;
	cout<<" "<<endl;
	
	total=subsuma1+subsuma2+subsuma3+subsuma4+subsuma5;
	cout<<"El total es: "<<total<<endl;
}

