#include <iostream>
#include <cmath>
#include <iomanip>

class Aritmatika{
	
	public:
		static double tambah(double a, double b);
		static double kali(double a, double b);
		static double kurang(double a, double b);
		static double bagi(double a, double b);
		static int bagi(int a,int b);
		static int sisabagi(int a,int b);
		static double pangkat(double a,double b);
};


double Aritmatika::tambah(double a,double b){
	return a+b;
}

double Aritmatika::kurang(double a, double b){
	return a-b;
}

double Aritmatika::kali(double a, double b){
	return a*b;
}

double Aritmatika::bagi(double a, double b){
	return a / b ;
}

int Aritmatika::bagi(int a, int b){
	return a / b;
}

int Aritmatika::sisabagi(int a, int b){
	return a % b;
}

double Aritmatika::pangkat(double a, double b){
	return pow(a,b);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double a= 12.0, b =5.0;
	int c= 10, d=3;
	
	
	std::cout<<std::fixed;
	
	std::cout<<"a =" << a
			 <<", b ="<<b
			 <<", c ="<<c
			 <<", d ="<<d
			 <<std::endl;
			 
	std::cout<<"a + b \t: "
			 <<Aritmatika::tambah(a,b)<<std::endl;
	std::cout<<"a - b \t: "
			 <<Aritmatika::kurang(a,b)<<std::endl;
	std::cout<<"a * b \t: "
			 <<Aritmatika::kali(a,b)<<std::endl;
	std::cout<<"a / b \t: "
			 <<Aritmatika::bagi(a,b)<<std::endl;
	std::cout<<"c / d \t: "
			 <<Aritmatika::bagi(c,d)<<std::endl;
	std::cout<<"c % d \t: "
			 <<Aritmatika::tambah(c,d)<<std::endl;
	std::cout<<"a ** b \t: "
			 <<Aritmatika::tambah(a,b)<<std::endl;
	
	return 0;
}


