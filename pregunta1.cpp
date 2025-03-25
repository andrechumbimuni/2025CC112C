#include <iostream>
#include<cstring>
using namespace std;
int main(){
    
    char emp1='ABCDE';
    char emp2='ABCDHIJ';
    char emp3='BCGHIJKL';
    for(int i=0;i<5;i++){
        for(int j=0;j<8;j++){
            if(emp1[i]==emp3[j]){
                emp1[i]=" ";
            }
        }   
    }
    for(int k=0;k<7;k++){
        for(int j=0;j<8;j++){
            if(emp2[k]==emp3[j]){
                emp2=" ";
            }
        }
    }
    cout<<"los proveedores seleccionados son: ";
    for(int k=0;k<7;k++){
        cout<<emp1[k]<<emp2[k];
    }
    return 0;
}
