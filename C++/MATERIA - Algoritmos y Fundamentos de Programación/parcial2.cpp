#include <iostream>
#include <string> 
#include <iomanip> 

using namespace std;

int main() {
    // --- CLIENTE INFO ---
    int numero_de_cliente;
    string nombre;
    string num_direccion, calle_direccion, comuna_direccion, ciudad;
    
    // --- CLIENTE INFO MONETARIA ---
    double saldo = 0;
    double descuento = 10; 
    double limite_credito = 0; // Inicializado en 0

    // --- VARIABLES ARTICULOS ---
    // Articulo 1
    string art1 = "Teclado_Mecanico";
    double p1 = 150000;  
    int s1 = 10;

    // Articulo 2
    string art2 = "Mouse";
    double p2 = 85000;
    int s2 = 15;

    // Articulo 3
    string art3 = "Monitor";
    double p3 = 600000;
    int s3 = 5;

    // Articulo 4
    string art4 = "Audifonos";
    double p4 = 80000;
    int s4 = 8;

    // Articulo 5
    string art5 = "Luces";
    double p5 = 40000;
    int s5 = 12;
    
    // --- MENU ---
    int caso;
    cout << "=========================================" << endl;
    cout << "               BIENVENIDO                " << endl;
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
            
            cout << "Inserte su limite de credito: ";
            cin >> limite_credito;

            if(limite_credito > 3000000) {
                cout << "Limite de 3.000.000 excedido! El valor fue ajustado." << endl;
                limite_credito = 3000000;
            }
            
            cout << "\n=========================================" << endl;
            cout << "       REGISTRO COMPLETADO EXITOSAMENTE" << endl;
            cout << "=========================================" << endl;
            cout << fixed << setprecision(0); 
            cout << "Cliente: " << nombre << " (ID: " << numero_de_cliente << ")" << endl;
            cout << "Direccion: " << calle_direccion << " #" << num_direccion << ", " << comuna_direccion << ", " << ciudad << endl;
            cout << "Descuento: " << descuento << "%" << endl;
            cout << "Limite de Credito: $" << limite_credito << endl;
            cout << "Saldo Inicial: $" << saldo << endl;
            cout << "=========================================" << endl;
            break; 

        case 2:
            cout << "\n=========================================" << endl;
            cout << "          CATALOGO DE PRODUCTOS          " << endl;
            cout << "=========================================" << endl;
            cout << fixed << setprecision(0); 
            
            cout << "1- " << art1 << endl;
            cout << "       Precio: $" << p1 << " | Stock: " << s1 << " unid." << endl;
            cout << "-----------------------------------------" << endl;
            
            cout << "2- " << art2 << endl;
            cout << "       Precio: $" << p2 << " | Stock: " << s2 << " unid." << endl;
            cout << "-----------------------------------------" << endl;
            
            cout << "3- " << art3 << endl;
            cout << "       Precio: $" << p3 << " | Stock: " << s3 << " unid." << endl;
            cout << "-----------------------------------------" << endl;
            
            cout << "4- " << art4 << endl;
            cout << "       Precio: $" << p4 << " | Stock: " << s4 << " unid." << endl;
            cout << "-----------------------------------------" << endl;
            
            cout << "5- " << art5 << endl;
            cout << "       Precio: $" << p5 << " | Stock: " << s5 << " unid." << endl;
            
            cout << "=========================================" << endl;
            cout << "Fabrica proveedora: TiendaTecnologica.com" << endl;
            cout << "=========================================" << endl;
            break;
            
        case 3:
            cout << "\n--- SECCION DE COMPRAS ---" << endl;
            int opcion_producto_a_comprar;
            int cantidad_a_comprar_producto;
            double subtotal_temporal; 

            cout << "Inserte el num del producto (1-5): ";
            cin >> opcion_producto_a_comprar;
            cout << "Inserte la cantidad a comprar: ";
            cin >> cantidad_a_comprar_producto;

            if (opcion_producto_a_comprar == 1) {
                if (cantidad_a_comprar_producto <= s1) {
                    subtotal_temporal = p1 * cantidad_a_comprar_producto;
                    s1 = s1 - cantidad_a_comprar_producto; 
                    cout << "Articulo añadido: " << art1 << endl;
                } else {
                    cout << "Error: No hay suficiente stock de " << art1 << endl;
                }
            } 
            else if (opcion_producto_a_comprar == 2) {
                if (cantidad_a_comprar_producto <= s2) {
                    subtotal_temporal = p2 * cantidad_a_comprar_producto;
                    s2 = s2 - cantidad_a_comprar_producto;
                    cout << "Articulo añadido: " << art2 << endl;
                } else {
                    cout << "Error: No hay suficiente stock de " << art2 << endl;
                }
            }
            else if (opcion_producto_a_comprar == 3) {
                if (cantidad_a_comprar_producto <= s3) {
                    subtotal_temporal = p3 * cantidad_a_comprar_producto;
                    s3 = s3 - cantidad_a_comprar_producto;
                    cout << "Articulo añadido: " << art3 << endl;
                } else {
                    cout << "Error: No hay suficiente stock de " << art3 << endl;
                }
            }
            else if (opcion_producto_a_comprar == 4) {
                if (cantidad_a_comprar_producto <= s4) {
                    subtotal_temporal = p4 * cantidad_a_comprar_producto;
                    s4 = s4 - cantidad_a_comprar_producto;
                    cout << "Articulo añadido: " << art4 << endl;
                } else {
                    cout << "Error: No hay suficiente stock de " << art4 << endl;
                }
            }
            else if (opcion_producto_a_comprar == 5) {
                if (cantidad_a_comprar_producto <= s5) {
                    subtotal_temporal = p5 * cantidad_a_comprar_producto;
                    s5 = s5 - cantidad_a_comprar_producto;
                    cout << "Articulo añadido: " << art5 << endl;
                } else {
                    cout << "Error: No hay suficiente stock de " << art5 << endl;
                }
            }
            else {
                cout << "Opcion de producto no valida." << endl;
            }
            break;

        case 4:
            cout << "\n--- INFORMACION DE LA FABRICA ---" << endl;
            cout << "ID Fabrica: 9001" << endl;
            cout << "Telefono: 601-555-0199" << endl;
            cout << "Total articulos que provee: " << (s1+s2+s3+s4+s5) << endl;
            cout << "Fabrica alternativa: Suministros_Tech ID: 8002" << endl;
            break;

        case 0:
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
