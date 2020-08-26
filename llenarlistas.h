/**
  *@file llenarlistas.h
  *@version 1.0
  *@date 24/08/2020
  *@title Clase LlenarListas
  *@brief Clase para manejar todas las listas utilizadas en el programa
  */


#ifndef LLENARLISTAS_H
#define LLENARLISTAS_H
using namespace std;

/**
  *@brief Clase para manipular las listas (inserci�n, modificaci�n, eliminaci�n)
  */
class LlenarListas{
	public:
		/**
	  	  *@brief Inserta temas
	  	  *@param ts Lista de temas para ingresar el tema
	  	  *@return Lista de tipo Tema con el(os) nuevo(s) tema(s) ingresado(s) 
	  	  */
		lista<Tema> llenaTemas(lista<Tema> ts);
		
		/**
	  	  *@brief Inserta profesores
	  	  *@param ps Lista de profesores para ingresar el profesor
	  	  *@return Lista de tipo Profesor con el(os) nuevo(s) profesor(es) ingresado(s) 
	  	  */
		lista<Profesor> llenaProfes(lista<Profesor> ps);
		
		/**
	  	  *@brief Inserta cortes
	  	  *@param cs Lista de cortes asociada a un profesor para ingresar el corte
	  	  *@return Lista de tipo Corte con el(os) nuevo(s) cortes(s) ingresado(s) 
	  	  */
		lista<Corte> llenaCortes(lista<Corte> cs);
		
		/**
	  	  *@brief Inserta notas
	  	  *@param ns Lista de notas asociada a un corte para ingresar el nuevo tipo de evaluaci�n
	  	  *@return Lista de tipo Nota con el(os) nuevo(s) tipo(s) de evaluaci�n(es) ingresado(s) 
	  	  */
		lista<Nota> llenaNotas(lista<Nota> ns);
		
		/**
	  	  *@brief Inserta contenedores para guardar las evaluaciones de un tipo de evaluaci�n
	  	  *@param cs Lista de contenedores para ingresar un nuevo contenedor
	  	  *@return Lista de tipo Contenedor con la(s) nueva(s) evaluaci�n(es) ingresada(s) 
	  	  */
		lista<Contenedor> llenaContenedores(lista<Contenedor> cs);
		
		/**
	  	  *@brief Inserta preguntas a una evaluaci�n dada
	  	  *@param es Lista de preguntas relacionadas a una evaluaci�n
	  	  *@return Lista de tipo Evaluaci�n con la(s) nueva(s) preguntas(s) ingresada(s) 
	  	  */
		lista<Evaluacion> llenaEvaluaciones(lista<Evaluacion> es);
		
		/**
	  	  *@brief Modifica un profesor
	  	  *@param ps Lista de profesores donde se va a modificar el profesor
	  	  *@return Lista de tipo Profesor con el(os) profesores(s) modificados(s) 
	  	  */
		lista<Profesor> modificarProfe(lista<Profesor> ps);
		
		/**
	  	  *@brief Modifica un corte de un profesor dado
	  	  *@param cs Lista de cortes asociados a un profesor
	  	  *@return Lista de tipo Corte con el(os) corte(s) modificados(s) 
	  	  */
		lista<Corte> modificarCorte(lista<Corte> cs);
		
		/**
	  	  *@brief Modifica un tipo de evaluaci�n de un corte dado
	  	  *@param ns Lista de tipos de evaluaci�n asociados a un corte
	  	  *@return Lista de tipo Nota con el(os) tipo(s) de evaluaci�n(es) modificados(s) 
	  	  */
		lista<Nota> modificarNota(lista<Nota> ns);
		
		/**
	  	  *@brief Modifica un tema
	  	  *@param ts Lista de temas donde se va a modificar el tema
	  	  *@return Lista de tipo Tema con el(os) tema(s) modificados(s) 
	  	  */
		lista<Tema> modificarTema(lista<Tema> ts);
		
		/**
	  	  *@brief Modifica una evaluaci�n
	  	  *@param cs Lista de contenedores(evaluaciones)
	  	  *@return Lista de tipo Contenedor con la(s) evaluaci�n(es) modificadas(s) 
	  	  */
		lista<Contenedor> modificarContenedor(lista<Contenedor> cs);
		
		/**
	  	  *@brief Modifica una pregunta de una evaluaci�n dada
	  	  *@param es Lista de evaluaciones(preguntas de una evaluaci�n)
	  	  *@return Lista de tipo Evaluacion con la(s) pregunta(s) modificadas(s) 
	  	  */
		lista<Evaluacion> modificarEvaluacion(lista<Evaluacion> es);
		
		/**
	  	  *@brief Elimina un profesor
	  	  *@param ps Lista de profesores donde se desea eliminar el profesor
	  	  *@return Lista de tipo Profesor con el(os) profesor(es) eliminado(s) 
	  	  */
		lista<Profesor> eliminarProfesor(lista<Profesor> ps);
		
		/**
	  	  *@brief Inserta cursos
	  	  *@param cs Lista de cursos para ingresar el nuevo curso
	  	  *@return Lista de tipo Curso con el(os) nuevo(s) curso(s) ingresado(s) 
	  	  */
		lista<Curso> llenaCursos(lista<Curso> cs);
		
		/**
	  	  *@brief Inserta estudiantes
	  	  *@param es Lista de estudiantes asociados a un curso
	  	  *@return Lista de tipo Estudiante con el(os) nuevo(s) estudiante(s) ingresado(s) 
	  	  */
		lista<Estudiante> llenaEstudiantes(lista<Estudiante> es);
		
		/**
	  	  *@brief Elimina un estudiante
	  	  *@param es Lista de estudiantes donde se desea eliminar el estudiante
	  	  *@return Lista de tipo Estudiante con el(os) estudiante(s) eliminado(s) 
	  	  */
		lista<Estudiante> eliminarEstudiante(lista<Estudiante> es);
		
		/**
	  	  *@brief Elimina un curso
	  	  *@param cs Lista de cursos donde se desea eliminar el curso
	  	  *@return Lista de tipo Curso con el(os) curso(s) eliminado(s) 
	  	  */
		lista<Curso> eliminarCurso(lista<Curso> cs);
		
		/**
	  	  *@brief Elimina un tema
	  	  *@param ts Lista de temas donde se desea eliminar el tema
	  	  *@return Lista de tipo Tema con el(os) tema(s) eliminado(s) 
	  	  */
		lista<Tema> eliminarTema(lista<Tema> ts);
		
		/**
	  	  *@brief Llena las clases para el manejo de parciales
	  	  *@param ps Lista de profesores
	  	  *@param cr Lista de cursos
	  	  *@param cs Lista de clases
	  	  *@param curs Lista de estructuras Cur donde deben estar los archivos de los parciales
	  	  *@return Lista de tipo Tema con el(os) nuevo(s) tema(s) ingresado(s) 
	  	  */
		lista<Clase> llenarClases(lista<Profesor> ps,lista<Curso> cr,lista<Clase> cs,lista<Cur> curs);
};

lista<Clase> LlenarListas::llenarClases(lista<Profesor> ps,lista<Curso> cr,lista<Clase> cs,lista<Cur> curs){
	Clase c;
	Profesor p;
	Curso curso;
	Cur cur;
	for(int i=1;i<=ps.get_tam();i++){
		ps.recorrer(i,&p);
		c.setCedula(p.getCedula());
		for(int j=1;j<=cr.get_tam();j++){
			cr.recorrer(j,&curso);
			if(curso.getProfesor()==p.getCedula()){
				cur.curso=curso.getCodigo();
				curs.insertarOrd(cur,curs.get_tam()+1);
				c.setCursos(curs);
			}
		}
		cs.insertarOrd(c,cs.get_tam()+1);
	}
	return cs;
}

lista<Curso> LlenarListas::llenaCursos(lista<Curso> cs){
	Curso c;
	int d=1,d2=1;
	string cod;
	Estudiante e;
	long long int profesor;
	e.setCodigo(99999999999);
	lista<Estudiante> es = lista<Estudiante>(e);
	while(d!=0){
		cout<<"Digite el n\xa3mero de c\x82" << "dula del profesor a cargo: ";
		cin>>profesor;
		c.setProfesor(profesor);
		cout<<"Digite el c\xa2" << "digo de la clase: ";
		cin>>cod;
		c.setCodigo(cod);
		cout<<"\xa8" << "Desea ingresar estudiantes a la clase? S\xa1=1, No=0";
		cin>>d2;
		if(d2==1){
			c.setListaEstudiantes(llenaEstudiantes(es));
		}
		cs.insertarOrd(c,cs.get_tam()+1);
		cout << "Clase insertada exitosamente" << endl;
		cout<<"\xa8" << "Desea ingresar otra clase? S\xa1=1, No=0";
		cin>>d;
	}
	return cs;
}

lista<Estudiante> LlenarListas::llenaEstudiantes(lista<Estudiante> es){
	Estudiante e;
	long long int codigo;
	char nombres[50];
	char apellidos[50];
	int d=1;
	while(d!=0){
		cout<<"C\xa2" << "digo del estudiante: ";
		cin>>codigo;
		e.setCodigo(codigo);
		cout<<"Apellidos del estudiante: ";
		cin.ignore();
		cin.getline(apellidos, 50);
		for (int i = 0; i < 50; i++) { 
        	e.setApellidos(i,apellidos[i]);
    	}
    	cout<<"Nombres del estudiante: ";
    	cin.getline(nombres,50);
    	for (int i = 0; i < 50; i++) { 
        	e.setNombres(i,nombres[i]);
    	}
    	es.insertarOrd(e,e.getCodigo());
    	cout << "Estudiante insertado exitosamente" << endl;
    	cout<<"\xa8" << "Desea ingresar otro estudiante? S\xa1=1, No=0: ";
    	cin>>d;
	}
	return es;
}


lista<Tema> LlenarListas::llenaTemas(lista<Tema> ts){
	cin.ignore();
	Tema t;
	int d=1,cod;
	char tipo[50];
	while(d!=0){
		cout<<"Digite el c\xa2" << "digo del tema: ";
		cin>>cod;
		t.setCodigo(cod);
		cout<<"Digite el tema: ";
		cin.ignore();
		cin.getline(tipo, 50);
		for (int i = 0; i < 50; i++) { 
        	t.setNombre(i,tipo[i]);
    	}
		ts.insertarOrd(t,t.getCodigo());
		cout << "Tema insertado exitosamente" << endl;
		cout<<"\xa8" << "Desea ingresar otro tema? S\xa1=1, No=0: ";
		cin>>d; 	
	}
	return ts;
}
lista<Profesor> LlenarListas::llenaProfes(lista<Profesor> ps){
	cin.ignore();
	int d=1,c=0;
	Corte cor;
	cor.setNombre("CorteFinalFinal");
	while(d!=0){
		char apellidos[50];
		char nombres[50];
		long long int cedula;
		int numClases;
		lista<Corte> cortes = lista<Corte>(cor);
		Profesor p;
		cout<<"Digite los nombres del profesor: ";
		//cin.ignore();
		cin.getline(nombres, 50);
		for(int i=0;i<50;i++){
			p.setNombres(i,nombres[i]);
		}
		cout<<"Digite los apellidos del profesor: ";
		//cin.ignore();
		cin.getline(apellidos, 50);
		for(int i=0;i<50;i++){
			p.setApellidos(i,apellidos[i]);
		}
		cout<<"Digite la c\x82" << "dula del profesor: ";
		cin>>cedula;
		p.setCedula(cedula);
		cout<<"Digite el n\xa3mero de clases del profesor: ";
		cin>>numClases;
		p.setNumClases(numClases);
		cout<<"\xa8" << "Desea ingresar los cortes correspondientes al profesor? S\xa1=1,No=0"<<endl;
		cin>>c;
		if(c==1){
			cortes = llenaCortes(cortes);
		}
		p.setListaCorte(cortes);
		ps.insertarOrd(p,p.getCedula());
		cout << "Profesor insertado exitosamente" << endl;
		cout<<"\xa8" << "Desea ingresar otro profesor? S\xa1=1,No=0"<<endl;
		cin>>d;
		cin.ignore();
	}
	return ps;
}
lista<Corte> LlenarListas::llenaCortes(lista<Corte> cs){
	int c=1,e=0;
	Nota n;
	string nombre;
	n.setPorcentaje(1000);
	n.setTipo("TipoEjemplo");
	while(c!=0){
		lista<Nota> notas = lista<Nota>(n);
		Corte cor;
		cout<<"Digite el nombre del corte: ";
		cin>>nombre;
		cor.setNombre(nombre);
		cout<<"\xa8" << "Desea insertar los tipos de evaluaci\xa2n con su repectivo porcentaje? S\xa1=1, No=0"<<endl;
		cin>>e;
		if(e==1){
			notas=llenaNotas(notas);
		} 
		cor.setEvaluaciones(notas);
		cs.insertarOrd(cor,cs.get_tam()+1);
		cout<<"\xa8" << "Desea ingresar otro corte? S\xa1=1, No=0"<<endl;
		cin>>c;
	}
	return cs;
}
lista<Nota> LlenarListas::llenaNotas(lista<Nota> ns){
	int nc=1,e=1;
	Contenedor cont;
	cont.setI(9999999);
	string tipo;
	int porcentaje;
	while(nc!=0){
		lista<Contenedor> contenedores = lista<Contenedor>(cont);
		Nota n;
		cout<<"Digite el tipo de evaluaci\xa2n: ";
		cin>>tipo;
		n.setTipo(tipo);
		cout<<endl;
		cout<<"Digite el porcentaje de evaluaci\xa2n: ";
		cin>>porcentaje;
		n.setPorcentaje(porcentaje);
		cout<<endl;
		cout<<"\xa8" << "Desea insertar evaluaciones? S\xa1=1, No=0"<<endl;
		cin>>e;
		if(e==1){
			contenedores = llenaContenedores(contenedores);
		}
		n.setListaContenedor(contenedores);
		ns.insertarOrd(n,ns.get_tam()+1);
		cout<<"\xa8" << "Desea ingresar otro tipo de evaluaci\xa2n? S\xa1=1, No=0"<<endl;
		cin>>nc;
	}
	return ns;
}
lista<Contenedor> LlenarListas::llenaContenedores(lista<Contenedor> cs){
	int c=1;
	Evaluacion eva;
	eva.setPorcentaje(99999);
	eva.setTema(1000);
	while(c!=0){
		lista<Evaluacion> evaluaciones = lista<Evaluacion>(eva);
		Contenedor cont;
		cont.setI(cs.get_tam()+1);
		cout<<"Insertando evaluaci\xa2n #"<<cont.getI()<<endl;
		evaluaciones=llenaEvaluaciones(evaluaciones);
		cont.setListaEvaluacion(evaluaciones);
		cs.insertarOrd(cont,cont.getI());
		cout<<"\xa8" << "Desea insertar otra evaluaci\xa2n de este tipo? S\xa1=1,No=0"<<endl;
		cin>>c;
	}
	return cs;
}
lista<Evaluacion> LlenarListas::llenaEvaluaciones(lista<Evaluacion> es){
	int e=1;
	int porcentaje;
	int tema;
	while(e!=0){
		Evaluacion eva;
		cout<<"Insertando pregunta "<<es.get_tam()+1<<endl;
		cout<<"Inserte porcentaje: ";
		cin>>porcentaje;
		eva.setPorcentaje(porcentaje);
		cout<<endl;
		cout<<"Inserte tema: ";
		cin>>tema;
		eva.setTema(tema);
		es.insertarOrd(eva,es.get_tam()+1);
		cout<<"\xa8" << "Desea insertar otra pregunta? S\xa1=1,No=0"<<endl;
		cin>>e;
	}
	return es;
}

lista<Profesor> LlenarListas::modificarProfe(lista<Profesor> ps){
	Profesor p;
	long long int cedula;
	int d=1;
	while(d!=0){	
		for(int i=1;i<=ps.get_tam();i++){
		ps.recorrer(i,&p);
		cout<<p.getCedula()<<". "<<p.getApellidos()<<" "<<p.getNombres()<<" N\xa3mero de Cursos: "<<p.getNumClases()<<endl;
		}
		cout<<"Digite la c\x82" << "dula del profesor a modificar: ";
		cin>>cedula;
		ps.buscar(cedula,&p);
		cout<<endl;
		cout<<"\xa8Que desea modificar?"<<endl;
		cout<<"1. N\xa3mero de clases"<<endl;
		cout<<"2. Cortes"<<endl;
		cout<<"0. Volver"<<endl;
		cin>>d;
		if(d==1){
			int nc;
			cout<<"Ingrese el nuevo valor: ";
			cin>>nc;
			p.setNumClases(nc);
			ps.cambiar(cedula,p);
		}else{
			if(d==2){
				p.setListaCorte(modificarCorte(p.getListaCorte()));
				ps.cambiar(cedula,p);
			}
		}
		cout << "El profesor identificado con la c\x82" << "dula "<<cedula<<" ha sido modificado exitosamente" << endl;
		cout<<"\xa8" << "Desea modificar otro profesor? S\xa1=1, No=0 :";
		cin>>d;
	}
	return ps;
}

lista<Corte> LlenarListas::modificarCorte(lista<Corte> cs){
	Corte cor;
	int d=1,pos=0;
		while(d!=0){
			for(int i=1;i<=cs.get_tam();i++){
				cs.recorrer(i,&cor);
				cout<<i<<"."<<cor.getNombre()<<endl;
			}
			cout<<"Desea: "<<endl;
			cout<<"1. Agregar un corte"<<endl;
			cout<<"2. Eliminar un corte"<<endl;
			cout<<"3. Modificar un corte"<<endl;
			cout<<"0. Volver"<<endl;
			cin>>d;
			if(d==1){
				cs=llenaCortes(cs);
			}else{
				if(d==2){
					if(!cs.lista_vacia()){
						cout<<"Digite la posici\xa2n del corte a eliminar"<<endl;
						cin>>pos;
						if(cs.borrar(pos)){
							cout<<"Corte eliminado correctamente"<<endl;
						}else{
							cout<<"No se pudo eliminar el corte"<<endl;
						}
					}else{
						cout<<"El profesor no tiene cortes."<<endl;
					}
				}else{
					if(d==3){
						if(!cs.lista_vacia()){
							cout<<"Digite la posici\xa2n del corte a modificar"<<endl;
							cin>>pos;
							cs.buscar(pos,&cor);
							cor.setEvaluaciones(modificarNota(cor.getListaNotas()));
							cs.cambiar(pos,cor);
						}else{
							cout<<"El profesor no tiene cortes."<<endl;
						}
				}
			}
			cout<<"\xa8" << "Desea modificar otro corte S\xa1=1, No=0: ";
			cin>>d;
		}
	}
	return cs;
}

lista<Nota> LlenarListas::modificarNota(lista<Nota> ns){
	Nota nt;
	string tipo;
	int porcentaje;
	int d=1,d2=1,pos=0;
	while(d!=0){
		for(int i=1;i<=ns.get_tam();i++){
			ns.recorrer(i,&nt);
			cout<<i<<"."<<nt.getTipo()<<" "<<nt.getPorcentaje()<<endl;
			}
		cout<<"Desea: "<<endl;
		cout<<"1. Agregar un tipo de evaluaci\xa2n"<<endl;
		cout<<"2. Eliminar un tipo de evaluaci\xa2n"<<endl;
		cout<<"3. Modificar un tipo de evaluaci\xa2n"<<endl;
		cout<<"0. Volver"<<endl;
		cin>>d;
		if(d==1){
			ns=llenaNotas(ns);
		}else{
			if(d==2){
				if(!ns.lista_vacia()){
					cout<<"Digite la posici\xa2n del tipo de evaluaci\xa2n a eliminar"<<endl;
					cin>>pos;
					if(ns.borrar(pos)){
						cout<<"Tipo de evaluaci\xa2n eliminado correctamente"<<endl;
					}else{
						cout<<"No se pudo eliminar el tipo de evaluaci\xa2n"<<endl;
					}
				}else{
					cout<<"El corte seleccionado no tiene tipos de evaluaci\xa2n"<<endl;
				}
			}else{
				if(d==3){
					if(!ns.lista_vacia()){
						cout<<"Digite la posici\xa2n del tipo de evaluaci\xa2n a modificar: ";
						cin>>pos;
						cout<<"Ingrese el tipo de evaluaci\xa2n: ";
						cin>>tipo;
						nt.setTipo(tipo);
						cout<<endl;
						cout<<"Digite el porcentaje: ";
						cin>>porcentaje;
						cout<<endl;
						cout<<"\xa8" << "Desea modificar las evaluaciones correspondientes? S\xa1=1, No=0:";
						cin>>d2;
						if(d2==1){
							nt.setListaContenedor(modificarContenedor(nt.getListaContenedor()));
						}
						nt.setPorcentaje(porcentaje);
						ns.cambiar(pos,nt);
					}else{
						cout<<"El corte no tiene tipos de evaluaci\xa2n"<<endl;
					}
				}
			}	
		}
		cout<<"\xa8" << "Desea modificar otro tipo de evaluaci\xa2n? S\xa1=1, No=0: ";
			cin>>d;
	}
	return ns;
}

lista<Contenedor> LlenarListas::modificarContenedor(lista<Contenedor> cs){
	Contenedor ct;
	int d=1,pos=0;
	while(d!=0){
		for(int i=1;i<=cs.get_tam();i++){
			cs.recorrer(i,&ct);
			cout<<"Evaluaci\xa2n #"<<ct.getI()<<endl;
		}
		cout<<"Desea: "<<endl;
		cout<<"1. Agregar una evaluaci\xa2n"<<endl;
		cout<<"2. Eliminar una evaluaci\xa2n"<<endl;
		cout<<"3. Modificar una evaluaci\xa2n"<<endl;
		cout<<"0. Volver"<<endl;
		cin>>d;
		if(d==1){
			cs=llenaContenedores(cs);
		}else{
			if(d==2){
				if(!cs.lista_vacia()){
					cout<<"Digite evaluaci\xa2n a eliminar"<<endl;
					cin>>pos;
					if(cs.borrar(pos)){
						cout<<"Evaluaci\xa2n eliminada correctamente"<<endl;
					}else{
						cout<<"No se pudo eliminar la evaluaci\xa2n"<<endl;
					}
				}else{
					cout<<"No se encuentran evaluaciones"<<endl;
				}
			}else{
				if(d==3){
					if(!cs.lista_vacia()){
						cout<<"Digite la posici\xa2n de la evaluaci\xa2n a modificar: ";
						cin>>pos;
						ct.setListaEvaluacion(modificarEvaluacion(ct.getListaEvaluacion()));
						cs.cambiar(pos,ct);
					}else{
						cout<<"No se encuentran evaluaciones"<<endl;
					}
				}
			}	
		}
		cout<<"\xa8" < "Desea modificar otro tipo de evaluaci\xa2n? S\xa1=1, No=0: ";
		cin>>d;
	}
	return cs;
}

lista<Evaluacion> LlenarListas::modificarEvaluacion(lista<Evaluacion> es){
	Evaluacion eva;
	int d=1,pos=0,porcentaje,tema;
	while(d!=0){
		for(int i=1;i<=es.get_tam();i++){
			es.recorrer(i,&eva);
			cout<<i<<". Porcentaje:"<<eva.getPorcentaje()<<"%, Tema:"<<eva.getTema()<<endl;
		}
		cout<<"Desea: "<<endl;
		cout<<"1. Agregar una pregunta a la evaluaci\xa2n"<<endl;
		cout<<"2. Eliminar una pregunta de la evaluaci\xa2n"<<endl;
		cout<<"3. Modificar una pregunta de la evaluaci\xa2n"<<endl;
		cout<<"0. Volver"<<endl;
		cin>>d;
		if(d==1){
			es=llenaEvaluaciones(es);
		}else{
			if(d==2){
				if(!es.lista_vacia()){
					cout<<"Digite la pregunta a eliminar"<<endl;
					cin>>pos;
					if(es.borrar(pos)){
						cout<<"Pregunta eliminada correctamente"<<endl;
					}else{
						cout<<"No se pudo eliminar la pregunta"<<endl;
					}
				}else{
					cout<<"No se encuentran preguntas"<<endl;
				}
			}else{
				if(d==3){
					if(!es.lista_vacia()){
						cout<<"Digite la pregunta a modificar: ";
						cin>>pos;
						es.buscar(pos,&eva);
						cout<<"Digite el porcentaje: ";
						cin>>porcentaje;
						eva.setPorcentaje(porcentaje);
						cout<<endl;
						cout<<"Digite el tema: ";
						cin>>tema;
						eva.setTema(tema);
						es.cambiar(pos,eva);
					}else{
						cout<<"No se encuentran preguntas"<<endl;
					}
				}
			}	
		}
		cout<<"\xa8" << "Desea modificar otra pregunta? S\xa1=1, No=0: ";
		cin>>d;
	}
	return es;
}

lista<Tema> LlenarListas::modificarTema(lista<Tema> ts){
	Tema t;
	int d=1,pos;
	char tema[50];
	while(d!=0){
		for(int i=1;i<=ts.get_tam();i++){
			ts.recorrer(i,&t);
			cout<<t.getCodigo()<<". "<<t.getNombre()<<endl;
		}
		cout<<"Digite el c\xa2" << "digo del tema a modificar: "<<endl;
		cin>>pos;
		ts.buscar(pos,&t);
		cout<<endl;
		cout<<"Digite el tema: ";
		cin.ignore();
		cin.getline(tema,50);
		for(int j=0;j<50;j++){
			t.setNombre(j,tema[j]);
		}
		ts.cambiar(pos,t);
		cout<<"\xa8" << "Desea modificar otro tema? S\xa1=1, No=0: ";
		cin>>d;
	}
	return ts;
}

lista<Profesor> LlenarListas::eliminarProfesor(lista<Profesor> ps){
	Profesor p;
	long long int cedula;
	int d=1;
	while(d!=0){	
		for(int i=1;i<=ps.get_tam();i++){
		ps.recorrer(i,&p);
		cout<<p.getCedula()<<". "<<p.getApellidos()<<p.getNombres()<<" N\xa3mero de clases: "<<p.getNumClases()<<endl;
		}
		cout<<"Digite la c\x82" << "dula del profesor a eliminar: ";
		cin>>cedula;
		if(ps.borrar(cedula)){
			cout<<"Profesor eliminado correctamente"<<endl;
		}else{
			cout<<"No se pudo eliminar el profesor"<<endl;
		}
		cout<<"\xa8" << "Desea eliminar otro profesor? S\xa1=1, No=0: ";
		cin>>d;
	}
	return ps;	
}

lista<Curso> LlenarListas::eliminarCurso(lista<Curso> cs){
	Curso cl;
	int d=1,pos;
	while(d!=0){
		for(int i=1;i<=cs.get_tam();i++){
			cs.recorrer(i,&cl);
			cout<<i<<". "<<cl.getCodigo()<<endl;
		}
		cout<<"Digite la posici\xa2n de la clase a eliminar: ";
		cin>>pos;
		if(cs.borrar(pos)){
			cout<<endl;
			cout<<"Clase eliminada correctamente"<<endl;
		}else{
			cout<<endl;
			cout<<"No se pudo eliminar la clase"<<endl;
		}
		cout<<"\xa8" << "Desea eliminar otra clase? S\xa1=1, No=0: ";
		cin>>d;
	}
	return cs;
}

lista<Estudiante> LlenarListas::eliminarEstudiante(lista<Estudiante> es){
	int d=1;
	long long int cod;
	Estudiante e;
	while(d!=0){
		for(int j=1;j<=es.get_tam();j++){
			es.recorrer(j,&e);
			cout<<e.getCodigo()<<" "<<e.getApellidos()<<" "<<e.getNombres()<<endl;
		}
		cout<<"Digite el c\xa2" << "digo del estudiante a eliminar: ";
		cin>>cod;
		if(es.borrar(cod)){
			cout<<endl;
			cout<<"Estudiante eliminado correctamente"<<endl;
		}else{
			cout<<"No se pudo eliminar el estudiante"<<endl;
		}
		
		cout<<"\xa8" << "Desea eliminar otro estudiante? S\xa1=1, No=0: ";
		cin>>d;
	}
	return es;
}

lista<Tema> LlenarListas::eliminarTema(lista<Tema> ts){
	int d=1;
	int cod;
	Tema t;
	while(d!=0){
		for(int j=1;j<=ts.get_tam();j++){
			ts.recorrer(j,&t);
			cout<<t.getCodigo()<<". "<<t.getNombre()<<endl;
		}
		cout<<"Digite el c\xa2" << "digo del tema a eliminar: ";
		cin>>cod;
		if(ts.borrar(cod)){
			cout<<endl;
			cout<<"Tema eliminado correctamente"<<endl;
		}else{
			cout<<"No se pudo eliminar el tema"<<endl;
		}
		cout<<"\xa8" << "Desea eliminar otro tema? S\xa1=1, No=0: ";
		cin>>d;
	}
	return ts;
}

#endif
