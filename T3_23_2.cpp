// T3_23_2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using  namespace std;
#include "Vehicles.h"
#include <vector>
#include <utility>

int main()
{
	int input;
	int type;
	vector < Vehicles*> vector_Vehicles;
	vector <pair < string, int> > vector_root;

	do
	{
		cout << "UFSC VEHICLE MANAGER SYSTEM(UVMS)" << endl;
		cout << "----------------------------------- " << endl;
		cout << "1.Insert a new vehicle" << endl;
		cout << "2.Insert a route to a vehicle be executed" << endl;
		cout << "3.Show reports(summary)" << endl;
		cout << "4.Show history by vehicle" << endl;
		cout << "0.Quit" << endl;
		cout << "Enter your choice:";
		cin >> input;
		if (input == 1)
		{
			cout << "what is the type of vehicle"
				"(1-Car, 2-Bus, 3-LightTruck, 4-HeavyTruck)?";
			cin >> type;
			//talvez tentar funcion mas ficou complicado... tentar depois
			string placa, descri;
			if (type == 1)
			{
				//Car a("AA", "ford");
				cout << "placa e descricao:";
				cin >> placa >> descri;
				vector_Vehicles.push_back(new Car(placa, descri));
				continue;
			}
			
			if (type == 2)
			{
				cout << "placa e descricao:";
				cin >> placa >> descri;
				vector_Vehicles.push_back(new Bus(placa, descri));
				continue;
			}
			if (type == 3)
			{
				cout << "placa e descricao:";
				cin >> placa >> descri; 
				vector_Vehicles.push_back(new LightTruck(placa, descri));
				continue;
			}
			if (type == 4)
			{
				cout << "placa e descricao:";
				cin >> placa >> descri;
				vector_Vehicles.push_back(new HeavyTruck(placa, descri));
				continue;
			}
			continue;
			cout << "sucessful task!\n";
		}
		if (input == 2)
		{
			cout << "enter the license plate:";
			string placa_input;
			cin >> placa_input;
			for (int i = 0; i < vector_Vehicles.size(); i++)
			{
				if (vector_Vehicles.at(i)->placa == placa_input)
				{
					string route;
					int km;
					cout << "route and km:";
					cin >> route >> km;
					vector_root.push_back(make_pair(route, km));
					vector_Vehicles.at(i)->sum_rota += km;
					cout << "sucessful task!\n";
					continue;
				}
				else
					cout << "not found!";
			}
			
		}
		if (input == 3)
		{
			//metodo virtual: loop no vector vehiicles
			//e listar todos, a sua total km e L combustível 
			if (!vector_Vehicles.empty()) 
			{
				for (int i = 0; i < vector_Vehicles.size(); i++)
				{
					cout << "Number: " << i << endl; 
					vector_Vehicles.at(i)->show();
				}
			}
			continue;
		}
		if (input == 4)
		{
			cout << "enter the license plate:";
			string placa_input;
			cin >> placa_input;
			for (int i = 0; i < vector_Vehicles.size(); i++)
			{
				if (vector_Vehicles.at(i)->placa == placa_input)
				{
					int sum_km = 0;
					for (int j = 0; j < vector_root.size(); j++)
					{
						cout << "route: "<< vector_root.at(j).first<< endl;
						sum_km += vector_root.at(j).second;
					}
					if (!vector_root.empty())
						cout << "sum km:"<< sum_km<< endl;
				}
				else
					cout << "not found!";
			}
			continue;
		}
	} while (input != 0);

	
}
