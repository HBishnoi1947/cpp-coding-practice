#include<iostream>
using namespace std;

bool rate_maze(int** arr,int x, int y, int n, int** sol){          // arr is a square matriz,.............. arr and sol are both same order matrix
    if(x==(n-1) & y==(n-1)){
        sol[x][y]=1;
        return true;
    }
    if(x<n && y<n && arr[x][y]==1){
        sol[x][y] =1;
        if(rate_maze(arr,x+1,y,n,sol)){
            return true;
        }
        if(rate_maze(arr,x,y+1,n,sol)){
            return true;
        }
        sol[x][y]=0;            // backtracking
        // return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int **arr;
    arr = new int*[n];
    for(int i=0 ; i<n;i++){
        arr[i]=new int [n];
        for(int j =0; j<n; j++ ){
            cin>>arr[i][j];
        }
    }
    int **sol = new int *[n];
    for(int i=0 ; i<n;i++){
        sol[i]=new int [n];
        for(int j = 0 ; j<n;j++){
            sol[i][j]=0;
        }
    }
    cout<<endl;
    if(rate_maze(arr,0,0,n,sol)){
        for(int i = 0 ; i<n;i++){
            for(int j =0; j<n; j++ ){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1
