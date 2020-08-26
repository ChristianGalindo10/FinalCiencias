#include <iostream>
#include <cstdio>
#include "lista.h"
//Clases
#include "controlador.h"
#include "menuprincipal.h"
#include "evaluacion.h"
#include <vector>

using namespace std;
int main(int argc, char** argv) {
	Controlador controlador = Controlador();
	controlador.leerProfes();
	controlador.leerTemas();
	controlador.leerCursos();
	MenuPrincipal menu;
	menu.mostrarMenu(controlador);
	////
//	Evaluacion eva;
//	
//	vector<float> xd;
//	
//	eva.setNotas(3.5);
//	eva.setNotas(5);
//	eva.setNotas(4.5);
//	
//	xd = eva.getNotas();
//	
//	for(int i=0;i<xd.size();i++){
//		cout << xd[i] << " ";
//	}
//	
//	cout << endl;
//	
//	xd.erase(xd.begin());
//	xd.erase(xd.begin());
//	xd.erase(xd.begin());
//	
//	cout << xd.size() << endl;
//	
//	eva.setNotas(3.5);
//	eva.setNotas(5);
//	eva.setNotas(4.5);
//	
//	xd = eva.getNotas();
//	
//	for(int i=0;i<xd.size();i++){
//		cout << xd[i] << " ";
//	}
	
	
	return 0;
}
