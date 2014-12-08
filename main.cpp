#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
using namespace std;

//2 ejercicios a realizar estan ubicados en el archivo Lista.h

//Devuelve el promedio de los valres de mi_lista dada
float obtenerPromedio(std::list<float> mi_lista)
{
//    float promedio;
//    for(list<float>::iterator i = mi_lista.begin();
//            i!=mi_lista.end();
//            i++)
//            {
//            float cantidad;
//            promedio = mi_lista[i]/cantidad;
//            }
//            return promedio;
}

//Devuelve la suma de los valres de mi_vector dada
int obtenerSuma(std::vector<int> mi_vector)
{

//Codigo sacado de http://olimpiada-informatica.org/guiastl.pdf PAG# 6
    int suma = 0;
    for(int i=0;i<mi_vector.size();++i) {
    suma += mi_vector[i];
    }
    return suma;
}

//Devuelve verdadero si encuentra cadena (dada) en el archivo con nombre nombre_archivo (dado), de lo contrario devuelve false
bool existeEnArchivo(string nombre_archivo, string cadena)
{
    ifstream in(nombre_archivo.c_str());
    string palabra;
    int cant = 9999;
    for(int i=0;i < cant;i++)
    {
        in>>palabra;
        if(palabra == cadena)
        {
            return true;
        }
    }
    return false;
}

//Devuelve devuelve el tamano en bytes del archivo con nombre nombre_archivo (dado)
int obtenerTamanoDeArchivo(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(0,ios::end);
    int tamano = in.tellg();
    in.seekg(0,ios::beg);

    for(int i=0; i < tamano;i++)
    return tamano;
}

//Devuelve true si encuentra el valor num (dado) en el arbol dada su raiz
bool existeEnArbol(NodoTrinario* raiz, int num)
{

    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
