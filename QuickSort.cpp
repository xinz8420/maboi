#include<iostream>

using namespace std;

//Fungsi untuk menukar 2 buah elemen
void tukar(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

/*
Disini kita menggunakan elemen terakhir sebagai elemen pokok
kemudian taruh elemen pokok di urutan yang benar dalam array yg sudah urut
kemudian taruh elemen yg lebih kecil dari elemen pokok di bagian kiri dan
elemen elemen yg lebih besar dari elemen pokok di bagian kanan
*/
int pembagi (int arr[], int low, int high){
    int pokok = arr[high]; // elemen pokok
    int i = (low - 1); // index dari elemen yg lebih kecil

    for (int j = low; j <= high - 1; j++){
        // jika elemen j lebih kecil dari elemen pokok
        if (arr[j] < pokok){
            i++; // kenaikan index dari elemen yg lebih kecil
            tukar(&arr[i], &arr[j]);
        }
    }
    tukar(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/*
fungsi utama yg mengimplementasi quicksort
arr[] = array yg akan di urutkan
low = index awal
high = index akhir
*/
void quickSort(int arr[], int low, int high){
    if (low < high){
        /*
        pi adalah index pembagi, arr[p] sekarang
        sudah di urutan yg benar
        */
        int pi = pembagi(arr, low, high);

        /*
        secara terpisah mengurutkan elemen sebelum
        pembagi dan sesudah pembagi
        atau elemen bagian kiri dan bagian kanan
        */
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//fungsi untuk menampilkan array
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//fungsi utama
int main(){
    int n;
    cout<<"Masukkan jumlah Array: ";cin>>n;

    int arr[n],i;
    for(i=0;i<n;i++){
        cout<<"Index ke-"<<i<<" : ";cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
