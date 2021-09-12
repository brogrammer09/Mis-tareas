#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;
int main(){
	char nombre[35],Direccion[16],si[2];
	int DPi,numTelefono,Opcion,Edad;
	int clave;
	string telefono;
	char Ele;
	
	do{
		cout<<"\t\t----------------elige una opcion--------------\n";
		cout<<"\t\t------------1.Ingreso de sus clientes----------------\n";
		cout<<"\t\t------------2.Venta de teléfonos celulares------------\n";
		cout<<"\t\t----------3.Gestión de recargas electrónicas-----------\n";
		cout<<"\t\t------------------4.Salir------------------\n";
		cin>>Opcion;
		
		switch(Opcion){
			case 1:
			system("cls");
			cout<<"Ingrese su nombre por favor"<<endl;fflush(stdin);
			cin.getline(nombre,35);
			cout<<"Ingrese Direccion"<<endl;
			cin.getline(Direccion,16);
			 do{
		     cout<<"ingresa edad "; 
			 cin>>Edad;
			 if (Edad>120 or Edad<0){
				cout<<"Edad incorrecta"<<endl;fflush(stdin);
			 }
		    }while(Edad>=120 or Edad<=1);
		    do{
			cout<<"numero de telefono por favor"<<endl;fflush(stdin);
			cin>>telefono;
			numTelefono = telefono.length();
			if(numTelefono>8){
				cout<<"debe ser un numero de telefono Guatemalteco"<<endl;fflush(stdin);
			}else if(numTelefono<8){
				cout<<"tiene mas de 8 digitos debe ser un numero de Guatemala";
			} else{
				cout<<"ha ingresado un numero guatemalteco"<<endl;fflush(stdin);
			}
			}while(numTelefono!=8);
			cout<<"ya se ha registrado anteriormente?"<<endl;fflush(stdin);
			cin.getline(si,2);
			system("pause");
			break;
			
		case 2:
		do{
				system("cls");
			cout<<"\t\t--------Has elegido compra de celulares--------"<<endl;fflush(stdin);
			cout<<"\t\t---------  1.Samsung Note 10 Q 9,299.°° -----------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 2.Samsung Galaxy S20 Q 7,656.°°--------------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 3.LG K42 Q 1,299.°° ----------------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 4.LG K62 Q 1,799.°°   -------------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 5.Xiaomi Mi 10T Q 4,799.°°-----------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 6.Samsung Galaxy S21 Q10,399.°° -----------------"
			cout<<"\t\t---------- 7.Huawei P40 Q8,999.°° -------------------"
			cout<<"\t\t----------------8. -------------------"
			
			if(clave == 1){
				cout<<"\t\tHas elegido comprar el telefono Samsung Note 10"<<endl;fflush(stdin);
				cout<<"\t\tEl precio del Celular es Q 9,299.°°"<<endl;fflush(stdin);
				cout<<"Quieres comprar otro Celular?"<<endl;fflush(stdin);
				cin>>Ele;
			} else if(clave == 2){
				cout<<"Has seleccionado el telefono Samsung S20"<<endl;fflush(stdin);
				cout<<"El Precio del Celular es Q 7,656.°° "<<endl;fflush(stdin);
				cout<<"Deseas Comprar otro Celular?"<<endl;fflush(stdin);
			}else if(clave == 3){
				cout<<"has seleccionado LG K42"<<endl;fflush(stdin);
				cout<<"su precio es Q 1,299.°°"<<endl;fflush(stdin);
				cout<<"Quieres Comprar otro celular?"<<endl;fflush(stdin);
				cin>>Ele;
			}
		}while(Eleccion != 'Si');
			
			
			
			
			system("pause");
		break;
		}
		
		
	}while(Opcion!=4);
	
	
	
	
	
	getch();
	return 0;
}
