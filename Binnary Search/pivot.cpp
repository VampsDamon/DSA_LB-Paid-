#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int> &num)
{
    int s = 0;
    int e = num.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
            return s;
        if (mid + 1 <=e && num[mid] > num[mid + 1])
            return mid;
        if (mid - 1 >=s && num[mid - 1] > num[mid])
            return mid - 1;

        if (num[s] > num[mid])
            s = mid - 1;
        else
           e= mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> num{4};
    cout << "Pivot element is " << num[pivot(num)] << endl;
    return 0;
}