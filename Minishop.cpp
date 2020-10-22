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

    float producto1{2.98}; //Se declara la variable flotante para asignar el precio del producto 1
    float producto2{4.50}; //Se declara la variable flotante para asignar el precio del producto 2
    float producto3{9.98}; //Se declara la variable flotante para asignar el precio del producto 3
    float producto4{4.49}; //Se declara la variable flotante para asignar el precio del producto 4
    float producto5{6.87}; //Se declara la variable flotante para asignar el precio del producto 5
    float subsuma1{0}; //Se declara la variable flotante para guardar el valor de la multiplicación del precio y la cantidad del producto 1
    float subsuma2{0}; //Se declara la variable flotante para guardar el valor de la multiplicación del precio y la cantidad del producto 2
    float subsuma3{0}; //Se declara la variable flotante para guardar el valor de la multiplicación del precio y la cantidad del producto 3
    float subsuma4{0}; //Se declara la variable flotante para guardar el valor de la multiplicación del precio y la cantidad del producto 4
    float subsuma5{0}; //Se declara la variable flotante para guardar el valor de la multiplicación del precio y la cantidad del producto 5
    float total{0}; //Se declara la variable flotante para sumar los valores de las subsumas y mostrar el resultado

    int numeroproducto{0}; //Se declara una variable entera para insertar el producto del almacén deseado
    int cantidadvendida{0}; //Se declara una variable entera para indicar la cantidad de cada producto que se desea adquirir
    int a{0}; //Se declara la variable entera a para construir el ticket final
    int b{0}; //Se declara la variable entera b para construir el ticket final
    int c{0}; //Se declara la variable entera c para construir el ticket final
    int d{0}; //Se declara la variable entera d para construir el ticket final
    int e{0}; //Se declara la variable entera e para construir el ticket final
    
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
	cout<<"**Introduzca que producto quiere comprar: "<<endl; //Imprime el texto para después ingresar el producto que desea comprar
    cin>>numeroproducto; //Se ingresa el numero del prodcuto que se quiere comprar
    cout<<"**Introduzca cuantas piezas quiere comprar:"<<endl; //Imprime el texto para después ingresar la cantidad del producto que desea comprar
    cin>>cantidadvendida; //Se ingresa el número que indica la cantidad del prodcuto a comprar
    
	switch (numeroproducto) //Sentencia wwitch para determinar los precios de venta de cada producto 
	{
		case 1: //Si se elije el producto 1...
			subsuma1=producto1*cantidadvendida; //Se realiza la multiplicación del valor del producto 1 con la cantidad que se quiere comprar
			a=1; //Si se ejecuta este caso la variable a toma el valor de 1 para generar el ticket
			break;
		
		case 2:
			subsuma2=producto2*cantidadvendida; //Se realiza la multiplicación del valor del producto 2 con la cantidad que se quiere comprar
			b=1; //Si se ejecuta este caso la variable b toma el valor de 1 para generar el ticket
			break;
			
		case 3:
			subsuma3=producto3*cantidadvendida; //Se realiza la multiplicación del valor del producto 3 con la cantidad que se quiere comprar
			c=1; //Si se ejecuta este caso la variable c toma el valor de 1 para generar el ticket
			break;
			
		case 4:
			subsuma4=producto4*cantidadvendida; //Se realiza la multiplicación del valor del producto 4 con la cantidad que se quiere comprar
			d=1; //Si se ejecuta este caso la variable d toma el valor de 1 para generar el ticket
			break;
			
		case 5:
			subsuma5=producto5*cantidadvendida; //Se realiza la multiplicación del valor del producto 5 con la cantidad que se quiere comprar
			e=1; //Si se ejecuta este caso la variable e toma el valor de 1 para generar el ticket
			break;
	}
	
	cout<<"¿Desea comprar otro producto? (s/n)"<<endl; //Se le pregunta al usuario si desea seguir comprando un producto
	cin>>respuesta; //Se ingresa y lee en la variable char "respuesta" 
	
}
	while (tolower(respuesta)=='s'); //Si la respuesta es "s" se sigue ejecutando el ciclo con el programa anterior, si no, se rompe el ciclo y se finaliza la compra
	cout<<"Fin de la compra"<<endl; //Se imprime que finalizó la compra
	
	cout<<"_________________________________________"<<endl; //Se imprime una linea de guiones bajos para la estética del ticket
	cout<<" "<<endl; //Se imprime un renglón vacío
	cout<<"Ticket de compra:"<<endl; //Se imprime en la consola el texto del ticket
	cout<<" "<<endl; //Se imprime un renglón vacío
	
	cout<<"Producto:                                          Subtotal:"<<endl; //Se imprime la primer fila del ticket
	cout<<" "<<endl; //Se imprime un renglón vacío
	
	if(a==1) //Si la variable a tiene el valor de 1 entonces...
	{
		cout<<"Producto 1: ........................................ $"<<subsuma1<<endl; //Imprime el subtotal para el producto 1
	} else { //Si no se compra nada del producto 1 entonces la variable "a" no vale 1 y entonces...
		cout<<"Producto 1: ........................................ $0"<<endl; //Se imprime en el ticket que no hubo compra del producto 1	
	}
	
	if(b==1) //Si la variable b tiene el valor de 1 entonces...
	{
		cout<<"Producto 2: ........................................ $"<<subsuma2<<endl; //Imprime el subtotal para el producto 2
	} else { //Si no se compra nada del producto 1 entonces la variable "b" no vale 1 y entonces...
		cout<<"Producto 2: ........................................ $0"<<endl; //Se imprime en el ticket que no hubo compra del producto 2
	}
	
	if(c==1) //Si la variable c tiene el valor de 1 entonces...
	{
		cout<<"Producto 3: ........................................ $"<<subsuma3<<endl; //Imprime el subtotal para el producto 3
	} else { //Si no se compra nada del producto 1 entonces la variable "c" no vale 1 y entonces...
		cout<<"Producto 3: ........................................ $0"<<endl; //Se imprime en el ticket que no hubo compra del producto 3
	}
	
	if(d==1) //Si la variable d tiene el valor de 1 entonces...
	{
		cout<<"Producto 4: ........................................ $"<<subsuma4<<endl; //Imprime el subtotal para el producto 4
	} else { //Si no se compra nada del producto 1 entonces la variable "d" no vale 1 y entonces...
		cout<<"Producto 4: ........................................ $0"<<endl; //Se imprime en el ticket que no hubo compra del producto 4
	}
	
	if(e==1) //Si la variable e tiene el valor de 1 entonces...
	{
		cout<<"Producto 5: ........................................ $"<<subsuma5<<endl; //Imprime el subtotal para el producto 5
	} else { //Si no se compra nada del producto 1 entonces la variable "e" no vale 1 y entonces...
		cout<<"Producto 5: ........................................ $0"<<endl; //Se imprime en el ticket que no hubo compra del producto 5
	}
	
	cout<<" "<<endl; //Se imprime un renglón vacío
	cout<<"_________________________________________"<<endl; //Se imprime una linea de guiones bajos para la estética del ticket
	cout<<" "<<endl; //Se imprime un renglón vacío
	
	total=subsuma1+subsuma2+subsuma3+subsuma4+subsuma5; //En la variable total se suman los subtotales de cada producto
	cout<<"El total es: $"<<total<<endl; //Se imprime al final del ticket cual es el valor total de la compra
}

