#include <iostream>
#include<ctime>
using namespace std;
crand(time(NULL));
int main()
{
int n;
int matriz[n][n];
int MAX=0,MIN=99,k,l,e,f;
int vmin=5,vmax=99;
cout<<"ingrese el rango de la matriz:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        matriz[i][j]=rand%()vmax;
        if(MAX<matriz[i][j]){
            MAX=matriz[i][j];
            k=i;
            l=j;
        }
        if(MIN>matriz[i][j]){
            MIN=matriz[i][j];
            e=i;
            f=j;
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<matriz[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"EL valor maximo es: matriz["<<k<<"]["<<l<<"]="<<MAX;
cout<<"El valor minimo es: matriz["<<e<<"]["<<f<<"]="<<MIN;
return 0;
}

