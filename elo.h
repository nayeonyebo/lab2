#include<iostream>
#include<math.h>
using namespace std;
class Elo{
	private:
		double K,Ra,Rb;
	public:
		void setK(double k);
		void setRa(double ra);
		void setRb(double rb);
		double getK();
		double getRa();
		double getRb();
		int calra(double sa);
		int calrb(double sa,double tempA);
};
		
