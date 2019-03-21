#pragma once
#include <vector>

class Task_base
{
	//protected:
	public:
	
	//std::vector <double> V;
	int N;
	double h;
	double Mu1;
	double Mu2;
	double a;
	double b;
	
	std::vector<double> Running_method(std::vector<double> D_1, std::vector<double> D_2, std::vector<double> D_3, std::vector<double> B, int size);
	virtual double Function(double x) const = 0 ;
	virtual double FunctionDerivative_1(double x) const = 0;
	virtual double FunctionDerivative_2(double x) const = 0;
	void Init_coef_a();
	void Init_coef_b();
	void Init_coef_c();
	void Init_coef_d();

public:
	std::vector <double> Xgrid;
	std::vector <double> Ygrid;
	std::vector <double> a_coef;
	std::vector <double> b_coef;
	std::vector <double> c_coef;
	std::vector <double> d_coef;
	const double PI = 3.141592653589793238462643383279502884197169399375105820974944;
	/*std::vector <double> D1;
	std::vector <double> D2;
	std::vector <double> D3;
	std::vector <double> F;*/
	double S_xi(int i, double x);
	double S_xi_derivative_1(int i, double x);
	double S_xi_derivative_2(int i, double x);
	//Task_base();

};

class Task_test: public Task_base
{
public:
	Task_test(int _N);
	double Function(double x) const;
	double FunctionDerivative_1(double x) const;
	double FunctionDerivative_2(double x) const;
};

class Task_main_1 : public Task_base
{
public:
	Task_main_1(int _N, int choise = 0);
	double Function(double x) const;
	double FunctionDerivative_1(double x) const;
	double FunctionDerivative_2(double x) const;
};