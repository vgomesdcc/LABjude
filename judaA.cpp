#include <map>
#include <cstring>
#include <iostream>
using namespace std;
int main () {
	int N, qtd=10000;
	string pokemon;
	map<string,int>pokedex;

	while(cin>>pokemon && pokemon!="FIM"){
		pokedex[pokemon]++;
	}

	map<string,int>::iterator it;
	for(it=pokedex.begin(); it!=pokedex.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}
}