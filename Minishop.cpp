//Práctica 1. ALmacén de pedidos
//Archundia Bazán Aarón Antonio, Guerrero Vélez Eliseo Milton, Hernández Vázquez César Arturo
#include <iostream> //Biblioteca estándar
#include <clocale> //Biblioteca para usar acentos
#include <cctype> //Biblioteca para clasificar y transformar caracteres
#include <iomanip> //Biblioteca para dar espacios
using namespace std; 
int main()
{
    setlocale(LC_ALL,""); //Hacer uso de acentos
    cout<<"Almacén de pedidos Archundia-Guerrero-Hernandez"<<endl; //Se imprime en la consola el texto 

    float producto1{2.98}; 
    float producto2{4.50};
    float producto3{9.98}; 
    float producto4{4.49};
    float producto5{6.87}; 
    float subsuma1{0}; 
    float subsuma2{0}; 
    float subsuma3{0}; 
    float subsuma4{0}; 
    float subsuma5{0}; 
    float total{0};
	//Declaración de variables flotantes asignando los valores de los productos, para guardar las subsumas y guardar el valor total de la compra
    int numeroproducto{0}; 
    int cantidadvendida{0}; 
    int a{0}; 
    int b{0}; 
    int c{0}; 
    int d{0}; 
    int e{0}; 
    //Declaración de variables enteras para preuntarle al usuario el producto y la cantidad, así como también pra construir el ticket final
    char respuesta{}; //Se delara la variable char para preguntarle al usuario si quiere seguir comprando productos

	///////////////////////////////////////////////////////////	
	cout<<"Listado de productos: "<<endl; 
	cout<<"-------------------------------------------"<<endl;
	cout<<"Producto 1: $"<<producto1<<endl;
	cout<<" "<<endl;
	cout<<"Producto 2: $"<<producto2<<endl;
	cout<<" "<<endl;
	cout<<"Producto 3: $"<<producto3<<endl;
	cout<<" "<<endl;
	cout<<"Producto 4: $"<<producto4<<endl;
	cout<<" "<<endl;
	cout<<"Producto 5: $"<<producto5<<endl;
	cout<<" "<<endl;
	/**
	Imprime el listado de cada uno de los productos disponibles en el almacén con su respectico precio
	*/
    ///////////////////////////////////////////////////////////

do //Sentencia do-while para que ejecute las siguientes lineas hasta que el usuario indique que no desea seguir comprando productos
{
	cout<<"**Introduzca que producto quiere comprar: "<<endl; 
    cin>>numeroproducto; 
    cout<<"**Introduzca cuantas piezas quiere comprar:"<<endl; 
    cin>>cantidadvendida; 
    /**
	Se le pregunta al usuario el producto que desea y la cantidad
	*/
	switch (numeroproducto) //Sentencia wwitch para determinar los precios de venta de cada producto 
	{
		case 1:
			subsuma1=producto1*cantidadvendida; 
			a=1; 
			break;
		
		case 2:
			subsuma2=producto2*cantidadvendida; 
			b=1; 
			break;
			
		case 3:
			subsuma3=producto3*cantidadvendida; 
			c=1; 
			break;
			
		case 4:
			subsuma4=producto4*cantidadvendida; 
			d=1; 
			break;
			
		case 5:
			subsuma5=producto5*cantidadvendida; 
			e=1; 
			break;
			//Se realiza la multiplicación del producto elegido por la cantidad y lo guarda en un subtotal
	}
	
	cout<<"¿Desea comprar otro producto? (s/n)"<<endl; 
	cin>>respuesta; 
	//Se le pregunta al usuario si desea seguir comprando un producto
}
	while (tolower(respuesta)=='s'); 
	cout<<"Fin de la compra"<<endl;
	//Si la respuesta es "s" se sigue ejecutando el ciclo con el programa anterior, si no, se rompe el ciclo y se finaliza la compra
	cout<<"_________________________________________"<<endl; 
	cout<<" "<<endl; 
	cout<<"Ticket de compra:"<<endl; 
	cout<<" "<<endl; 
	
	cout<<"Producto:                                          Subtotal:"<<endl; 
	cout<<" "<<endl; 
	/**
	Se imprime el encabezado del ticket
	*/
	if(a==1) 
	{
		cout<<"Producto 1: ........................................ $"<<subsuma1<<endl; 
	} else { 
		cout<<"Producto 1: ........................................ $0"<<endl; 
	}
	
	if(b==1) 
	{
		cout<<"Producto 2: ........................................ $"<<subsuma2<<endl; 
	} else { 
		cout<<"Producto 2: ........................................ $0"<<endl; 
	
	if(c==1) 
	{
		cout<<"Producto 3: ........................................ $"<<subsuma3<<endl; 
	} else { 
		cout<<"Producto 3: ........................................ $0"<<endl; 
	}
	
	if(d==1) 
	{
		cout<<"Producto 4: ........................................ $"<<subsuma4<<endl; 
	} else { 
		cout<<"Producto 4: ........................................ $0"<<endl; 
	}
	
	if(e==1) 
	{
		cout<<"Producto 5: ........................................ $"<<subsuma5<<endl; 
	} else { 
		cout<<"Producto 5: ........................................ $0"<<endl; 
	}
	/**
	Se imprimen los subtotales de los productos comprados con el ticket final
	*/
	cout<<" "<<endl; //Se imprime un renglón vacío
	cout<<"_________________________________________"<<endl; //Se imprime una linea de guiones bajos para la estética del ticket
	cout<<" "<<endl; //Se imprime un renglón vacío
	
	total=subsuma1+subsuma2+subsuma3+subsuma4+subsuma5; 
	cout<<"El total es: $"<<total<<endl; 
	//Se imprime al final del ticket cual es el valor total de la compra
}

