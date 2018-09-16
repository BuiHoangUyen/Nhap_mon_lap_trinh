#include <iostream>
using namespace std;
main()
{
	int a,b,c,i=1,t;
	while(i==1){
		cout<<"Nhap so thu nhat: ";
		cin>>a;
		cout<<"Nhap so thu hai: ";
		cin>>b;
		cout<<"Nhap so thu ba: ";
		cin>>c;
		if(a>=b){
			t=a;
		} else {
			t=b;
			
		}
		if(t>=c){
			cout<<t<<" la so lon nhat!"<<"\n"<<"\n";
		} else{
			cout<<c<<" la so lon nhat!"<<"\n"<<"\n";
		}
		
	}	
}
