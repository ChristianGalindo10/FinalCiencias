#include <iostream>
#include "lista.h"
#include "cola.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Estructuras

struct evaluacion{
	int porcentaje;
	int tema;
};
//

struct contenedor{
	int i;
	lista<evaluacion> c;
};

struct nota{
	string tipo;
	int porcentaje;
	lista<contenedor> evaluaciones;
};

struct corte{
	string nombre;
	lista<nota> evaluaciones;
};

struct profesor{
	long long int cedula;
	string apellidos;
	string nombres;
	int numClases;
	lista<corte> cortes;
};

struct tema{
	int codigo;
	string nombre;
};


//Prototipos funciones de llenado
lista<tema> llenaTemas(lista<tema> ts,tema t);
lista<profesor> llenaProfes(lista<profesor> ps);
lista<corte> llenaCortes(lista<corte> cs);
lista<nota> llenaNotas(lista<nota> ns);
lista<contenedor> llenaContenedores(lista<contenedor> cs);
lista<evaluacion> llenaEvaluaciones(lista<evaluacion> es);




//Implementación funciones de llenado
lista<tema> llenaTemas(lista<tema> ts,tema t){
	t.codigo=1;
	t.nombre="Tipos de algoritmos";
	ts.insertarOrd(t,t.codigo);
	
	t.codigo=2;
	t.nombre="Complejidad en memoria";
	ts.insertarOrd(t,t.codigo);
	
	t.codigo=3;
	t.nombre="Complejidad en tiempo";
	ts.insertarOrd(t,t.codigo);
	
	t.codigo=6;
	t.nombre="Definicion de orden";
	ts.insertarOrd(t,t.codigo);
	
	t.codigo=8;
	t.nombre="Demostraciones";
	ts.insertarOrd(t,t.codigo);
	return ts;
}

lista<corte> llenaCortes(lista<corte> cs){
	int c=1,e=0;
	nota n;
	n.porcentaje=1000;
	n.tipo="TipoEjemplo";
	while(c!=0){
		lista<nota> notas = lista<nota>(n);
		corte cor;
		cout<<"Digite el nombre del corte: ";
		cin>>cor.nombre;
		cout<<"Desea insertar los tipos de evaluación con su repectivo porcentaje? Si=1, No=0"<<endl;
		cin>>e;
		if(e==1){
			notas=llenaNotas(notas);
		} 
		cor.evaluaciones=notas;
		cs.insertarOrd(cor,cs.get_tam()+1);
		cout<<"Desea ingresar otro corte? Si=1, No=0"<<endl;
		cin>>c;
	}
	return cs;
}

lista<nota> llenaNotas(lista<nota> ns){
	int nc=1,e=1;
	contenedor cont;
	cont.i=9999999;
	while(nc!=0){
		lista<contenedor> contenedores = lista<contenedor>(cont);
		nota n;
		cout<<"Digite el tipo de evaluacion: ";
		cin>>n.tipo;
		cout<<endl;
		cout<<"Digite el porcentaje de evaluacion: ";
		cin>>n.porcentaje;
		cout<<endl;
		cout<<"Desea insertar evaluaciones? Si=1, No=0"<<endl;
		cin>>e;
		if(e==1){
			contenedores = llenaContenedores(contenedores);
		}
		n.evaluaciones=contenedores;
		ns.insertarOrd(n,ns.get_tam()+1);
		cout<<"Desea ingresar otro tipo de evaluacion? Si=1, No=0"<<endl;
		cin>>nc;
	}
	return ns;
}

lista<contenedor> llenaContenedores(lista<contenedor> cs){
	int c=1;
	evaluacion eva;
	eva.porcentaje=99999;
	eva.tema=1000;
	while(c!=0){
		lista<evaluacion> evaluaciones = lista<evaluacion>(eva);
		contenedor cont;
		cont.i=cs.get_tam()+1;
		cout<<"Insertando evaluacion #"<<cont.i<<endl;
		evaluaciones=llenaEvaluaciones(evaluaciones);
		cont.c=evaluaciones;
		cs.insertarOrd(cont,cont.i);
		cout<<"Desea insertar otra evaluacion de este tipo? Si=1,No=0"<<endl;
		cin>>c;
	}
	return cs;
}

lista<evaluacion> llenaEvaluaciones(lista<evaluacion> es){
	int e=1;
	while(e!=0){
		evaluacion eva;
		cout<<"Insertando pregunta "<<es.get_tam()+1<<endl;
		cout<<"Inserte porcentaje: ";
		cin>>eva.porcentaje;
		cout<<endl;
		cout<<"Inserte tema: ";
		cin>>eva.tema;
		es.insertarOrd(eva,es.get_tam()+1);
		cout<<"Desea insertar otra pregunta? Si=1,No=0"<<endl;
		cin>>e;
	}
	return es;
}

lista<profesor> llenaProfes(lista<profesor> ps){
	int d=1,c=0;
	corte cor;
	cor.nombre="CorteFinalFinal";
	while(d!=0){
		lista<corte> cortes = lista<corte>(cor);
		profesor p;
		cout<<"Digite los nombres del profesor: ";
		cin>>p.nombres;
		cout<<"Digite los apellidos del profesor: ";
		cin>>p.apellidos;
		cout<<"Digite la cedula del profesor: ";
		cin>>p.cedula;
		cout<<"Digite el numero de clases del profesor: ";
		cin>>p.numClases;
		cout<<"Desea ingresar los cortes correspondientes al profesor?(Si=1,No=0): ";
		cin>>c;
		if(c==1){
			cortes = llenaCortes(cortes);
		}
		p.cortes=cortes;
		ps.insertarOrd(p,p.cedula);
		cout<<"Desea ingresar otro profesor?(Si=1,No=0): ";
		cin>>d;
	}
	return ps;
}

int main(int argc, char** argv) {
	int pos=1,c=1,n=1,cont=1,e=1;
	profesor p;
	corte cor;
	nota nt;
	contenedor ct;
	evaluacion eva;
	cor.nombre="a";
	/*p.cedula=999999;
	p.apellidos="Apellido1 Apellido2";
	p.nombres="Nombre1 Nombre 2";
	p.numClases=1000;*/
	tema t;
	//t.codigo=1000;
	//t.nombre="temaEjemplo";
	
	//Lista profesores
	lista<profesor> profesores = lista<profesor>(p);
	
	//Lista de temas
	lista<tema> temas = lista<tema>(t);
	
	//Llenar temas
	temas=llenaTemas(temas,t);
	
	//Llenar profesores
	//profesores = llenaProfes(profesores);
	
	//system("cls");
	
	
	//MENU
	bool continuar, seguir = true, seguir1 = true;;
	int op, op1, op2, op3;
	while(seguir){
		seguir1 = true;
		system("cls");
		cout << "\t-----------MENU PRINCIPAL-----------" << endl << endl;
		cout << "\t1. Inserciones." << endl;
		cout << "\t2. Modificaciones." << endl;
		cout << "\t3. Eliminaciones." << endl;
		cout << "\t4. Consultas." << endl;
		cout << "\t5. Generar archivo \"refuerzo.txt\"" << endl;
		cout << "\t6. Salir." << endl << endl;
		cout << "\tSeleccione una opci\xa2n: ";
		cin >> op;
		system("cls");
		switch(op){
			case 1:
				while(seguir1){
					system("cls");
					cout << "\t-----------MENU INSERCIONES-----------" << endl << endl;
					cout << "\t1. Profesores." << endl;
					cout << "\t2. Estudiantes." << endl;
					cout << "\t3. Temas." << endl;
					cout << "\t4. Evaluaciones." << endl;
					cout << "\t5. Volver." << endl << endl;
					cout << "\tSeleccione una opci\xa2n: ";
					cin >> op1;
					system("cls");
					switch(op1){
					case 1:
						cout << "Lo necesario para agregar un profesor, por ahora lo que ya se tenia" << endl << endl;
						profesores = llenaProfes(profesores);
						system("pause");
						seguir1 = false;
						break;
					case 2:
						cout << "Lo necesario para agregar un estudiante" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 3:
						cout << "Lo necesario para agregar un tema" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 4:
						cout << "Lo necesario para agregar una evaluaci\xa2n" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 5:
						seguir1 = false;
						break;
					default:
						cout << "\tOpci\xa2n invalida" << endl;
						system("pause");
						break;	
					}
				}
				break;
			case 2:
				while(seguir1){
					system("cls");
					cout << "\t-----------MENU MODIFICACIONES-----------" << endl << endl;
					cout << "\t1. Profesores." << endl;
					cout << "\t2. Estudiantes." << endl;
					cout << "\t3. Temas." << endl;
					cout << "\t4. Evaluaciones." << endl;
					cout << "\t5. Volver." << endl << endl;
					cout << "\tSeleccione una opci\xa2n: ";
					cin >> op1;
					system("cls");
					switch(op1){
					case 1:
						cout << "Ingresar la cedula del profesor a modificar: " << endl;
						cout << "Modificar al profesor elegido" << endl;
						cout << "El profesor identificado con la cedula (n\xa3mero de la cedula) ha sido modificado exitosamente" << endl << endl;
						system("pause");
						seguir1 = false;
						break;
					case 2:
						cout << "Ingresar el codigo o algo semejante que permita identificar el estudiante: " << endl;
						cout << "Modificar estudiante el estudiante elegido" << endl;
						cout << "El estudiante con el codigo (codigo del estudiante) modificado exitosamente" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 3:
						cout << "Ingresar el codigo del tema que desea modificar: " << endl;
						cout << "Modificar el tema elegido" << endl;
						cout << "El tema con el codigo (codigo del tema) ha sido modificado exitosamente" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 4:
						cout << "Ingrese la cedula del profresor: " << endl;
						cout << "Ingrese el nombre de la evaluaci\xa2n que desea modificar, o algo as\xa1, la vdd no estoy seguro :c" << endl;
						cout << "Evaluaci\xa2n modificada exitosamente" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 5:
						seguir1 = false;
						break;
					default:
						cout << "\tOpci\xa2n invalida" << endl;
						system("pause");
						break;
					}
				}
				break;
			case 3:
				while(seguir1){
					system("cls");
					cout << "\t-----------MENU ELIMINACIONES-----------" << endl << endl;
					cout << "\t1. Profesores." << endl;
					cout << "\t2. Estudiantes." << endl;
					cout << "\t3. Temas." << endl;
					cout << "\t4. Evaluaciones." << endl;
					cout << "\t5. Volver." << endl << endl;
					cout << "\tSeleccione una opci\xa2n: ";
					cin >> op1;
					system("cls");
					switch(op1){
					case 1:
						cout << "Ingresar la cedula del profesor a eliminar: " << endl;
						cout << "El profesor identificado con la cedula (n\xa3mero de la cedula) ha sido eliminado exitosamente" << endl << endl;
						system("pause");
						seguir1 = false;
						break;
					case 2:
						cout << "Ingresar el codigo o algo semejante que permita identificar el estudiante: " << endl;
						cout << "El estudiante con el codigo (codigo del estudiante) eliminado exitosamente" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 3:
						cout << "Ingresar el codigo del tema que desea eliminar: " << endl;
						cout << "El tema con el codigo (codigo del tema) ha sido eliminado exitosamente" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 4:
						cout << "Ingrese la cedula del profresor: " << endl;
						cout << "Ingrese el nombre de la evaluaci\xa2n que desea editar, o algo as\xa1, la vdd no estoy seguro :c x2" << endl;
						cout << "Evaluaci\xa2n eliminada exitosamente" << endl;
						system("pause");
						seguir1 = false;
						break;
					case 5:
						seguir1 = false;
						break;
					default:
						cout << "\tOpci\xa2n invalida" << endl;
						system("pause");
						break;
					}
				}
				break;
			case 4:
				while(seguir1){
					system("cls");
					cout << "\t-----------MENU CONSULTAS-----------" << endl << endl;
					cout << "\t1. Promedio de un estudiante" << endl;
					cout << "\t2. Comportamiento promedio de los estudiantes." << endl;
					cout << "\t3. Comportamiento promedio de los estudiantes asignados a un profesor." << endl;
					cout << "\t4. Profesores con determinado n\xa3mero de clases." << endl;
					cout << "\t5. Estudiantes con nota superior a cierta nota." << endl;
					cout << "\t6. Volver." << endl << endl;
					cout << "\tSeleccione una opci\xa2n: ";
					cin >> op1;
					system("cls");
					switch(op1){
					case 1:
						cout << "Ingresar algo que permmita saber de que estudiante se desea saber su promedio, puede ser el codigo o algo as\xa1" << endl;
						cout << "Ingresar el curso del cual se desea saber el promedio" << endl;
						cout << "Mostrar el promedio del estudiante :v" << endl << endl;
						system("pause");
						seguir1 = false;
						break;
					case 2:
						cout << "Ingresar el curso del cual se desea saber el promedio" << endl;
						cout << "Mostrar el comportamiento promedio de de los estudiantes en los diversos temas" << endl << endl;
						system("pause");
						seguir1 = false;
						break;
					case 3:
						cout << "Ingresar el profesor del cual se desea saber el comportamiento promedio de los estudiantes que tienen clase con \x82l" << endl;
						cout << "Mostrar el comportamiento promedio de de los estudiantes clasificado por temas" << endl << endl;
						system("pause");
						seguir1 = false;
						break;
					case 4:
						cout << "Ingresar el n\xa3mero de clases" << endl;
						cout << "Mostrar la lista de profesores ordenados por cedula, por ahora se muestra la lista como ya estaba c:" << endl << endl;
						//Muestra la lista
						cout<<"Profesores"<<endl;
						for(pos=1;pos<=profesores.get_tam();pos++){
							profesores.recorrer(pos,&p);
							cout<<"Profesor:"<<endl;	
							cout<<"Cedula: "<<p.cedula<<endl;
							cout<<"Apellidos: "<<p.apellidos<<endl;
							cout<<"Nombres: "<<p.nombres<<endl;
							cout<<"Numero de clases: "<<p.numClases<<endl;
							cout<<"Cortes:"<<endl;
							for(c=1;c<=(p.cortes.get_tam());c++){
								p.cortes.recorrer(c,&cor);
								cout<<cor.nombre<<": "<<endl;
							cout<<"Tipos de evaluaciones:"<<endl;
								for(n=1;n<=(cor.evaluaciones.get_tam());n++){
									cor.evaluaciones.recorrer(n,&nt);
									cout<<"Tipo: "<<nt.tipo<<". Porcentaje: "<<nt.porcentaje<<"%"<<endl;
									cout<<"Evaluaciones: "<<endl;
									for(cont=1;cont<=(nt.evaluaciones.get_tam());cont++){
										nt.evaluaciones.recorrer(cont,&ct);
										cout<<"evaluacion #"<<ct.i<<endl;
										for(e=1;e<=(ct.c.get_tam());e++){
											ct.c.recorrer(e,&eva);
											cout<<"Porcentaje: "<<eva.porcentaje<<". Tema: "<<eva.tema<<endl;
										}
									}
								}
							}
						}
						system("pause");
						seguir1 = false;
						break;
					case 5:
						cout << "Ingresar la nota: " << endl;
						cout << "Ingresar el tema: " << endl;
						cout << "Mostrar la lista de los estudiantes que superan dicha nota en el tema ingresado" << endl << endl;
						system("pause");
						seguir1 = false;
						break;
					case 6:
						seguir1 = false;
						break;
					default:
						cout << "\tOpci\xa2n invalida" << endl;
						system("pause");
						break;	
					}
				}
				break;
			case 5:
				cout << "Arcihvo generado exitosamente" << endl;
				system("pause");
				break;
			case 6:
				seguir = false;
				cout << "Se han generado los archivos automaticamente, vuelva pronto";
				break;
			default:
				cout << "\tOpci\xa2n invalida" << endl;
				system("pause");
				break;
		}
	}
	
	
	
/*
	while(pos<=profesores.get_tam()){
		profesores.recorrer(pos,&p);
		cout<<p.cedula<<" "<<p.apellidos<<" "<<p.nombres<<" "<<p.numClases<<endl;
		cout<<p.cortes.
		pos++;
	}*/
	
	/*
	t.codigo=1;
	t.nombre="tipos de algoritmos";
	temas.insertarOrd(t,t.codigo);
	
	t.codigo=2;
	t.nombre="complejidad en memoria";
	temas.insertarOrd(t,t.codigo);
	
	t.codigo=3;
	t.nombre="complejidad en tiempo";
	temas.insertarOrd(t,t.codigo);
	
	t.codigo=6;
	t.nombre="Definicion de orden";
	temas.insertarOrd(t,t.codigo);
	
	t.codigo=8;
	t.nombre="Demostraciones";
	temas.insertarOrd(t,t.codigo);*/
	
	//Muestra la lista
	/*
	while(pos<=temas.get_tam()){
		temas.recorrer(pos,&t);
		cout<< t.codigo<<" "<<t.nombre<<endl;
		pos++;
	}*/
	
	return 0;
}
