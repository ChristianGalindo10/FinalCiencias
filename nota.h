/**
  *@file nota.h
  *@version 1.0
  *@date 24/08/2020
  *@title Clase Nota
  *@brief Clase para representar un tipo de evaluaci�n dentro del programa
  */

#ifndef NOTA_H     
#define NOTA_H
#include "contenedor.h"

/**
  *@brief Clase para manejar los datos relacionados a un tipo de evaluaci�n
  */
class Nota{
		string tipo; ///&lt; Tipo de evaluaci�n
		int porcentaje; ///&lt; Porcentaje relacionado al tipo de evaluaci�n
		lista<Contenedor> evaluaciones; ///&lt; Lista de tipo Contenedor para guardar cada evaluaci�n correspondiente
	public:
		//Setters
		/**
	  	  *@brief Establece el porcentaje relacionado al tipo de evaluaci�n
	  	  *@param porcen Procentaje del tipo de evaluaci�n
	  	  */
		void setPorcentaje(int porcen);
		
		/**
	  	  *@brief Establece el tipo de evaluaci�n
	  	  *@param t Tipo de evaluaci�n
	  	  */
		void setTipo(string t);
		
		/**
	  	  *@brief Establece la lista de contenedores
	  	  *@param eval Lista de tipo Contenedor
	  	  */
		void setListaContenedor(lista<Contenedor> eval);
		//Getters
		/**
	  	  *@brief Retorna el porcentaje del tipo de evaluaci�n
	  	  *@return Porcentaje del tipo de evaluaci�n tipo entero
	  	  */
		int& getPorcentaje();
		
		/**
	  	  *@brief Retorna el tipo de evaluaci�n
	  	  *@return Tipo de evaluaci�n tipo string
	  	  */
		string getTipo();
		
		/**
	  	  *@brief Retorna la lista de contenedores relacionada al tipo de evaluaci�n 
	  	  *@return Lista de tipo Contenedor asociada al tipo de evaluaci�n
	  	  */
		lista<Contenedor> getListaContenedor();
};
//Setters
void Nota::setPorcentaje(int porcen){
	porcentaje=porcen;
}
void Nota::setTipo(string t){
	tipo = t;
}
void Nota::setListaContenedor(lista<Contenedor> eval){
	evaluaciones=eval;
}
//Getters
int& Nota::getPorcentaje(){
	return porcentaje;
}
string Nota::getTipo(){
	return tipo;
}
lista<Contenedor> Nota::getListaContenedor(){
	return evaluaciones;
}
#endif
