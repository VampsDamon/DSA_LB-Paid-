#include <iostream>
#include <string.h>
using namespace std;
int binary_search(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] == target)
            return mid;
        else if (mid - 1 >=s && arr[mid - 1] == target)
            return mid - 1;
        else if (mid + 1 <=e && arr[mid + 1] == target)
            return mid + 1;
        else if (arr[mid] > target)
            e = mid - 2;
        else
            s = mid + 2;

        mid = s + (e - s) / 2;    
    }
    return -1;
}
int main()
{
    int arr[8] = {10, 3, 40, 20, 50, 80, 70};
       cout<<"Index of 40 is :- "<<binary_search(arr,8,10);
    return 0;
}