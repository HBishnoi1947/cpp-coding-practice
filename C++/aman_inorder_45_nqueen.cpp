#include<iostream>
using namespace std;



const int n =4;                                             // no queen attacks other
int count=0;
bool safe(int a[n][n], int row, int column){
    for(int i=0; i<n ; i++){
        if(a[row][i]==1 || a[i][column]==1){               // cout<<"d1d"<< row<<column<<"/"<<i<<" :"<<a[row][i]<<endl;
            return false;
        }
    }
    int c =1;
    while(column+c<n && row-c>=0){
        if(a[row-c][column+c]==1){                        // cout<<"d2d";
            return false;
        }
        c++;
    }
    c=1;
    while(row-c>=0 && column-c>=0){
        if(a[row-c][column-c]==1){                        // cout<<"d3d";
            return false;
            }
        c++;
    }
    return true;
    }
void queen(int a[n][n], int row,int column){
    if(row>=n || count>=n){return;}
    if(safe(a, row, column) && column<n){
        a[row][column]=1;

                                                            // cout<<"(in) - "<<row<<" "<<column<<"  ";
                                                            
        row++; column=0;
        count++;
    }
    else{
        a[row][column]=0;
        column++;
        if(column>=n){
            for(int i=0; i<n;i++){
                if(a[row-1][i]==1){
                                                            // cout<<"out - "<<row-1<<" "<<i<<"//"<<a[row-1][i];
                    
                    a[row-1][i]=0;
                                                            // cout<<"out repeat - "<<row-1<<" "<<i<<"//"<<a[row-1][i]<<endl;
                    row=row-1;column=i+1;count--;
                    break;
                }
            }
        }
    }
    queen(a,row,column);
}
int main(){
    cout<<"Board size: 4"<<endl;
    int arr[n][n]={0};
    queen(arr,0,0);
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Tottal queens: "<<count;
}