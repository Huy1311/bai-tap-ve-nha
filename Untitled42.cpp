#include <iostream.h>
#include <iomanip.h>
#define max 100 
 void input(int b[][],int m, int n)
 {
 for (int i=0;i<m;i++)
 for (int j=0;j<n;j++)
 { cout<<"b["<<i<<"]["<<j<<"]= ";
 cin>>b[i][j]; }
 }
void output(int b[][],int m, int n)
{ for (int i=0;i<m;i++)
 { for (int j=0;j<n;j++)
 cout<<setw(6)<<b[i][j];
cout<<endl; }
}
void out_line_odd(int b[][],int m, int
n)
{ for (int i=0;i<m;i++)
 if (i%2 == 1)
 { for (int j=0;j<n;j++)
 cout<<b[i][j]<<"\t";
 cout<<endl;
 }
}

