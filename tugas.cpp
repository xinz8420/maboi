#include<iostream>

using namespace std;

int main(){
    int row;
    int matriks[4];

    for(row=0;row<4;row++){
        matriks[row]=2*row+1;
        cout<<matriks[row]<<" ";
    }
    return 0;
}
