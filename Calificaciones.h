#ifndef CALIFICACION_H
#define CALIFICACION_H


class Calificacion{
private:
	
	int carnet;
	string codigoCurso;
	double nota;
	
public:
	Calificacion(){
		this->carnet =0;
		this->codigoCurso="";
		this->nota = 0;
	}
	
	Calificacion(int carnet,string codigoCurso, double nota){
		this->carnet=carnet;
		this->codigoCurso=codigoCurso;
		this->nota=nota;
		
	}
		~Calificacion(){}
		
		void setCarnet(int carnet){
			this->carnet=carnet;
		}
			int getCarnet(){
			return this->carnet;
		}
			void setCodigoCurso(){
			this->codigoCurso=codigoCurso;
		}
			string getCodigoCurso(){
			return this->codigoCurso;
		}
			void setNota(){
		    this->nota=nota;
		}
			 double getNota(){
			return this->nota;
		}
};



#endif
