//Priyen Munien
//214529934

#include <iostream>
using namespace std;

class Fraction{
private:

	int denom;
	int num;

	int HCF(int num1, int denom2){ // finds highest common factor
		if (denom2 != 0){

			return HCF(denom2, num1%denom2);
		}


		else{
			return num1;
		}
	}
void SF(int &anum, int &adenom){ //finding simplest form
		int HCF1 = HCF(anum, adenom);
		anum = anum / HCF1;
		adenom = adenom / HCF1;
	}

public:
	Fraction(int numerator = 1, int denominator = 1){
		denom = denominator;
		num = numerator;
	}

	void SetNumDenom(int numerator, int denominator){// Setting the denominator
		num = numerator;
		denom = denominator;
	}

	void GetNumDenom(int &rnum, int &rdenom){// Getting denom
		rnum = num;
		rdenom = denom;
	}

	int GetNum(){
		return num;
	}

	int GetDenom(){
		return denom;
	}

	Fraction add(int Num2, int Denom2){ // Addition of two numbers
		num = num * Denom2;
		Num2 = Num2*denom;
		Fraction Result(num + Num2, denom * Denom2);
		return Result;
	}


	Fraction sub(int Num2, int Denom2){ 	// Adds the negative of fraction entered
		return add(-Num2, Denom2);
	}

	Fraction Multiply(int Num2, int Denom2){ // multiplies both numerator and denom
		Fraction Result(num * Num2, denom * Denom2);
		return Result;
	}

	Fraction Divide(int Num2, int Denom2){ // Simply dividing
		return Multiply(Denom2, Num2);
	}

	void Print(){
		SF(num, denom);
		cout << num << "/" << denom << endl;
	}
	~Fraction(){
	}
};

int main(){

	Fraction First(5, 21);
	Fraction Result;
	
	Result = First.add(6, 8);
	Result.Print();
}