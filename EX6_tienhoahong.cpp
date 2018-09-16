#include <iostream>
using namespace std;
main()
{
	int doanhso, i=1;
	while(i==1){
		cout<<"Nhap doanh so ban hang: ";
		cin>>doanhso;
		while(doanhso<0){
			cout<<"Nhap lai doanh so: ";
			cin>>doanhso;
		}
		while(i==1&&doanhso>=0){
			if(doanhso<100000000){
				cout<<"Tien hoa hong: "<<(float)0.05*doanhso<<"\n"<<"\n";
			} else if(doanhso<=300000000){
				cout<<"Tien hoa hong: "<<(float)0.1*doanhso<<"\n"<<"\n";
			} else {
				cout<<"Tien hoa hong: "<<(float)0.2*doanhso<<"\n"<<"\n";
			}
			i=2;
		}
		i=1;
	}
}
