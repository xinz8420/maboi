#include <iostream>
using namespace std;

void tampilArray(int n, int arr[]){
    int i;
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int tabInt[7] = {33, 45, 21, 17, 64, 59, 43};
    int i;
    int temp;
    int tukar;

    do{
        tukar=false;
        //looping cek untuk memeriksa apakah ada yg perlu ditukar
        for(i=0; i<(7-1); i++){
            if(tabInt[i] > tabInt[i+1]){
                //tukar posisi elemen
                temp = tabInt[i];
                tabInt[i] = tabInt[i+1];
                tabInt[i+1] = temp;
                tukar = true;
            }
        }
    }while(tukar == true);

    tampilArray(7, tabInt);
    return 0;
}
