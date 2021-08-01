#include <iostream>
#include <math.h>

using namespace std;

void printArr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "\t";
    }

}

int binary_search(const int *arr, int val, int size)
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
    return -1;

}
void selection_sort(int *arr,int size)
{

    int smallest_index = 0;
    int temp = 0;
    for (int i = 0; i < size-1; ++i)
    {
        smallest_index = i;
        for (int j = i+1; j < size; ++j)
        {
            if (arr[j] < arr[smallest_index])
            {
                smallest_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallest_index];
        arr[smallest_index] = temp;

    }
}




int main() {
    int arr[] = {6,9,15,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sortedArr[size];
    selection_sort(arr,size);
    printArr(arr,size);
//    cout << binary_search(arr,13,sizeof(arr)/sizeof(arr[0]));
    return 0;
}





/**
 Exercises :-

 1.1 => log2(128) = 7
 1.2 => log2(256) = 8
 1.3 => log2(256) = O(log n)
 1.4 => log2(256) = O(n)
 1.5 => log2(256) = O(n)
 1.6 => log2(256) = O(n)

 2.1 => linked list
 2.2 => linked list
 2.3 => array
 2.4 => it need to be sorted, so there will be insertion in the middle
 2.5 => it's moderate between both of them





 */
