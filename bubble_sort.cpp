#include <iostream>

using namespace std;

int main()
{
    int arr[10] ;
    int temp = 0 ;
    cout << "\nEnter the elements into the array : " ;
    for(int i = 0; i < 10 ; i++)
    {
        cin >> arr[i] ;
    }
    cout << "\nSorting using the bubble sort!" ;
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }
    cout << "\nTherefore, the sorted array is : " ;
    for(int i = 0; i < 10; i++)
    {
        cout << "\n" << arr[i] ;
    }
    return 0;

}

