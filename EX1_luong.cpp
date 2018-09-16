#include <iostream>
using namespace std;
main()
{
	int luong, i=1;
	while(i==1){
		i=2;
		cout<<"Nhap luong: ";
		cin>>luong;
		while(i==2&&luong<0){
			cout<<"Tien luong ko hop le. Ban hay nhap lai! ";
			i=1;
		}
		while(i==2&&luong>0){
			if(luong>15000000){
			cout<<"Thue la: "<<(float)0.3*luong<<"\n";
			cout<<"Luong rong la: "<<(float)(luong-0.3*luong)<<"\n"<<"\n";

			}	else if(luong>=7000000&&luong<15000000){
			cout<<"Thue la: "<<(float)0.2*luong<<"\n";
			cout<<"Luong rong la: "<<(float)0.8*luong<<"\n"<<"\n";
			}	else{
			cout<<"Thue la: "<<(float)0.1*luong<<"\n";
			cout<<"Luong rong la: "<<(float)0.9*luong<<"\n"<<"\n";
			}
			i=1;
		}
		i=1;
	}	
}

