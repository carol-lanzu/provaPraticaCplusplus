#pragma once
using namespace std;
#include <string>

class Vehicles
{
public:
	string placa;
	string descricao;
	int sum_rota;
//construtor
	Vehicles()
	{
		placa = "";
		descricao = "";
		sum_rota = 0;
	}
	virtual void show() = 0;
	
};
class Car : public Vehicles
{
public:
	Car(string a, string b) 
	{ 
		placa = a;
		descricao = b;
	};
	void show()
	{
		cout << "the total km of the routes are: " << sum_rota << " km" << endl;
		cout << "the sum of gas is:"<< sum_rota / 12 << " L" << endl;
	}
	
};

class Bus : public Vehicles
{
	public:
		Bus(string a, string b)
	{
		placa = a;
		descricao = b;
	};
		void show()
		{
			cout << "the total km of the routes are: " << sum_rota << " km" << endl;
			cout << "the sum of gas is:" << sum_rota / 7 << " L" << endl;
		}
};

class LightTruck : public Vehicles
{
public:
	LightTruck(string a, string b)
	{
		placa = a;
		descricao = b;
	};
	void show()
	{
		cout << "the total km of the routes are: " << sum_rota << " km" << endl;
		cout << "the sum of gas is:" << sum_rota / 4 << " L" << endl;
	}
};

class HeavyTruck : public Vehicles
{
public:
	HeavyTruck(string a, string b)
	{
		placa = a;
		descricao = b;
	};
	void show()
	{
		cout << "the total km of the routes are: " << sum_rota << " km" << endl;
		cout << "the sum of gas is:" << sum_rota / 2 << " L" << endl;
	}
};
