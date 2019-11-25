#include<iostream>

using namespace std;

int Merge(int A[],int p, int q,int r)
{

    int n1,n2,i,j,k;

    /*besar array bagian kiri=n1
    dan besar array bagian kanan=n2*/

    n1=q-p+1;
    n2=r-q;
    int L[n1],R[n2];

    //menginisialisasi nilai array bagian kiri ke L[]
    for(i=0;i<n1;i++){
        L[i]=A[p+i];
    }

    //menginisialisasi nilai array bagian kanan ke R[]
    for(j=0;j<n2;j++){
        R[j]=A[q+j+1];
    }

    i=0,j=0;

    /*Membandingkan dan menggabungkan
    kedalam array baru dengan urutan yang benar*/
    for(k=p;i<n1&&j<n2;k++){
        if(L[i]<R[j]){
            A[k]=L[i++];
        }
        else{
            A[k]=R[j++];
        }
    }

    /*Jika Array bagian kiri L[] memiliki elemen lebih banyak daripada Array bagian kanan R[]
    maka sisa elemen dari L[] akan di taruh di dalam A[]*/
    while(i<n1){
        A[k++]=L[i++];
    }

    /*Jika Array bagian kanan R[] memiliki elemen lebih banyak daripada Array bagian kiri L[]
    maka sisa elemen dari R[] akan di taruh di dalam A[]*/
    while(j<n2){
        A[k++]=R[j++];
    }
}

/*Disini adalah bagian membagi array
Di bagian ini Array akan di bagi menjadi
Sub array dan kemudian menggabungkan mereka dengan
memanggil fungsi Merge()*/
int MergeSort(int A[],int p,int r){
    int q,i;
    if(p<r){
        q=(p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}
int main(){
    int n;

    cout<<"Masukkan jumlah Array: ";cin>>n;

    int A[n],i;
    for(i=0;i<n;i++){
        cout<<"Index ke-"<<i<<" : ";cin>>A[i];
    }

    /*Memanggil MergeSort()
    Pertama kita memberikan array nya
    Index pertama yaitu 0
    dan besar array yaitu n*/

    MergeSort(A,0,n-1);
    cout<<"Hasil ketika sudah di urutkan"<<endl;
    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
