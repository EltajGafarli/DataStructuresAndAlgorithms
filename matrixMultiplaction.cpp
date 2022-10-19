#include<bits/stdc++.h>
using namespace std;



int main(){
    int m,n;cin>>m>>n;
    int matrix1[m][n];

    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j++){
            cin>>matrix1[i][j];
        }
    }


    int nr, q;cin>>nr>>q;
    int matrix2[nr][q];
    for(int i = 0; i < nr; i++){
        for(int j = 0; j < q; j++){
            cin>>matrix2[i][j];
        }
    }
    if(n != nr){
        cout<<-1;
    }else{
        int multi[m][q] = {0 , 0};
        int ans;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
                ans = 0;
                for(int k = 0; k < n; k++){
                    ans += matrix1[i][k] * matrix2[k][j];
                }
                multi[i][j] = ans;
            }
        }
        cout<<m<< ' '<<q<<endl;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
                cout<<multi[i][j]<<' ';
            }
            cout<<endl;
        }
    }

}
