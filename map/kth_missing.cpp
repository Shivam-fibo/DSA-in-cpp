#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n = 7;
	int arr[n] = { 2, 3, 5, 9, 10, 11, 12 };
    unordered_map<int, int> umap;
	int mins = 99999;
	int maxs = -99999;
	for (int i = 0; i < n; i++) {
		umap[arr[i]]
			= 1; // mark each element of array in map
		if (mins > arr[i])
			mins = arr[i]; // keeping track of minimum
						// element
		if (maxs < arr[i])
			maxs = arr[i]; // keeping track of maximum
						// element i.e. upper bound
       cout<<mins[0];
       
	}

	return 0;
}
