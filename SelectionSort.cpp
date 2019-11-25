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
    int minIndex;
    int j;

    for(i=0; i<(7-1); i++){
        //inisialisasi index elemen minimum
        minIndex = i;

        //perulangan mencari nilai minimum sepanjang index i + 1 sampai jumlah elemen array
        for(j=(i+1); j<7; j++){
            if(tabInt[minIndex] > tabInt[j]){
                minIndex = j;
            }
        }

        //menukar posisi elemen
        temp = tabInt[i];
        tabInt[i] = tabInt[minIndex];
        tabInt[minIndex] = temp;
    }

    tampilArray(7, tabInt);
    return 0;
}
