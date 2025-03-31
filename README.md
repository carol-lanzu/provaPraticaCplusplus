
##Atividade Prática  
###Linguagem C++  
Criar uma estrutura hierárquica de classes que possibilite definir a hierarquia de um sistema de
transporte, conforme segue:  
Logo, tem-se que a super-classe é Vehicle, uma classe que pode ser abstrata, e todas as demais são subclasses instanciáveis (Car, Bus, LightTruck, HeavyTruck). Os construtores de cada classe devem permitir
a inicialização de um objeto considerando (i) a placa do veículo e uma (ii) descrição do veículo (ambos
tipo string)  
Exemplo de instâncias no main:  
…
Car vehicle1(“ABC1234”, “Ford Focus Sedan”);  
Bus vehicle2(“DEF4321”, “Marcopolo 42 assentos”);  
LightTruck vehicle3(“GHI1123, “Caminhão Baú Agrale 15ton”);  
HeavyTruck vehicle4(“ZAS4332”, “Carreta Mercedes 25ton”);  
… vehicle5  
… vehicle6  
… vehicle7  
Pede-se:  
- Elaborar um sistema de modo que seja possível:  
(i) adicionar rotas para cada um das instâncias de veículos acima, e inclusive mais de uma rota, de
forma acumulativa;  
(ii) manter o histórico das rotas de um veículo ao longo de toda a existência do objeto.  
- Elaborar menu que possibilite a inserção de objetos que podem ser criados a partir de cada uma
das subclasses, e calcular o que se pede:  
cout << “UFSC VEHICLE MANAGER SYSTEM (UVMS)” << endl;  
cout << “-----------------------------------” << endl;  
cout << “1. Insert a new vehicle” << endl;  
cout << “2. Insert a route to a vehicle be executed” << endl;  
cout << “3. Show reports (summary)” << endl;  
cout << “4. Show history by vehicle” << endl;  
cout << “0. Quit” << endl;  
Na opção 1, deve ser cadastrado um veículo. Neste momento, o sistema deve solicitar o tipo do
veículo a ser cadastrado (1-Car, 2-Bus, 3-LightTruck, 4-HeavyTruck), seguido da placa e da
descrição do veículo. Armazenar todos os novos objetos em um vector< ? > único. Os dados
devem ser passados para o construtor do objeto, não sendo necessário métodos de acesso para
atualizar as informações acima.  
Na opção 2, deve-se selecionar um veículo pela sua placa, e atribuir uma rota que o mesmo
executará. A rota é simplesmente uma sequência de cidades com as distâncias (sugestão:
vector<pair<string,float>> ). Mais de uma rota pode ser atribuída a um veículo, e o mesmo
deverá armazenar todas. Deve ser inserida no objeto por método de acesso.  
Exemplo de rota em Km de Araranguá para Blumenau, com total de aprox.385 km):  
Laguna 107  
Florianopolis 127  
Blumenau 151  
Na opção 3, (resolver via polimorfismo em tempo de execução) deve-se listar todos os veículos
cadastrados, a sua total kilometragem percorrida (obtida a partir das rotas inseridas), e a
quantitade de combustível utilizada.  
Ignorando o tipo do combustível, considerar as seguintes quantitades de consumo para cada
tipo de veículo:  
Car 12 km/l de combustível  
Bus 7 km/l de combustível  
LightTruck 4 km/l de combustível  
HeavyTruck 2 km/l de combustível  
Na opção 4, apresentar todas as rotas e somatório de kilometragem realizada por um veículo
(pesquisar por placa).  
Obs.:   
- Interpretação por conta do aluno.
- Ao usar alocação dinâmica, não se esqueça de limpar ao sair.
- Respeitar encapsulamento, herança e polimorfismo na POO.
