#include <map>
#include <string>
#include <iostream>
using namespace std;
int main () {

	int n, qtd;
	string jedi;
	map<string,int>censo;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>jedi;
		censo[jedi]++;
	}

	map<string,int>::iterator it;
	for(it=censo.begin(); it!=censo.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}
}