#pragma once
using namespace std;
#include <string>

class Vehicles
{
public:
	string placa;
	string descricao;
//construtor
	//Vehicles() {};
	//Vehicles ( string placa,string descricao) 
	Vehicles()
	{
		//string placa = "";
		//string descricao= "";
		placa = "";
		descricao = "";
	}
	//virtual void show(vector< pair< string, int> > root) =0;
	/*{
		int sum_km = 0;
		if(! root.empty())
		{for(int i=0; i< root.size(); )
		root.at()
	}*/
};
class Car : public Vehicles
{
public:
	Car(string a, string b) 
	{ 
		placa = a;
		descricao = b;
	};
	//void show(vector< pair< string, int> > root)
	
};

class Bus : public Vehicles
{
	public:
		Bus(string a, string b)
	{
		placa = a;
		descricao = b;
	};
};

class LightTruck : public Vehicles
{
public:
	LightTruck(string a, string b)
	{
		placa = a;
		descricao = b;
	};
};

class HeavyTruck : public Vehicles
{
public:
	HeavyTruck(string a, string b)
	{
		placa = a;
		descricao = b;
	};
};
