#include <iostream>
using namespace std;
int n,i,j,k,a[10][10];
int main(){
    cin >> n;
    for(k=1;k<=(n+1)/2;k++)    
           for(i=k;i<=n+1-k;i++)  
                 for(j=k;j<=n+1-k;j++)
                          a[i][j]=k;
    for(i=1;i<=n;i++){
           for(j=1;j<n;j++)
                 cout<<a[i][j]<<' ';
           cout<<a[i][n]<<endl;
    }
    return 0;
}

