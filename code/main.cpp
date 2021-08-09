#include <iostream>
#include <math.h>

using namespace std;

void printArr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "\t";
    }

}
//chapter 1
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
//chapter 2
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
//chapter 4
int divide_conquer(int *arr, int size) //return the sum of array using D&C
{
    if (size == 0)
        return 0;
    size --;
    return arr[size] + divide_conquer(arr,size);
}

int divide_conquer_tail_recursion(int *arr, int size, int sum) //This is better in terms of performance
{
    if (size == 0)
        return sum;

    size --;
    return divide_conquer_tail_recursion(arr,size,arr[size] + sum);
}

int max_number(int *arr, int size,int max) //return the sum of array using D&C
{
    if (size == 0)
        return max;
    size --;
    if (max < arr[size])
        max = arr[size];
    return max_number(arr,size,max);
}

int binary_search_recursion(const int *arr, int val, int size,int low,int high)
{

    int mid = (low + high)/2;
    if (arr[mid] == val)
        return mid;
    if (low >= high)
        return -1;

    if(arr[mid] > val)
        high = mid-1;

    else
        low = mid +1;

    return binary_search_recursion(arr,val,size,low,high);
}




int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

//    selection_sort(arr,size);
//    printArr(arr,size);
//    cout << divide_conquer(arr,size);
//    cout << divide_conquer_tail_recursion(arr,size,0);
//    cout << max_number(arr,size,-1);
//    cout << binary_search(arr,13,sizeof(arr)/sizeof(arr[0]));
    cout << binary_search_recursion(arr,10,size,0,size-1);
//    return 0;
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
