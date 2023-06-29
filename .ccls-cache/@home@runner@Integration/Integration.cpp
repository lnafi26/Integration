#include <iostream>
using namespace std;

typedef double (*FUNC)(double);

double integral(FUNC f, double x, double y){
	double incr = .0001, sum = 0;
	for (double z = x + (incr / 2); z < y; z += incr){
		sum += f(z) * incr; //calculates area of that rectangle and adds to the total
	} //iterates through each rectangle
	return sum;
}

double single(double x){return x;}

double square(double x){return x * x;}

double cube(double x){return x * x * x;}

int main(){
    cout << "f(x) = x between 1 and 5 integrated is: " << integral(single, 1, 5) << endl;
	cout << "f(x) = x^2 between 1 and 5 integrated is: " << integral(square, 1, 5) << endl;
	cout << "f(x) = x^3 between 1 and 5 integrated is: " << integral(cube, 1, 5) << endl;
	return 0;
}