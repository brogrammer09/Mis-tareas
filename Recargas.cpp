#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;
int main(){
	char nombre[35],Direccion[16],si[2],Ele;
	int DPi,numTelefono,Opcion,Edad;
	int clave,clave2,clave3,Op;
	string telefono;
	
	
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
			cout<<"\t\t---------  1.Samsung Note 10 Q 9,299.00 -----------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 2.Samsung Galaxy S20 Q 7,656.00 --------------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 3.LG K42 Q 1,299.00 ----------------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 4.LG K62 Q 1,799.00  -------------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 5.Xiaomi Mi 10T Q 4,799.00-----------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 6.Samsung Galaxy S21 Q10,399.00 -----------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 7.Huawei P40 Q8,999.00 -------------------"<<endl;fflush(stdin);
			cout<<"\t\t---------- 8.Huawei P30Lite Q1,998.00  -------------------"<<endl;fflush(stdin);
			
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
			}else if(clave == 4){
				cout<<"has seleccionado LG K62 "<<endl;fflush(stdin);
				cout<<"El precio es Q 1,799.00"<<endl;fflush(stdin);
				cout<<"Deseas Comprar otro celular?"<<endl;fflush(stdin);
				cin>>Ele;
			}else if(clave == 5){
				cout<<"has seleccionado Xiaomi Mi 10T"<<endl;fflush(stdin);
				cout<<"su precio es Q 4,799.00"<<endl;fflush(stdin);
				cout<<"Deseas Comprar otro Celular?"<<endl;fflush(stdin);
				cin>>Ele;
			}else if(clave == 6){
				cout<<"has seleccionado Samsung Galaxy S21"<<endl;fflush(stdin);
				cout<<"Su precio es de Q10,399.00"<<endl;fflush(stdin);
				cout<<"Deseas comprar otro celular?"<<endl;fflush(stdin);
				cin>>Ele;
			}else if(clave == 7){
				cout<<"Has seleccionado Huawei P40"<<endl;fflush(stdin);
				cout<<"Su precio es Q8,999.00"<<endl;fflush(stdin);
				cout<<"Deseas comprar otro celular?"<<endl;fflush(stdin);
				cin>>Ele;
			}else if(clave == 8){
				cout<<"Has seleccionado Huawei P30 Lite"<<endl;fflush(stdin);
				cout<<"Su precio es de Q1,998.00"<<endl;fflush(stdin);
				cout<<"Deseas Comprar otro celular?"<<endl;fflush(stdin);
				cin>>Ele;
			}else {
				cout<<"no contamos con esa opcion aun"<<endl;fflush(stdin);
				cout<<"Desea probar de nuevo?"<<endl;fflush(stdin);
				cin>>Ele;
			}
			system("pause");
				
		}while(Ele != 'si');
		system("pause");
		break;
		
		case 3:{
		cout<<"\t\t----------- Gestion de recargas Electronicas ----------"<<endl;fflush(stdin);	
		cout<<"\t\t----------- cual desea elegir ----------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 1. Q5.00 -------------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 2. Q10.00 ----------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 3. Q15.00 ----------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 4. Q25.00 ----------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 5. Q30.00 ----------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 6. Q50.00 ----------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 7. Q70.00 ----------------"<<endl;fflush(stdin);
		cout<<"\t\t----------- 8. Q100.00 ----------------"<<endl;fflush(stdin);
		if (clave2 == 1){
			cout<<"\t\t----------- has elegido de Q5.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
				
			} else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);	
			}
		}else if(clave2 == 2){
			cout<<"\t\t----------- has elegido de Q10.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
				
			} else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);
			}   	
		} else if(clave2 == 3){
			cout<<"\t\t----------- has elegido de Q15.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
				
			} else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);
		    }
		}else if (clave2 == 4){
			cout<<"\t\t----------- has elegido de Q25.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
				
			} else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);
		    } 
		}else if (clave2 == 5){
			cout<<"\t\t----------- has elegido de Q30.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
				
			} else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);
		    } 
		}else if(clave2 == 6){
			cout<<"\t\t----------- has elegido de Q50.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
				
			}else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			}else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			}else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);
		    } 
		}else if(clave2 == 7){
			cout<<"\t\t----------- has elegido de Q70.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
				
			} else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);
		    } 
		}else if(clave2 == 8){
		    cout<<"\t\t----------- has elegido de Q100.00 ----------------"<<endl;fflush(stdin);
	        cout<<"\t\t----------- Que quieres? ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 1. super pack de internet ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 2. Todo incluido ----------------"<<endl;fflush(stdin);
			cout<<"\t\t----------- 3. Saldo Normal ----------------"<<endl;fflush(stdin);
			if(clave3 == 1 ){
				cout<<"\t\t----------- Has elegido el super pack de internet ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if (clave3 == 2){
				cout<<"\t\t----------- Has elegido el paquete todo incluido ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			} else if(clave3 == 3){
				cout<<"\t\t----------- Has elegido Saldo Normal ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Gracias Por tu compra ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- Que forma de pago eliges? ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 1.Pago con tarjeta de credito/Debito ----------------"<<endl;fflush(stdin);
				cout<<"\t\t----------- 2.Efectivo ----------------"<<endl;fflush(stdin);
			}else {
				cout<<"\t\t-------------------- No existe esa opcion ----------------------"<<endl;fflush(stdin);
		    }
			}else{
		    	cout<<"No existe esa opcion"<<endl;fflush(stdin);
		    }
			break;
		    }
		    default:
		    	cout<<"esa opcion no es valida"<<endl;fflush(stdin);
		}		
	}while(Opcion!=4);
	
	 getch();
     return 0;
}
