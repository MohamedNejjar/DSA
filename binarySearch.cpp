#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2; // avoid overflow
        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
        {
            right = mid - 1; //search in the left side 
        }
        else
        {
            left = mid + 1; //search in the right side 
        }
    }
    return -1;
}
int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    int target;
    cin >> target;
    sort(a,a+n);
    int post = binarySearch(a, n, target);
    if (post == -1)
        cout << " target not found ";
    else
        cout << " target found at index" << post;
}