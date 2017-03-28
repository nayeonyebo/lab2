#include<iostream>
#include<fstream>
#include"elo.h"

int main(){
	Elo elo;
	double k,ra,rb,sa,tempA;
	fstream file1;
	fstream file2;
	file1.open("file.in",ios::in);
	file2.open("file.out",ios::out);
	file1>>k>>ra>>rb;
	elo.setK(k);
	elo.setRa(ra);
	elo.setRb(rb);
	file2<<ra<<" ";
	file2<<rb<<endl;
	tempA=elo.getRa();
	while(file1>>sa){
		file2<<elo.calra(sa)<<" ";
		file2<<elo.calrb(sa,tempA)<<endl;
		elo.setRa(elo.calra(sa));
		elo.setRb(elo.calrb(sa,tempA));
		tempA=elo.getRa();
		
	}
	file1.close();
	file2.close();
}
