#include <iostream>
#include <string> 
using namespace std;

int main() {
    string nombre_completo;
    string ciudad;
    int year;
    int current_year;
    int nivel_sisben;
    int tipo_tramite;
    string zona_conflicto;
    string pago_inmediato;
    double costo_tramite = 0; 
    string descuento_sisben = "0%"; 
    string a = ""; 
    int mes;
    
    cout<<"Ingrese su nombre completo : ";
    cin>>nombre_completo;
    
    cout<<"Ingrese su ciudad : ";
    cin>>ciudad;
    
    cout<<"Ingrese su año de nacimiento / numero :";
    cin>>year;
    cout<<"Ingrese mes de nacimiento / numero :";
    cin>>mes;
    int edad = 2026 - year;
    
    
    
    if(edad < 18){
        cout<<"Usted no aplic para este tramite porque es meno de edadd";
        return 1; 
    }
    
    cout<<"Ingrese su nivel de Sisben : ";
    cin>>nivel_sisben;
    
    cout<<"--------------------------------"<<endl;
    cout<<"    Tipos de Tramite"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"1 - Registro simple"<<endl;
    cout<<"2 - Registro con historial"<<endl;
    cout<<"3 - Duplicado urgente"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Ingrese su tipo de tramite : ";
    cin>>tipo_tramite;
    cout<<"--------------------------------"<<endl;
    
    cout<<"Proviene de zona conflicto activo (Si No) : ";
    cin>>zona_conflicto;
    
    cout<<"paga en efectivo de inmediato? (Si No) : ";
    cin>>pago_inmediato;

    // VALIDACION IGUALES A 18    
    
    if(edad == 18 && nivel_sisben == 1){
        costo_tramite = 200000 * 0.40;
        descuento_sisben = "60%";
        a = "200000"; 
    }
    else if(edad == 18 && nivel_sisben == 2){
        costo_tramite = 200000 * 0.60; 
        descuento_sisben = "40%";
        a = "200000";
    }
    else if(edad == 18 && nivel_sisben == 3){
        costo_tramite = 200000 * 0.80; 
        descuento_sisben = "20%";
        a = "200000";
    }
    
    else if(edad == 18) {
        costo_tramite = 200000;
        a = "200000";
    }
    
    // VALIDACION MAYORES A 18
    else if(edad > 18 && nivel_sisben == 1){
        costo_tramite = 350000 * 0.60; 
        descuento_sisben = "40%";
        a = "350000";
    }
    else if(edad > 18 && nivel_sisben == 2){
        costo_tramite = 350000 * 0.70;
        descuento_sisben = "30%";
        a = "350000";
    }
    else if(edad > 18 && nivel_sisben == 3){
        costo_tramite = 350000 * 0.85;
        descuento_sisben = "15%";
        a = "350000";
    }
    else if(edad > 18) {
        costo_tramite = 350000;
        a = "350000";
    }
    
    // VALIDACION TIPOS DE TRAMITE 
    if(tipo_tramite == 2){
        costo_tramite += 50000;
    }
    else if(tipo_tramite == 3){
        costo_tramite += 120000; 
    }
    
    if(zona_conflicto == "Si" || zona_conflicto == "si" || zona_conflicto == "SI"){
        costo_tramite *= 0.75;
    }
     
    if(pago_inmediato == "No" || pago_inmediato == "no" || pago_inmediato == "NO"){
        costo_tramite *= 1.05;
    }
    cout<<"-----------RESULTADOS------------------"<<endl;
    cout<<"Nombre : "<<nombre_completo<<endl;
    cout<<"Ciudad : "<<ciudad<<endl;
    cout<<"Edad : "<<edad<<endl;
    cout<<"Costo Original : "<<a<<endl;
    cout<<"Descuento por Sisben : "<<descuento_sisben<<endl;
    cout<<"Costo total : "<<costo_tramite<<endl;
    return 0;
}