#include<iostream>
#define MAX 100
using namespace std;
 int main()
{
	int n;
	int a[100];
	int pos;   
}
   
void XoaPhanTu(int a[], int &n){
    if(n <= 0){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos >= n){
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    XoaPhanTu(a, n, pos);
 cout<<"\n Mang sau khi xoa: ";
 cout<<"\n Hoan thanh "; 
    --n;
}
 

