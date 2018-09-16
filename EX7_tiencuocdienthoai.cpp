#include <iostream>
using namespace std;
main()
{
	int phutgoi,i=1;
	while(i==1){
		cout<<"Nhap so phut goi: ";
		cin>>phutgoi;
		while(phutgoi<=0){
		cout<<"Nhap lai phut goi: ";
		cin>>phutgoi;
		}
		while(i==1&&phutgoi>0){
		if(phutgoi<=50){
			cout<<"Tien cuoc dien thoai la: "<<25000+600*phutgoi<<"\n"<<"\n";
		} else if(phutgoi<=200){
			cout<<"Tien cuoc dien thoai la: "<<25000+600*50+400*(phutgoi-50)<<"\n"<<"\n";
		} else{
			cout<<"Tien cuoc dien thoai la: "<<25000+600*50+400*150+200*(phutgoi-200)<<"\n"<<"\n";
		}
		i=2;
		}
		i=1;
	}
}
