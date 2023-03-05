using namespace std;
#include<iostream>


void merge(int array[], int l, int m, int mid){

    int n1 = mid-l+1;
    int n2 = m-mid;

    int arr1[n1], arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i]= array[l+i];
    } 
    for(int i=0;i<n2;i++){
        arr2[i]= array[mid+1+i];
        } 
    int i=0;
    int j=0;
    int k=l;
    
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            array[k]=arr1[i];
            i++;k++;
        }
        else{
            array[k]=arr2[j];
            j++;k++;
        }
    }
    while(i<n1){
        array[k]=arr1[i];
            i++;k++;
    }
    while(j<n2){
        array[k]=arr2[j];
            j++;k++;
    }
}
void mergesort(int array[], int l, int m){
    if(l<m){
        int mid =(l+m)/2;
        mergesort(array,l,mid);
        mergesort(array,mid+1,m);
        
        merge(array, l, m, mid);
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i =0; i<n; i++){
        cin>>array[i];
    }
    mergesort(array,0,n-1);
    for(int i =0; i<n; i++){
        cout<<array[i]<<" ";
    }
}