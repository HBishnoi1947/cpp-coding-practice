#include<iostream>
using namespace std;


void heapify(int a[], int n, int i){
    
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;
    if(l<=n && a[l-1]>a[largest-1]) largest = l;
    if(r<=n && a[r-1]>a[largest-1]) largest = r;

    if(largest!=i){
        swap(a[largest-1],a[i-1]);
        heapify(a,n,largest);
    }
}

void build_heap(int a[], int n){
    for(int i=n/2;i>0;i--){
        heapify(a,n,i);
    }
}


void heap_sort(int a[],int n){
    for(int i=n;i>0;i--){
        heapify(a,i,1);
        for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl<<"ans -> ";
        swap(a[i-1],a[0]);
        for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
    }
}
int main(){
    int b[]={10,30,50,20,35,15};
    int n = sizeof(b)/sizeof(b[0]);
    build_heap(b,n);
    heap_sort(b,n);
    for(auto i: b){
        cout<<i<<" ";
    }
}