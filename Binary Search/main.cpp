#include <iostream>
using namespace std;
int arrSize;
int binarySearch(int arr[], int num)
{
    int start = 0, middle, End = arrSize-1;
    while(start<End)
    {
        middle = (start+End)/2;
        if (num == arr[middle])
            return middle;
        else if (num > arr[middle])
            start = middle+1;
        else
            End = middle-1;
    }
    return -1;
}

int main()
{
	int num;
    cin>>arrSize>>num;
    int arr[arrSize];
    for(int i=0; i<arrSize; i++)
    {
        cin>>arr[i];
    }
    int result = binarySearch(arr, num);
    cout<<result;
}
