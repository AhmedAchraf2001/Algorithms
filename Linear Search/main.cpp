#include <iostream>
using namespace std;
int arrSize;
int linearSearch(int *p, int num)
{
    for(int i=0;i<arrSize;i++)
    {
        if(*p==num) return i;
        else p++;
    }
    return -1;
}

int main()
{
	int num;
    cin>>arrSize>>num;
    int arr[arrSize];
    for(int i=0;i<arrSize;i++)
    {
        cin>>arr[i];
    }
    int result = linearSearch(arr, num);
    cout<<result;
}
