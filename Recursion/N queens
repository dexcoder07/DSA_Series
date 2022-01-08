#include<bits/stdc++.h>

#include<vector>

using namespace std;

typedef vector< int > vi;

typedef vector< vi > vvi;


 

//vector< < vector <int> > board( 4, vector<int> (4,0));


 

bool is_attacked(int x,int y,int N,vvi &board){

    for(int i=0;i<N;i++){

        if(board[x][i]==1 || board[i][y]==1){

            return true;

        }

    }

    for(int i=0;i<N;i++){

        for(int j=0;j<N;j++){

            if((i+j)==(x+y) || (x-i)==(y-j)){

                if(board[i][j]==1){

                    return true;

                }

            }

        }

    }

    return false;

}

bool Nqueen(vector< <vector<int> > &board,int N){

    for(int i=0;i<N;i++){

        for(int j=0;j<N;j++){

            if(is_attacked(i,j,N,board)== true){

                continue;

            }

            else{

                board[i][j]=1;

                if(Nqueen(board,N-1)== true){

                    return true;

                }

                else{

                    board[i][j]=0;

                }

            }

        }

    }

    return false;

}

int main(){

    int N;

    cin>>N;

vector< vector< int > > board( N , vector<int> (N, 0));

    bool t=Nqueen(board,N);

    if(t==false){

        cout<<"NO";

    }

    else{

        for(int i=0;i<N;i++){

            for(int j=0;j<N;j++){

                cout<<board[i][j]<<" ";

            }

            cout<<"\n";

        }

    }

    return 0;

}