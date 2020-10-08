#include "PrisonArea.h"
#include "Prisoner.h"
#include <iostream>
using namespace std;

int main(){
	
	cout<<"===Random Prison Simulator==="<<endl;
	cout<<"Generates s random moves for an nxm grid"<<endl;
	cout<<"Enter s,n,m"<<endl;
	char c; int s,n,m; 
	cin>>s>>c>>n>>c>>m;	
	cout<<endl;	
	
	PrisonArea* p = new PrisonArea(n,m);
	cout<<"Initial Map"<<endl;
	p->print();
	cout<<endl;	
	for(int i=0; i<s; i++){
		cout<<"Move "<<i+1<<endl;		
		p->getPrisoner()->move();
		p->print();
		cout<<endl;
	}
	return 0;
}
