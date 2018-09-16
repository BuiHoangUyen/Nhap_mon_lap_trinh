#include <iostream>
using namespace std;
main()
{
	int n,i=1;
	while(i==1){
		cout<<"Nhap n: ";
		cin>>n;
		if(n<100){
			cout<<"So "<<n<<" nho hon 100!"<<"\n"<<"\n";
		
		} else if(n==100){
			cout<<"So "<<n<<" bang 100!"<<"\n"<<"\n";
		} else {
			cout<<"So "<<n<<" lon hon 100!"<<"\n"<<"\n";
		}
		
	}
}
