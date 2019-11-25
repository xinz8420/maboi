#include<iostream>

using namespace std;

void tampilArray(int n, int arr[]){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int tabInt[7] = {33,45,21,17,64,59,43};
    int i,data_sisip,j;

    for(i=1;i<7;i++){
        data_sisip = tabInt[i];
        j=i-1;

        while((data_sisip<tabInt[j])&&(j>=0)){
            tabInt[j+1]=tabInt[j];
            j--;
        }
        tabInt[j+1]=data_sisip;
    }
    tampilArray(7,tabInt);
}
