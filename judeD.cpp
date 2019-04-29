#include <map>
#include <string>
#include <iostream>
using namespace std;
int main () {

	int n, qtd, maior=0;
	string planeta;
	string aux;
	map<string,int>censo;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>planeta;
		censo[planeta]+=1;
		maior=censo[planeta];
		aux=planeta;
	}
	cout<<"\n";
	map<string,int>::iterator it;
	cout<<planeta<<" "<<maior<<"\n";
	censo.erase(planeta);
	for(it=censo.begin(); it!=censo.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}
}