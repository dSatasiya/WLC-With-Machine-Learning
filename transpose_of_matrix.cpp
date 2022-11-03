//C++ Program to Find Transpose of a Matrix.

#include<iostream>
using namespace std;

int main()
{
    int row, column, i, j;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>column;
    int a[row][column], trans[column][row];
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout<<"Element ["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    cout<<"The transpose of the matrix is..."<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            trans[i][j] = a[j][i];        
            cout<<trans[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}

// Expected output :
//Enter the number of rows : 3
// Enter the number of column : 3
// Element [0][0] : 1
// Element [0][1] : 2
// Element [0][2] : 3
// Element [1][0] : 4
// Element [1][1] : 5
// Element [1][2] : 6
// Element [2][0] : 7
// Element [2][1] : 8
// Element [2][2] : 9
// The transpose of the matrix is...
// 1	4	7	
// 2	5	8	
// 3	6	9	
