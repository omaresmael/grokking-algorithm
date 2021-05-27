#include <iostream>
#include <math.h>

using namespace std;
//my implementation
int binary_search(const int *arr, int val,int size)
{
    int divider = size/2;
    for(int i=0;i< log2(size);i++)
    {

        if(val == arr[divider]) return divider;
        if (val > arr[divider])
        {
            divider = (size - divider)/2 + divider;
        }
        if (val < arr[divider])
        {
            divider = divider - (divider - divider/2)/2;
        }
    }
    return 0;
}

//book implementation
int binary_search_grokking(const int *arr, int val, int size)
{
    int low = 0;
    int high = size -1;
    int mid =0;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == val) return mid;
        if(arr[mid] > val) high = mid-1;
        else low = mid +1;

    }
    return 0;

}
int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout << binary_search_grokking(arr,13,sizeof(arr)/sizeof(arr[0]));
    return 0;
}

/**
 Exercises :-

 1.1 => log2(128) = 7
 1.2 => log2(256) = 8





 */
