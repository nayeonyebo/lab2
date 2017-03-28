#include"elo.h"
#include<cmath>
double k,ra,rb;
void Elo::setK(double k){K=k;}
void Elo::setRa(double ra){Ra=ra;}
void Elo::setRb(double rb){Rb=rb;}
double Elo::getK(){return K;}
double Elo::getRa(){return Ra;}
double Elo::getRb(){return Rb;}
int Elo::calra(double sa){
	int newra;
	newra=round(getRa()+getK()*(sa-(1/(1+pow(10,(getRb()-getRa())/400)))));
	return newra;
}
int Elo::calrb(double sa,double tempA){
	int newrb;
	newrb=round(getRb()+getK()*((1-sa)-(1/(1+pow(10,(tempA-getRb())/400)))));
	return newrb;
}	
