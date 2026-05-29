//CUENTA INICIA CON 500.000
// TRES INTENTOS PARA INGRESAR CLAVE, SI LOS FALLA EL PROGRMA FINALIZA, SIN USAR CICLOS
//un menú con tres operaciones:
//consultar saldo,
//retirar dinero 
//consignar dinero. 
//El programa realiza una única operación por ejecución y luego finaliza;
//el menú no se repite,
//pues no está permitido el uso de ciclos. Cada operación debe validarse antes de modificar el saldo de la cuenta

#include <iostream>
using namespace std;

int main() {
    
     int clave = 43210;
     int clave_validacion;
     int intentos_clave = 3;
     
     
    //================ VALIDACION DE LOGIN, SI FALLA 3 VECES SALIR DEL PROGRAMA ======== 
     
    do{
     cout << "Bieenvenido inserte su clave :";
     cin>>clave_validacion;
    
    
     if(clave_validacion != clave){
      cout << "Clave erronea."<<endl;
      intentos_clave -= 1;  
     }
     else if(clave_validacion == clave){
        break;
     }

    }while(intentos_clave > 0);
      
     if(intentos_clave < 1){
     cout<<"Muchos intentos fallidos, se ha bloqueado la tarjeta";
     return 0;
     }
     
     //================================================================================
                                 //DASHBOARD USER
     //================================================================================
     double saldo = 500000;
     int opcion_usuario; 
     double dinero_a_retirar;
     double dinero_a_consignar;
     
     //Menu 
     cout << "Bienvenido a su cuenta, elija lo que quiera hacer"<<endl;
     cout << "1. Consultar su saldo"<<endl;
     cout << "2. Retirar dinero"<<endl;
     cout << "3. Consignar dinero"<<endl;
     
     cout <<"Ingrese su opcion (1/3)";
     cin >> opcion_usuario;
     
     //CONSULTAR DINERO
     cout<<("");
     if(opcion_usuario == 1){
         cout << "su saldo es : "<<saldo;
     }
     
     //RETIRAR DINERO
     
     if(opcion_usuario == 2){
         cout << "¿Cuanto dinero quiere retirar? : ";
         cin >> dinero_a_retirar;
         
           if(dinero_a_retirar < 0){
            cout << "El numero no puede ser menor a cero.";
             return 0;
          }
          
          if(dinero_a_retirar > 1000000){
            cout << "Transacciones tienen limite de 1000000.";
            return 0;
          }
          
          if(dinero_a_retirar > saldo){
            cout << "No puede ser mayor que el saldo disponible.";  
            return 0;
          }
          
          
         saldo -= dinero_a_retirar;
         cout<<"[!] Dinero retirado!";
         cout<< "Su saldo actual es : "<<saldo;
         
        
     }
     
     //CONSIGNAR DINERO
     if(opcion_usuario == 3){
         cout << "¿Cuanto dinero quiere consignar? : ";
         cin >> dinero_a_consignar;
           return 0;
         
          if(dinero_a_retirar < 0){
            cout << "El numero no puede ser menor a cero.";
            return 0;
          }
          
          if(dinero_a_retirar > 1000000){
            cout << "Transacciones tienen limite de 1000000.";
             return 0;
          }
          
          if(dinero_a_retirar > saldo){
            cout << "No puede ser mayor que el saldo disponible.";   
               return 0;
          }
          
          
         saldo += dinero_a_consignar;
         cout<<"[!] Dinero consignado!";
         cout<< "Su saldo actual es : "<<saldo; 
         
         
         
     }
     
    return 0;
}



