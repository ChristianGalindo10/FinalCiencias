/**
  *@file tema.h
  *@version 1.0
  *@date 24/08/2020
  *@title Clase tema
  *@brief Clase para representar un tema dentro del programa
  */

#ifndef TEMA_H     
#define TEMA_H

/**
  *@brief Clase para manejar los datos relacionados al tema
  */ 
class Tema{
		int codigo; ///&lt; C�digo del tema
		char nombre[50]; ///&lt; Nombre o descripci�n del tema
	public:
		//Setters
		/**
	  	  *@brief Establece el c�digo del tema
	  	  *@param cod C�digo del tema
	  	  */
		void setCodigo(int cod);
		
		/**
	  	  *@brief Establece el nombre o descripci�n del tema
	  	  *@param pos Posici�n del arreglo
	  	  *@para letra Letra que debe ir en la posici�n indicada
	  	  */
		void setNombre(int pos, char letra);
		//Getters
		/**
	  	  *@brief Retorna el nombre o descripci�n del tema
	  	  *@return Nombre o descripci�n del tema tipo puntero a char
	  	  */
		char* getNombre();
		
		/**
	  	  *@brief Retorna el c�digo del tema
	  	  *@return C�digo del tema tipo entero
	  	  */
		int& getCodigo();
};
//Setters
void Tema::setCodigo(int cod){
	codigo=cod;
}
void Tema::setNombre(int pos, char letra){
	nombre[pos]=letra;
}
//Getters
char* Tema::getNombre(){
	return nombre;
}
int& Tema::getCodigo(){
	return codigo;
}
#endif
