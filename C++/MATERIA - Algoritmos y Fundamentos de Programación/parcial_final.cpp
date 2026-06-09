#include <iostream>
#include <string>
#include <iomanip> //<< fixed << setprecision(0) notacion cientifica, decimales a imprimir

using namespace std;

int main()
{
    //color
    cout << "\033[44;37m";   //azul y blancoio
    cout << "\033[2J\033[H"; // limpiar la pantalla

    //ciudades
    string ciudad1 = "bogota";
    string ciudad2 = "Medellin";
    string ciudad3 = "Barranquilla";

    //farmaceuticos de las ciudades
    string farmaceutico_bogota       = "Carlos carlosa";
    string farmaceutico_medellin     = "Laura parra";
    string farmaceutico_barranquilla = "Andres felipe";

    //sedes Debe haber al menos dos sedes por ciudad (sucursal Norte y Sur). Cada
//medicamento tiene un stock (por ejemplo, 20 unidades) y un precio.
    string sede_bogota_norte       = "Sede Norte Bogota";
    string sede_bogota_sur         = "Sede Sur Bogota";
    string sede_medellin_norte     = "Sede Norte Medellin";
    string sede_medellin_sur       = "Sede Sur Medellin";
    string sede_barranquilla_norte = "Sede Norte Barranquilla";
    string sede_barranquilla_sur   = "Sede Sur Barranquilla";

    //empleados dos por ciudad
    string empleado1_bogota       = "Mariana lopez";
    string empleado2_bogota       = "Juan perez";
    string empleado1_medellin     = "Sofia medina";
    string empleado2_medellin     = "Diego lugo";
    string empleado1_barranquilla = "Paola reyes";
    string empleado2_barranquilla = "Luis felipe";


    // ,medicamentos,mono droga,laboratorio orden alfab
   
    //medi1  medi = medicamento 
    string med1_nombre       = "Apronax";
    string med1_monodorga    = "Acetaminofen";
    string med1_presentacion = "Tabletas 500mg x 10";
    string med1_laboratorio  = "Genfar";
    string med1_accion       = "Analgesico";
    double med1_precio       = 8500.0;
    int    med1_stock        = 20;

    //medi2
    string med2_nombre       = "Dolex";
    string med2_monodorga    = "Acetaminofen";
    string med2_presentacion = "Tabletas 500mg x 10";
    string med2_laboratorio  = "GlaxoSmithKline";
    string med2_accion       = "Analgesico";
    double med2_precio       = 9200.0;
    int    med2_stock        = 15;

    //medi3
    string med3_nombre       = "Bonflex";
    string med3_monodorga    = "Ibuprofeno";
    string med3_presentacion = "Comprimidos 400mg x 10";
    string med3_laboratorio  = "Tecnoquimicas";
    string med3_accion       = "Antiinflamatorio";
    double med3_precio       = 11000.0;
    int    med3_stock        = 18;

    //medi4
    string med4_nombre       = "Motrin";
    string med4_monodorga    = "Ibuprofeno";
    string med4_presentacion = "Comprimidos 600mg x 10";
    string med4_laboratorio  = "Pfizer";
    string med4_accion       = "Antiinflamatorio";
    double med4_precio       = 13500.0;
    int    med4_stock        = 12;

    //medi5
    string med5_nombre       = "Amoxal";
    string med5_monodorga    = "Amoxicilina";
    string med5_presentacion = "Capsulas 500mg x 12";
    string med5_laboratorio  = "MK";
    string med5_accion       = "Antibiotico";
    double med5_precio       = 15000.0;
    int    med5_stock        = 10;

    //medi6
    string med6_nombre       = "Clamoxyl";
    string med6_monodorga    = "Amoxicilina";
    string med6_presentacion = "Jarabe 250mg/5ml x 100ml";
    string med6_laboratorio  = "Bayer";
    string med6_accion       = "Antibiotico";
    double med6_precio       = 18000.0;
    int    med6_stock        = 8;

    //variable menu
    int opcion = -1;

    //variable compra
    string usuario_nombre  = "";
    string usuario_cedula  = "";
    int    ciudad_elegida  = 0;
    int    sede_elegida    = 0;
    string farmaceutico_compra = "";

    int    med_elegido     = 0;
    int    cantidad_compra = 0;

    double precio_item     = 0.0;
    double subtotal        = 0.0;
    double descuento_valor = 0.0;
    double total_pagar     = 0.0;
    double porcentaje_desc = 0.0;

    //consulta bvariable
    string busqueda = "";


    cout << "============================================================" << endl;
    cout << "         sistema farmacia          " << endl;
    cout << "============================================================" << endl;
    cout << endl;

    //menu principal
    cout << "---------- menu farmacia ----------" << endl;
    cout << " 1. Ver catalogo de medicamentos"     << endl;
    cout << " 2. Consultar por mono droga"         << endl;
    cout << " 3. Consultar por laboratorio"        << endl;
    cout << " 4. Comprar medicamentos"             << endl;
    cout << " 5. Ver ciudades, farmaceuticos y empleados" << endl;
    cout << " 0. Salir"                            << endl;
    cout << "------------------------------------" << endl;
    cout << "Ingrese una opcion: ";
    cin  >> opcion;
    cout << endl;

    switch (opcion)
    {
       //opcion 1 catalogo de meds
        case 1:
        {
            cout << "============================================================" << endl;
            cout << "           caatalogo de medicamentos              " << endl;
            cout << "     " << endl;
            cout << "============================================================" << endl;
            cout << endl;

            // -- Grupo: Acetaminofen --
            cout << "MONO DROGA: Acetaminofen " << endl;
            cout << "------------------------------------------------------------" << endl;

            cout << "  Nombre       : " << med1_nombre       << endl;
            cout << "  Presentacion : " << med1_presentacion << endl;
            cout << "  Laboratorio  : " << med1_laboratorio  << endl;
            cout << "  Accion       : " << med1_accion       << endl;
            cout << "  Precio       : $" << fixed << setprecision(0) << med1_precio << endl;
            cout << "  Stock  : " << med1_stock        << " unidades" << endl;
            cout << endl;

            cout << "  Nombre       : " << med2_nombre       << endl;
            cout << "  Presentacion : " << med2_presentacion << endl;
            cout << "  Laboratorio  : " << med2_laboratorio  << endl;
            cout << "  Accion       : " << med2_accion       << endl;
            cout << "  Precio       : $" << fixed << setprecision(0) << med2_precio << endl;
            cout << "  Stock  : " << med2_stock        << " unidades" << endl;
            cout << endl;

            cout << "MONO DROGA: Amoxicilina " << endl;
            cout << "------------------------------------------------------------" << endl;

            cout << "  Nombre       : " << med6_nombre       << endl;
            cout << "  Presentacion : " << med6_presentacion << endl;
            cout << "  Laboratorio  : " << med6_laboratorio  << endl;
            cout << "  Accion       : " << med6_accion       << endl;
            cout << "  Precio       : $" << fixed << setprecision(0) << med6_precio << endl;
            cout << "  Stock  : " << med6_stock        << " unidades" << endl;
            cout << endl;

            cout << "  Nombre       : " << med5_nombre       << endl;
            cout << "  Presentacion : " << med5_presentacion << endl;
            cout << "  Laboratorio  : " << med5_laboratorio  << endl;
            cout << "  Accion       : " << med5_accion       << endl;
            cout << "  Precio       : $" << fixed << setprecision(0) << med5_precio << endl;
            cout << "  Stock  : " << med5_stock        << " unidades" << endl;
            cout << endl;

            // -- Grupo: Ibuprofeno --
            cout << " MONO DROGA: Ibuprofeno " << endl;
            cout << "------------------------------------------------------------" << endl;

            cout << "  Nombre       : " << med3_nombre       << endl;
            cout << "  Presentacion : " << med3_presentacion << endl;
            cout << "  Laboratorio  : " << med3_laboratorio  << endl;
            cout << "  Accion       : " << med3_accion       << endl;
            cout << "  Precio       : $" << fixed << setprecision(0) << med3_precio << endl;
            cout << "  Stock  : " << med3_stock        << " unidades" << endl;
            cout << endl;

            cout << "  Nombre       : " << med4_nombre       << endl;
            cout << "  Presentacion : " << med4_presentacion << endl;
            cout << "  Laboratorio  : " << med4_laboratorio  << endl;
            cout << "  Accion       : " << med4_accion       << endl;
            cout << "  Precio       : $" << fixed << setprecision(0) << med4_precio << endl;
            cout << "  Stock  : " << med4_stock        << " unidades" << endl;
            cout << endl;

            cout << "============================================================" << endl;
            break;
        }

        //consulkta por mono droga
        case 2:
        {
            cout << "============================================================" << endl;
            cout << "         consulta mono droga                          " << endl;
            cout << "============================================================" << endl;
            cout << "Mono drogas disponibles:" << endl;
            cout << "  1. Acetaminofen" << endl;
            cout << "  2. Amoxicilina"  << endl;
            cout << "  3. Ibuprofeno"   << endl;
            cout << "Ingrese el numero de la mono droga: ";
            cin  >> opcion;
            cout << endl;

            if (opcion == 1)
            {
                cout << "--- Medicamentos con Acetaminofen ---" << endl;
                cout << endl;

                cout << "  Nombre       : " << med1_nombre       << endl;
                cout << "  Presentacion : " << med1_presentacion << endl;
                cout << "  Laboratorio  : " << med1_laboratorio  << endl;
                cout << "  Accion       : " << med1_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med1_precio << endl;
                cout << "  Stock        : " << med1_stock        << " unidades" << endl;
                cout << endl;

                cout << "  Nombre       : " << med2_nombre       << endl;
                cout << "  Presentacion : " << med2_presentacion << endl;
                cout << "  Laboratorio  : " << med2_laboratorio  << endl;
                cout << "  Accion       : " << med2_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med2_precio << endl;
                cout << "  Stock        : " << med2_stock        << " unidades" << endl;
                cout << endl;
            }
            else if (opcion == 2)
            {
                cout << "--- Medicamentos con Amoxicilina ---" << endl;
                cout << endl;

                cout << "  Nombre       : " << med5_nombre       << endl;
                cout << "  Presentacion : " << med5_presentacion << endl;
                cout << "  Laboratorio  : " << med5_laboratorio  << endl;
                cout << "  Accion       : " << med5_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med5_precio << endl;
                cout << "  Stock        : " << med5_stock        << " unidades" << endl;
                cout << endl;

                cout << "  Nombre       : " << med6_nombre       << endl;
                cout << "  Presentacion : " << med6_presentacion << endl;
                cout << "  Laboratorio  : " << med6_laboratorio  << endl;
                cout << "  Accion       : " << med6_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med6_precio << endl;
                cout << "  Stock        : " << med6_stock        << " unidades" << endl;
                cout << endl;
            }
            else if (opcion == 3)
            {
                cout << "--- Medicamentos con Ibuprofeno ---" << endl;
                cout << endl;

                cout << "  Nombre       : " << med3_nombre       << endl;
                cout << "  Presentacion : " << med3_presentacion << endl;
                cout << "  Laboratorio  : " << med3_laboratorio  << endl;
                cout << "  Accion       : " << med3_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med3_precio << endl;
                cout << "  Stock        : " << med3_stock        << " unidades" << endl;
                cout << endl;

                cout << "  Nombre       : " << med4_nombre       << endl;
                cout << "  Presentacion : " << med4_presentacion << endl;
                cout << "  Laboratorio  : " << med4_laboratorio  << endl;
                cout << "  Accion       : " << med4_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med4_precio << endl;
                cout << "  Stock        : " << med4_stock        << " unidades" << endl;
                cout << endl;
            }
            else
            {
                cout << "Opcion no valida." << endl;
            }

            cout << "============================================================" << endl;
            break;
        }

        //consulta por lab
        case 3:
        {
            cout << "============================================================" << endl;
            cout << "        consulta por lab                        " << endl;
            cout << "============================================================" << endl;
            cout << "Laboratorios disponibles:" << endl;
            cout << "  1. Bayer"           << endl;
            cout << "  2. Genfar"          << endl;
            cout << "  3. GlaxoSmithKline" << endl;
            cout << "  4. MK"              << endl;
            cout << "  5. Pfizer"          << endl;
            cout << "  6. Tecnoquimicas"   << endl;
            cout << "Ingrese el numero del laboratorio: ";
            cin  >> opcion;
            cout << endl;

            if (opcion == 1)
            {
                cout << "--- Medicamentos de Bayer ---" << endl;
                cout << endl;
                cout << "  Nombre       : " << med6_nombre       << endl;
                cout << "  Mono droga   : " << med6_monodorga    << endl;
                cout << "  Presentacion : " << med6_presentacion << endl;
                cout << "  Accion       : " << med6_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med6_precio << endl;
                cout << "  Stock        : " << med6_stock        << " unidades" << endl;
                cout << endl;
            }
            else if (opcion == 2)
            {
                cout << "--- Medicamentos de Genfar ---" << endl;
                cout << endl;
                cout << "  Nombre       : " << med1_nombre       << endl;
                cout << "  Mono droga   : " << med1_monodorga    << endl;
                cout << "  Presentacion : " << med1_presentacion << endl;
                cout << "  Accion       : " << med1_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med1_precio << endl;
                cout << "  Stock        : " << med1_stock        << " unidades" << endl;
                cout << endl;
            }
            else if (opcion == 3)
            {
                cout << "--- Medicamentos de GlaxoSmithKline ---" << endl;
                cout << endl;
                cout << "  Nombre       : " << med2_nombre       << endl;
                cout << "  Mono droga   : " << med2_monodorga    << endl;
                cout << "  Presentacion : " << med2_presentacion << endl;
                cout << "  Accion       : " << med2_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med2_precio << endl;
                cout << "  Stock        : " << med2_stock        << " unidades" << endl;
                cout << endl;
            }
            else if (opcion == 4)
            {
                cout << "--- Medicamentos de MK ---" << endl;
                cout << endl;
                cout << "  Nombre       : " << med5_nombre       << endl;
                cout << "  Mono droga   : " << med5_monodorga    << endl;
                cout << "  Presentacion : " << med5_presentacion << endl;
                cout << "  Accion       : " << med5_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med5_precio << endl;
                cout << "  Stock        : " << med5_stock        << " unidades" << endl;
                cout << endl;
            }
            else if (opcion == 5)
            {
                cout << "--- Medicamentos de Pfizer ---" << endl;
                cout << endl;
                cout << "  Nombre       : " << med4_nombre       << endl;
                cout << "  Mono droga   : " << med4_monodorga    << endl;
                cout << "  Presentacion : " << med4_presentacion << endl;
                cout << "  Accion       : " << med4_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med4_precio << endl;
                cout << "  Stock        : " << med4_stock        << " unidades" << endl;
                cout << endl;
            }
            else if (opcion == 6)
            {
                cout << "--- Medicamentos de Tecnoquimicas ---" << endl;
                cout << endl;
                cout << "  Nombre       : " << med3_nombre       << endl;
                cout << "  Mono droga   : " << med3_monodorga    << endl;
                cout << "  Presentacion : " << med3_presentacion << endl;
                cout << "  Accion       : " << med3_accion       << endl;
                cout << "  Precio       : $" << fixed << setprecision(0) << med3_precio << endl;
                cout << "  Stock        : " << med3_stock        << " unidades" << endl;
                cout << endl;
            }
            else
            {
                cout << "Opcion no valida." << endl;
            }

            cout << "============================================================" << endl;
            break;
        }

        ///compra
        case 4:
        {
            cout << "============================================================" << endl;
            cout << "                  compra                  " << endl;
            cout << "============================================================" << endl;

            //usuario
            cout << "Ingrese su nombre completo : ";
            cin.ignore();
            getline(cin, usuario_nombre);

            cout << "Ingrese su cedula          : ";
            cin  >> usuario_cedula;
            cout << endl;

            //ciudad
            cout << "Seleccione la ciudad:" << endl;
            cout << "  1. " << ciudad1 << endl;
            cout << "  2. " << ciudad2 << endl;
            cout << "  3. " << ciudad3 << endl;
            cout << "Opcion: ";
            cin  >> ciudad_elegida;
            cout << endl;

            //farmaceutico segun ciudad
            if (ciudad_elegida == 1)
            {
                farmaceutico_compra = farmaceutico_bogota;
            }
            else if (ciudad_elegida == 2)
            {
                farmaceutico_compra = farmaceutico_medellin;
            }
            else if (ciudad_elegida == 3)
            {
                farmaceutico_compra = farmaceutico_barranquilla;
            }
            else
            {
                cout << "Ciudad no valida." << endl;
                break;
            }

            //sede
            cout << "Seleccione la sede:" << endl;
            cout << "  1. Sede Norte" << endl;
            cout << "  2. Sede Sur"   << endl;
            cout << "Opcion: ";
            cin  >> sede_elegida;
            cout << endl;

            if (sede_elegida != 1 && sede_elegida != 2)
            {
                cout << "Sede no valida. Volviendo al menu." << endl;
                break;
            }

            //elegir medicament oa comprar
            cout << "Medicamentos disponibles:" << endl;
            cout << "  1. " << med1_nombre << " (" << med1_monodorga << ") - $"
                 << fixed << setprecision(0) << med1_precio
                 << " - Stock: " << med1_stock << endl;
            cout << "  2. " << med2_nombre << " (" << med2_monodorga << ") - $"
                 << fixed << setprecision(0) << med2_precio
                 << " - Stock: " << med2_stock << endl;
            cout << "  3. " << med3_nombre << " (" << med3_monodorga << ") - $"
                 << fixed << setprecision(0) << med3_precio
                 << " - Stock: " << med3_stock << endl;
            cout << "  4. " << med4_nombre << " (" << med4_monodorga << ") - $"
                 << fixed << setprecision(0) << med4_precio
                 << " - Stock: " << med4_stock << endl;
            cout << "  5. " << med5_nombre << " (" << med5_monodorga << ") - $"
                 << fixed << setprecision(0) << med5_precio
                 << " - Stock: " << med5_stock << endl;
            cout << "  6. " << med6_nombre << " (" << med6_monodorga << ") - $"
                 << fixed << setprecision(0) << med6_precio
                 << " - Stock: " << med6_stock << endl;
            cout << endl;
            cout << "Elija un medicamento (1-6): ";
            cin  >> med_elegido;
            cout << endl;

            if (med_elegido < 1 || med_elegido > 6)
            {
                cout << "Medicamento no valido" << endl;
                break;
            }

            cout << "Ingrese la cantidad a comprar: ";
            cin  >> cantidad_compra;
            cout << endl;

            if (cantidad_compra <= 0)
            {
                cout << "La cantidad tiene que ser mayor a ceroo" << endl;
                break;
            }

            //verificar el stock de la compra 

            string nombre_med_comprado = "";
            double precio_unitario     = 0.0;
            bool   stock_ok            = false;

            if (med_elegido == 1)
            {
                nombre_med_comprado = med1_nombre;
                precio_unitario     = med1_precio;

                if (cantidad_compra <= med1_stock)
                {
                    stock_ok   = true;
                    med1_stock = med1_stock - cantidad_compra;
                }
            }
            else if (med_elegido == 2)
            {
                nombre_med_comprado = med2_nombre;
                precio_unitario     = med2_precio;

                if (cantidad_compra <= med2_stock)
                {
                    stock_ok   = true;
                    med2_stock = med2_stock - cantidad_compra;
                }
            }
            else if (med_elegido == 3)
            {
                nombre_med_comprado = med3_nombre;
                precio_unitario     = med3_precio;

                if (cantidad_compra <= med3_stock)
                {
                    stock_ok   = true;
                    med3_stock = med3_stock - cantidad_compra;
                }
            }
            else if (med_elegido == 4)
            {
                nombre_med_comprado = med4_nombre;
                precio_unitario     = med4_precio;

                if (cantidad_compra <= med4_stock)
                {
                    stock_ok   = true;
                    med4_stock = med4_stock - cantidad_compra;
                }
            }
            else if (med_elegido == 5)
            {
                nombre_med_comprado = med5_nombre;
                precio_unitario     = med5_precio;

                if (cantidad_compra <= med5_stock)
                {
                    stock_ok   = true;
                    med5_stock = med5_stock - cantidad_compra;
                }
            }
            else if (med_elegido == 6)
            {
                nombre_med_comprado = med6_nombre;
                precio_unitario     = med6_precio;

                if (cantidad_compra <= med6_stock)
                {
                    stock_ok   = true;
                    med6_stock = med6_stock - cantidad_compra;
                }
            }

            if (stock_ok == false)
            {
                cout << "No hay stock para esa cantidad de medicamentos." << endl;
                cout << "La compra no se hizo" << endl;
                break;
            }

            //calcular el subtotal
            subtotal = precio_unitario * cantidad_compra;

            if (subtotal > 50000.0)
            {
                porcentaje_desc = 10.0;
                descuento_valor = subtotal * 0.10;
            }
            else if (subtotal > 30000.0)
            {
                porcentaje_desc = 5.0;
                descuento_valor = subtotal * 0.05;
            }
            else
            {
                porcentaje_desc = 0.0;
                descuento_valor = 0.0;
            }

            total_pagar = subtotal - descuento_valor;

            //recibo
            cout << "************************************************************" << endl;
            cout << "*                   recibo                   *" << endl;
            cout << "************************************************************" << endl;
            cout << endl;
            cout << " su usuario       : " << usuario_nombre << endl;
            cout << " su cedula        : " << usuario_cedula << endl;
            cout << " el farmaceutico que lo atendio  : " << farmaceutico_compra << endl;

            //sede elgida segun ciudad
            if (ciudad_elegida == 1 && sede_elegida == 1)
            {
                cout << "  Sede          : " << sede_bogota_norte << endl;
            }
            else if (ciudad_elegida == 1 && sede_elegida == 2)
            {
                cout << "  Sede          : " << sede_bogota_sur << endl;
            }
            else if (ciudad_elegida == 2 && sede_elegida == 1)
            {
                cout << "  Sede          : " << sede_medellin_norte << endl;
            }
            else if (ciudad_elegida == 2 && sede_elegida == 2)
            {
                cout << "  Sede          : " << sede_medellin_sur << endl;
            }
            else if (ciudad_elegida == 3 && sede_elegida == 1)
            {
                cout << "  Sede          : " << sede_barranquilla_norte << endl;
            }
            else if (ciudad_elegida == 3 && sede_elegida == 2)
            {
                cout << "  Sede          : " << sede_barranquilla_sur << endl;
            }

            cout << endl;
            cout << "  ---- Detalle de la compra ----" << endl;
            cout << "  Medicamento   : " << nombre_med_comprado << endl;
            cout << "  Precio unit.  : $" << fixed << setprecision(0) << precio_unitario << endl;
            cout << "  Cantidad      : " << cantidad_compra << endl;
            cout << "  Subtotal      : $" << fixed << setprecision(0) << subtotal << endl;

            if (descuento_valor > 0.0)
            {
                cout << "  Descuento ("
                     << fixed << setprecision(0) << porcentaje_desc
                     << "%): -$"
                     << fixed << setprecision(0) << descuento_valor << endl;
            }
            else
            {
                cout << "  Descuento     : No aplica" << endl;
            }

            cout << "  ----------------------------" << endl;
            cout << "  TOTAL A PAGAR : $" << fixed << setprecision(0) << total_pagar << endl;
            cout << endl;
            cout << "  Gracias por su compra!" << endl;
            cout << "************************************************************" << endl;
            break;
        }

        //ciudades farmaceuics, sedes 
        case 5:
        {
            cout << "============================================================" << endl;
            cout << "     ciudades farmaceuticos y sedes de empleados            " << endl;
            cout << "============================================================" << endl;
            cout << endl;

            //Bogota
            cout << "  CIUDAD        : " << ciudad1 << endl;
            cout << "  Farmaceutico  : " << farmaceutico_bogota << endl;
            cout << "  Sedes         : " << sede_bogota_norte
                 << " | " << sede_bogota_sur << endl;
            cout << "  Empleados     : " << empleado1_bogota
                 << ", " << empleado2_bogota << endl;
            cout << endl;

            //Medellin
            cout << "  CIUDAD        : " << ciudad2 << endl;
            cout << "  Farmaceutico  : " << farmaceutico_medellin << endl;
            cout << "  Sedes         : " << sede_medellin_norte
                 << " | " << sede_medellin_sur << endl;
            cout << "  Empleados     : " << empleado1_medellin
                 << ", " << empleado2_medellin << endl;
            cout << endl;

            //Barranquilla
            cout << "  CIUDAD        : " << ciudad3 << endl;
            cout << "  Farmaceutico  : " << farmaceutico_barranquilla << endl;
            cout << "  Sedes         : " << sede_barranquilla_norte
                 << " | " << sede_barranquilla_sur << endl;
            cout << "  Empleados     : " << empleado1_barranquilla
                 << ", " << empleado2_barranquilla << endl;
            cout << endl;

            cout << "============================================================" << endl;
            break;
        }

      //salir del codigo 
        case 0:
        {
            cout << "Gracias por usar el sistema. Hasta luego!" << endl;
            break;
        }

      
        default:
        {
            cout << "Opcion no valida. Por favor elija una opcion del menu." << endl;
            break;
        }

    } // fin switch

    
    cout << "\033[0m" << endl;

    return 0;
}
