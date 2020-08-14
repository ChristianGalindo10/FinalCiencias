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
	t.nombre="tipos de algoritmos";
	ts.insertarOrd(t,t.codigo);
	
	t.codigo=2;
	t.nombre="complejidad en memoria";
	ts.insertarOrd(t,t.codigo);
	
	t.codigo=3;
	t.nombre="complejidad en tiempo";
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
		cout<<"Desea ingresar los cortes correspondientes al profesor? Si=1,No=0"<<endl;
		cin>>c;
		if(c==1){
			cortes = llenaCortes(cortes);
		}
		p.cortes=cortes;
		ps.insertarOrd(p,p.cedula);
		cout<<"Desea ingresar otro profesor: Si=1,No=0"<<endl;
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
	p.cedula=999999;
	p.apellidos="Apellido1 Apellido2";
	p.nombres="Nombre1 Nombre 2";
	p.numClases=1000;
	tema t;
	t.codigo=1000;
	t.nombre="temaEjemplo";
	
	//Lista profesores
	lista<profesor> profesores = lista<profesor>(p);
	
	//Lista de temas
	lista<tema> temas = lista<tema>(t);
	
	//Llenar temas
	temas=llenaTemas(temas,t);
	
	
	//Llenar profesores
	profesores=llenaProfes(profesores);
	
	system("cls");
	
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
