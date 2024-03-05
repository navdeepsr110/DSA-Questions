#include <iostream>
using namespace std;

void spiralPrint(int **input,int nRows, int mCols){
    int rs=0,cs=0,count=0;
    int re=nRows-1;
    int ce=mCols-1;
    int numElements = nRows * mCols;
    int i;
    while(count<numElements){
        for(i=cs;count<numElements && i<mCols;i++){
            cout<<input[rs][i]<<" ";
            count++;
        }
        rs++;
        for(i=rs;count<numElements && i<nRows;i++){
            cout<<input[i][mCols-1]<<" ";
            count++;
        }
        mCols--;
        for(i=mCols-1;count<numElements && i>=cs;i--){
            cout<<input[nRows-1][i]<<" ";
            count++;
        }
        nRows--;
        for(int i=nRows-1;count<numElements && i>=rs;i--){
            cout<<input[i][cs]<<" ";
            count++;
        }
        cs++;

    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}