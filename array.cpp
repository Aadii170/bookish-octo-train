#include <bits/stdc++.h>
using namespace std;
// find the second largest element in an array
int maxElementindex(int arr[], int n)
{
    int max = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largestelemtindex = maxElementindex(arr, n);
    int largestElement = arr[largestelemtindex];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == largestElement)
        {
            arr[i] = -1;
        }
    }

    int secondlargestindex = maxElementindex(arr, n);

    cout << arr[secondlargestindex] << endl;
    return 0;
}