// Creating a 2d array
#include <iostream>
using namespace std;
int wavePrint(int arr[][3], int nRow, int mColm)
{
    for (int colm = 0; colm < mColm; colm++)
    {
        if (colm & 1)
        {
            for (int row = nRow - 1; row >= 0; row--)
            {
                cout << arr[row][colm] << " ";
            }
        }
        else
        {
            for (int row = 0; row < nRow; row++)
            {
                cout << arr[row][colm] << " ";
            }
        }
    }
}    

    int main()
    {
        int arr[3][3];
        // Input the array in row wise
        for (int row = 0; row < 3; row++)
        {
            for (int colm = 0; colm < 3; colm++)
            {
                cin >> arr[row][colm];
            }
        }
        // Printing the array in wave form`
        cout << wavePrint(arr,3,3) << endl;
       return 0;
    }
