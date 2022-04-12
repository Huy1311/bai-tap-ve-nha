#include<iostream.h>
using namespace std;
class SANPHAM{
	private:
	     char Masp[12];
	     char tensp[15];
	     float dongia;
	public:
	     SANPHAM(){
     		this->Masp[0]='\0';
     		this->tensp[0]='\0';
     		this->dongia=0;
     	}
~SANPHAM(){
	};
	     void nhap()
	     {
     		cout<<"\nNhap ma san pham:";
     		cin.getline(Masp, 12);
     		cout<<"\nNhap ten san pham :";
     		cin.getline(tensp, 15);
     		cout<<"\nNhap don gia :";
     		cin >>dongia;
     		fflush(stdin);
     	}
     	void xuat()
		 {
 			cout<<"ma san pham: "<<Masp
			       <<"Hang san xuat: "<<tensp
				   <<"ten san pham:  " <<tensp
				   <<"Nhap don gia : "<<dongia <<endl;
				   
 		}	      	      		         
};
int main()
{
	int n;
    cout<<"\nNhap ma san pham:";
    cin>>n;
    SANPHAM a[n];
    fflush(stdin);
    cout<<"\nNhap thong tin san pham : "<<endl;
    for(int i = 0; i < n;i++)
    {
    	cout<<"\n San pham thu: "<<i+1<<endl;
    	a[i].nhap();
    }
    cout<<"\nXuat thong tin san pham : "<<endl;
    for(int i = 0; i < n;i++)
    {
    	cout<<"\n San pham thu: "<<i+1<<endl;
    	a[i].xuat();
    }
}