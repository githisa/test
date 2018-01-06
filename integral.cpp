//数値積分：台形法
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double x_min=0.0;
double x_max=10.0;
int n=10000000;

//integrand
double f(double x){
	return cos(x);
}

//premitive function
double F(double x){
	return sin(x);
}


int main() {
	double S,dS,h,x;
	int i;
	
	cout<<"integral range=["<<setprecision(10)<<x_min<<","<<setprecision(10)<<x_max<<"] # of division="<<n<<endl;
	
	
	h=(x_max-x_min)/n;
	S=(f(x_min)+f(x_max))*h/2.;
	x=x_min+h;
	
	for(i=1;i<n-1;i++){
	S+=f(x)*h;
	x+=h;
	}
	
	cout<<"result="<<setprecision(10)<<S<<endl;
	cout<<"analytic solution="<<setprecision(10)<<F(x_max)-F(x_min)<<endl;
	
}
