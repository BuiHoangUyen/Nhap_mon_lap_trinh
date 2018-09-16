#include <iostream>
using namespace std;
main()
{
	float DTB;
	int i=1;
	while(i==1){
		i=2;
		cout<<"Nhap diem trung binh cua hoc sinh: ";
		cin>>DTB;
		while(i==2&&(DTB<0||DTB>10)){
			cout<<"Nhap lai diem: ";
			cin>>DTB;
		}
		while(i==2&&DTB>=0&&DTB<=10){
			if(DTB>=9){
			cout<<"Hoc sinh dat hang A!"<<"\n"<<"\n";
		} else if(DTB>=7){
			cout<<"Hoc sinh dat hang B!"<<"\n"<<"\n";
		} else if(DTB>=5){
			cout<<"Hoc sinh dat hang C!"<<"\n"<<"\n";
		} else {
			cout<<"Hoc sinh dat hang D!"<<"\n"<<"\n";
		}
		i=1;
		}
	}
}
