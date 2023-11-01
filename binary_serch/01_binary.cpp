#include <iostream>
using namespace std;
int binarSerch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        // If the value of mid elemnent is found to be eqaul to key
        if (arr[mid] == key)
        {
            return mid;
        }
        // If the value of key is greter than the mid elemnt then serch it in right side
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // If the value of key is lesser than the mid elment then serch it in left side
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int evenarray[6] = {1, 2, 3, 14, 15, 26};
    int oddarray[5] = {25, 85, 96, 74, 564};
    int evenbinarySerch = binarSerch(evenarray, 6, 254);
    //   cout<<"Index of 254: "<<evenbinarySerch<<endl;
    int oddbinaryserch = binarSerch(oddarray, 5, 25);
    cout << "Index of 25: " << oddbinaryserch << endl;

    return 0;
}