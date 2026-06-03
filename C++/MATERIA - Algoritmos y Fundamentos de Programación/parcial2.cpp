#include <iostream>
#include <string> 
#include <iomanip> 

using namespace std;

int main() {
    //info del cliente
    int numero_de_cliente;
    string nombre;
    string num_direccion, calle_direccion, comuna_direccion, ciudad;
    
    //info de dinero o creditos del cliente
    double saldo = 0;
    double descuento = 0.90; //descuento de 10% 
    double limite_credito = 3000000; 

    //variables de articulos 
    
    //articulo 1
    string art1 = "Teclado para pc"; //art = articulo
    double p1 = 150000;  //p = precio
    int s1 = 800; //s = stock

    // articulo 2
    string art2 = "Mouse";
    double p2 = 85000;
    int s2 = 15;

    // articulo 3
    string art3 = "Monitor";
    double p3 = 600000;
    int s3 = 40;

    // articulo 4
    string art4 = "Audifonos";
    double p4 = 80000;
    int s4 = 40;

    // articulo 5
    string art5 = "Luces";
    double p5 = 40000;
    int s5 = 12;
    
    //menu
    
    int caso; //para manejar los switch
    
    
    cout << "=========================================" << endl;
    cout << "               BIENVENIDO                " << endl;
    cout << "=========================================" << endl;

    cout << "1. Registrar un cliente" << endl;
    cout << "2. Mostrar el catalogo de articulos" << endl;
    cout << "3. Realizar una compra" << endl;
    cout << "4. Consultar fabrica" << endl; 
    cout << "0. Salir" << endl;
    
    cout << "- Escriba una opcion: ";
    cin >> caso; // parametro del switch

    switch(caso) {
        case 1:
            cout << "\n--- REGISTRO DE CLIENTE ---" << endl;
            
            cout << "Inserte su numero de cliente: ";
            cin >> numero_de_cliente;
            
            cout << "Inserte su nombre: ";
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
            cout << fixed << setprecision(0); //notacion cientifica
            cout << "Cliente: " << nombre << " (NUM: " << numero_de_cliente << ")" << endl;
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
            cout << "Fabrica proveedora: Tiendatec.com" << endl;
            cout << "=========================================" << endl;
            break;
            
        case 3:
            cout << "\n--- SECCION DE COMPRAS ---" << endl;
            
            int opcion_producto_a_comprar;
            int cantidad_a_comprar_producto;
            double subtotal_temporal; 
            
                //art = articulo
               //p = precio
              //s = stock
             //En una compra, la cantidad solicitada de un artículo no
            //puede superar sus existencias, y el total de la compra (con el descuento del cliente
           //aplicado) no puede superar el crédito disponible (limite menos saldo). Si la compra es
          //aceptada, se descuenta el stock y se actualiza la deuda del cliente.
            cout << "Inserte el num del producto (1-5): ";
            cin >> opcion_producto_a_comprar;
            cout << "Inserte la cantidad a comprar: ";
            cin >> cantidad_a_comprar_producto;

            if (opcion_producto_a_comprar == 1) {
                if (cantidad_a_comprar_producto <= s1) {
                    //validacion para que no supere el credito : 
                    if(p1 * cantidad_a_comprar_producto * descuento > limite_credito){
                      cout<<"[x] Compra declinada, esta transaccion supera el limite de su credito";
                    }
                    else{
                     cout<<endl;
                     cout << fixed << setprecision(0);
                     cout << "        [!] Compra aceptada "<<endl;
                     cout << "==============FACTURA=================="<<endl;
                     cout << "Articulos añadido : " << art1 << endl;
                     cout << "Cantidad : "<<cantidad_a_comprar_producto << endl;
                     cout << "Precio sin descuento : "<< p1 * cantidad_a_comprar_producto << endl;
                     double desc = (p1 * cantidad_a_comprar_producto * descuento);
                     cout << "Precio con descuento : "<< p1 * cantidad_a_comprar_producto * descuento << endl; 
                     
                     //Descuento del Stock y de la tarjeta
                     cout << "Su cupo de credito cambio :"<<limite_credito-desc<<endl;
                     cout << "El Stock de " <<art1<<" se reducio a "<< s1 - cantidad_a_comprar_producto ;
                    }
                    
                } else {
                    cout << "No hay suficiente stock de " << art1 << endl;
                }
            } 
            else if (opcion_producto_a_comprar == 2) {
                if (cantidad_a_comprar_producto <= s2) {
                    //validacion para que no supere el credito : 
                    if(p1 * cantidad_a_comprar_producto * descuento > limite_credito){
                      cout<<"[x] Compra declinada, esta transaccion supera el limite de su credito";
                    }
                    else{
                     cout<<endl;
                     cout << fixed << setprecision(0);
                     cout << "        [!] Compra aceptada "<<endl;
                     cout << "==============FACTURA=================="<<endl;
                     cout << "Articulos añadido : " << art2 << endl;
                     cout << "Cantidad : "<<cantidad_a_comprar_producto << endl;
                     cout << "Precio sin descuento : "<< p2 * cantidad_a_comprar_producto << endl;
                     double desc = (p2 * cantidad_a_comprar_producto * descuento);
                     cout << "Precio con descuento : "<< p2 * cantidad_a_comprar_producto * descuento << endl; 
                     
                     //Descuento del Stock y de la tarjeta
                     cout << "Su cupo de credito cambio :"<<limite_credito-desc<<endl;
                     cout << "El Stock de " <<art2<<" se reducio a "<< s2 - cantidad_a_comprar_producto ;
                    }
                } else {
                    cout << "No hay suficiente stock de " << art2 << endl;
                }
            }
            else if (opcion_producto_a_comprar == 3) {
                  if (cantidad_a_comprar_producto <= s3) {
                    //validacion para que no supere el credito : 
                    if(p3 * cantidad_a_comprar_producto * descuento > limite_credito){
                      cout<<"[x] Compra declinada, esta transaccion supera el limite de su credito";
                    }
                    else{
                     cout<<endl;
                     cout << fixed << setprecision(0);
                     cout << "        [!] Compra aceptada "<<endl;
                     cout << "==============FACTURA=================="<<endl;
                     cout << "Articulos añadido : " << art3 << endl;
                     cout << "Cantidad : "<<cantidad_a_comprar_producto << endl;
                     cout << "Precio sin descuento : "<< p3 * cantidad_a_comprar_producto << endl;
                     double desc = (p3 * cantidad_a_comprar_producto * descuento);
                     cout << "Precio con descuento : "<< p3 * cantidad_a_comprar_producto * descuento << endl; 
                     
                     //Descuento del Stock y de la tarjeta
                     cout << "Su cupo de credito cambio :"<<limite_credito-desc<<endl;
                     cout << "El Stock de " <<art3<<" se reducio a "<< s3 - cantidad_a_comprar_producto ;
                    }
                } else {
                    cout << "No hay suficiente stock de " << art3 << endl;
                }
            }
            else if (opcion_producto_a_comprar == 4) {
                  if (cantidad_a_comprar_producto <= s4) {
                    //validacion para que no supere el credito : 
                    if(p4 * cantidad_a_comprar_producto * descuento > limite_credito){
                      cout<<"[x] Compra declinada, esta transaccion supera el limite de su credito";
                    }
                    else{
                     cout<<endl;
                     cout << fixed << setprecision(0);
                     cout << "        [!] Compra aceptada "<<endl;
                     cout << "==============FACTURA=================="<<endl;
                     cout << "Articulos añadido : " << art4 << endl;
                     cout << "Cantidad : "<<cantidad_a_comprar_producto << endl;
                     cout << "Precio sin descuento : "<< p4 * cantidad_a_comprar_producto << endl;
                     double desc = (p4 * cantidad_a_comprar_producto * descuento);
                     cout << "Precio con descuento : "<< p4 * cantidad_a_comprar_producto * descuento << endl; 
                     
                     //Descuento del Stock y de la tarjeta
                     cout << "Su cupo de credito cambio :"<<limite_credito-desc<<endl;
                     cout << "El Stock de " <<art4<<" se reducio a "<< s4 - cantidad_a_comprar_producto ;
                    }
                } else {
                    cout << "No hay suficiente stock de " << art4 << endl;
                }
            }
            else if (opcion_producto_a_comprar == 5) {
                if (cantidad_a_comprar_producto <= s5) {
                    //validacion para que no supere el credito : 
                    if(p5 * cantidad_a_comprar_producto * descuento > limite_credito){
                      cout<<"[x] Compra declinada, esta transaccion supera el limite de su credito";
                    }
                    else{
                     cout<<endl;
                     cout << fixed << setprecision(0);
                     cout << "        [!] Compra aceptada "<<endl;
                     cout << "==============FACTURA=================="<<endl;
                     cout << "Articulos añadido : " << art5 << endl;
                     cout << "Cantidad : "<<cantidad_a_comprar_producto << endl;
                     cout << "Precio sin descuento : "<< p5 * cantidad_a_comprar_producto << endl;
                     double desc = (p5 * cantidad_a_comprar_producto * descuento);
                     cout << "Precio con descuento : "<< p5 * cantidad_a_comprar_producto * descuento << endl; 
                     
                     //Descuento del Stock y de la tarjeta
                     cout << "Su cupo de credito cambio :"<<limite_credito-desc<<endl;
                     cout << "El Stock de " <<art5<<" se reducio a "<< s5 - cantidad_a_comprar_producto ;
                    }
                } else {
                    cout << "No hay suficiente stock de " << art5 << endl;
                }
            }
            else {
                cout << "Opcion de producto no valida." << endl;
            }
            break;

        case 4:
            cout << "\n--- INFORMACION DE LA FABRICA ---" << endl;
            cout << "numero de f: 2" << endl;
            cout << "Telefono:34353563636" << endl;
            cout << "Total articulos que provee: " << (s1+s2+s3+s4+s5) << endl;
            cout << "Fabrica alternativa: Suministros tecnologia" << endl;
            break;

        case 0:
            cout << "usted eligio salir" << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
