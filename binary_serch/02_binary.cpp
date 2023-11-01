#include <iostream>
using namespace std;
int binerysech(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[7] = {85, 47, 36, 23, 15, 2, 1};
    int index = binerysech(arr, 7, 36);
    cout << "The index of is : " << index << endl;

    return 0;
}