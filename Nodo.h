#ifndef NODO_H
#define NODO_H

class Node{
private:
	Calificacion * calificacion;
	Nodo *siguiente;
	Nodo *anterior;
	
public:
	Nodo(){
		this->calificacion = new Calificacion();
		this->siguiente=NULL;
		this->anterior=NULL;
	}
	Nodo(int carnet, string codigoCurso, double Nota){
		
	}
	
}


#endif
