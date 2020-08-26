/**
  *@file contenedor.h
  *@version 1.0
  *@date 24/08/2020
  *@title Clase Contenedor
  *@brief Clase para representar una evaluaci�n dentro del programa
  */

#ifndef CONTENEDOR_H     
#define CONTENEDOR_H
#include "lista.h"
#include "evaluacion.h"

/**
  *@brief Clase para manejar los datos de una evaluaci�n relacionada a un tipo de evaluaci�n
  */ 
class Contenedor{
		int i; ///&lt; N�mero de la evaluaci�n
		lista<Evaluacion> c; ///&lt; Preguntas asociadas a la evaluaci�n
	public:
		//Setters
		
		/**
	  	  *@brief Establece el n�mero de la evaluaci�n
	  	  *@param a N�mero de la evaluaci�n
	  	  */
		void setI(int a);
		
		/**
	  	  *@brief Establece la lista de preguntas
	  	  *@param b Lista de tipo Evaluaci�n
	  	  */
		void setListaEvaluacion(lista<Evaluacion> b);
		//Getters
		
		/**
	  	  *@brief Retorna el n�mero de la evaluaci�n
	  	  *@return N�mero de la evaluaci�n de tipo entero 
	  	  */
		int& getI();
		
		/**
	  	  *@brief Retorna la lista de preguntas
	  	  *@return Lista de tipo Evaluaci�n asociada a la evaluaci�n 
	  	  */
		lista<Evaluacion> getListaEvaluacion();
};
//Setters
void Contenedor::setI(int a){
	i = a;
}
void Contenedor::setListaEvaluacion(lista<Evaluacion> b){
	c = b;
}
//Getters
int& Contenedor::getI(){
	return i;
}
lista<Evaluacion> Contenedor::getListaEvaluacion(){
	return c;
}
#endif
