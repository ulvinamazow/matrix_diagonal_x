#include <iostream>
using namespace std;

int main() {
    int i, j, mySize;
    cout<<"Enter the size of the square matrix:";
    cin>>mySize;
    int matrix[mySize][mySize];
    cout<<endl;
    for(i=0;i<mySize;i++) {
        for (j=0;j<mySize;j++)
        {
            matrix[i][j]=0;
        }
        
    }
    for (i=0;i<mySize;i++)
    {
        matrix[i][i]=1;
        matrix[i][mySize-i-1]=1;
    }
    

    for(i=0;i<mySize;i++) {
        for (j=0;j<mySize;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}