#include <map>
#include <string>
#include <iostream>
using namespace std;
int main () {

	int n, qtd;
	string empresa;
	map<string,int>bolsa;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>empresa>>qtd;
		bolsa[empresa]+=qtd;
	}

	map<string,int>::iterator it;
	for(it=bolsa.begin(); it!=bolsa.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}
}