#include <iostream>
using namespace std;
main()
{
	int tuoi,i=1;
	while(i==1){
		i=2;
		cout<<"Nhap tuoi: ";
		cin>>tuoi;
		while(i==2&&tuoi<0){
			cout<<"Nhap lai so tuoi! ";
			i=1;
		}
		while(i==2&&tuoi>0){
			
			if(tuoi==16){
			cout<<"Du dieu kien vao 10! "<<"\n"<<"\n";
			} else {
			cout<<"Khong du dieu kien vao 10!"<<"\n"<<"\n";
			}
			i=1;
		}
		i=1;
	}
}
