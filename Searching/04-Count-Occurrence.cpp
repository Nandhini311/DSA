#include <iostream>
using namespace std;

int countOcc(int arr[], int n, int x)
{
	int first = firstOcc(arr, n, x);

	if(first == -1)
		return 0;
	else 
		return lastOcc(arr, n, x) - first + 1;
}

int main() {
   int arr[] = {10, 20, 20, 20, 40, 40}, n = 6;
   int x = 20;
   cout << countOcc(arr, n, x);
	return 0;
}
