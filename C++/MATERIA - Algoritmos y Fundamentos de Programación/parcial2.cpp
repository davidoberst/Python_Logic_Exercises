#include <iostream>
#include <string> 
#include <iomanip> 
using namespace std;

int main() {

    int numero_de_cliente;
    string nombre;
    string num_direccion, calle_direccion, comuna_direccion, ciudad;
    
    double saldo = 0;
    double descuento = 10; 
    double limite_credito;

   
    int caso;
    cout << "=========================================" << endl;
    cout << "             BIENVENIDO    " << endl;
    cout << "=========================================" << endl;

    cout << "1. Registrar un cliente" << endl;
    cout << "2. Mostrar el catalogo de articulos" << endl;
    cout << "3. Realizar una compra" << endl;
    cout << "4. Consultar fabrica" << endl; 
    cout << "0. Salir" << endl;
    
    cout << "- Escriba una opcion: ";
    cin >> caso; 

    switch(caso) {
        case 1:
          cout << "\n--- REGISTRO DE CLIENTE ---" << endl;
            
            cout << "Inserte su numero de cliente: ";
            cin >> numero_de_cliente;
            
            cout << "Inserte su nombre (sin espacios): ";
            cin >> nombre;
            
            // Direccion
            cout << "--- Inserte su direccion ---" << endl;
            
            cout << "Calle: ";
            cin >> calle_direccion;
            
            cout << "Numero (casa/apto): ";
            cin >> num_direccion;
            
            cout << "Comuna: ";
            cin >> comuna_direccion;
            
            cout << "Ciudad: ";
            cin >> ciudad;

            cout << "Inserte porcentaje de descuento (0-100): ";
            cin >> descuento;
            
            //datos finacnieros
            cout<<"Inserte su limite de credito : ";
            cin>>limite_credito;
            if(limite_credito > 3000000){
                cout<<"Limite de 3.000.000 excedido! el valor que ingreso fue ajustado a 3.000.000";
                limite_credito = 3000000;
            }
            
            // Resumen Final del Registro
            cout << "\n=========================================" << endl;
            cout << "       REGISTRO COMPLETADO EXITOSAMENTE" << endl;
            cout << "=========================================" << endl;
            cout << fixed << setprecision(0); // no usar n cientifica
            cout << "Cliente: " << nombre << " (ID: " << numero_de_cliente << ")" << endl;
            cout << "Direccion: " << calle_direccion << " #" << num_direccion << ", " << comuna_direccion << ", " << ciudad << endl;
            cout << "Descuento: " << descuento << "%" << endl;
            cout << "Limite de Credito: $" << limite_credito << endl;
            cout << "Saldo Inicial: $" << saldo << endl;
            cout << "=========================================" << endl;

            break; 

        case 2:
           
            break;

        case 3:
           
            break;

        case 0:
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
