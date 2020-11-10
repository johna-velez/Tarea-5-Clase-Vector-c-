#include <iostream>
using namespace std;
#include "vector.hpp"

/*
class Vector{
    
    public:
    
    Vector(int n){ 
        
        //int v[4];
   
        tv=n;
        //respuesta a un ingreso no adecuado
        if (n!=4){cout<<"solo se admiten vectores de tamaño 4"<<endl;}
        if (n==4){cout<<"se creo el vector de 4 componentes"<<endl;}
    } 
    
    // FUNCIONES 
    
    void SetPos(int i, int n){v[i]=n;} //nos cambia el valor de i-esimo por n
    
    int GetPos(int i){int co; co=v[i]; return co;} //nos da el valor de la coordenada i
    
    void PrintVec(){if(tv!=4){cout<<"el vector no es de tamaño 4"<<endl;};
                    if(tv==4){for(int i=0;i<3;i=i+1){cout << v[i]<< ", ";};cout<<v[3]<<endl;}} //imprime el vector
    
    void GetSize(){if(tv!=4){cout<<"el vector no es de tamaño 4"<<endl;}; //condicion por si no cumple
                   if(tv==4){cout<<tv<<endl;}} // imprime el tamaño del vector
                  
    int tam(){return tv;} //tamaño del vector
    
    // sobrecarga operador +
    
    Vector operator+(Vector& u){
        if(tv!=4 or u.tam()!=4){cout<<"uno de los vectores no tiene la longitud adecuada"<<endl;}
        if(tv==4){Vector sum(4); // crea el Vector suma
        for(int i=0;i<4;i=i+1){sum.SetPos(i,v[i]+u.GetPos(i));}; //nos suma cada coordenada 
        return sum;};return 0;}//retorna el Vector suma
    // ----------------------
    
    // sobrecarga operador -
    
    Vector operator-(Vector& u){
        if(tv!=4 or u.tam()!=4){cout<<"uno de los vectores no tiene la longitud adecuada, no se realiza operacion"<<endl;}
        if(tv==4){Vector res(4); // crea el Vector resta
        for(int i=0;i<4;i=i+1){res.SetPos(i,v[i]-u.GetPos(i));}; //nos resta cada coordenada 
        return res;};return 0;} //retorna el Vector resta
    // ----------------------
    // sobrecarga operador []
    Vector operator[](int n){
                             cout<<v[n]<<endl;
                             //return 0;}
                             return *this;}//solo retorna el valor de la coordenada
    
    //
    // sobrecarga operador =
    Vector operator= (Vector u){
        if(tv!=4 or u.tam()!=4){cout<<"uno de los vectores no tiene la longitud adecuada, no se realiza igualacion"<<endl;}
        for(int i=0;i<4;i=i+1){v[i]=u.GetPos(i);};
        return *this;}
    // -----------------------
    
        
    
    private:
    
    int v[4];
    int tv;
                               };


*/

