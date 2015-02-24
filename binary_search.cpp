#include <iostream>

using namespace std;

int main()
{
    int arr[10] ;
    int temp = 0, num, first, last, mid, t = 0 ;
    cout << "\nEnter the elements into the array : " ;
    for(int i = 0; i < 10 ; i++)
    {
        cin >> arr[i] ;
    }
    cout << "\nSorting using the insertion sort!" ;
    for(int i = 0; i < 10; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                temp = arr[j] ;
                arr[j] = arr[j-1] ;
                arr[j-1] = temp ;
            }
        }
    }
    cout << "\nTherefore, the sorted array is : " ;
    for(int i = 0; i < 10; i++)
    {
        cout << "\n" << arr[i] ;
    }
    cout << "\nSelect the number to be searched : " ;
    cin >> num ;
    first = 0 ;
    last = 9 ;
    while(first <= last)
     {

        mid = (first + last)/2 ;
        if(arr[mid] == num)
        {
            t = 1;
            break ;
        }
        else if(arr[mid] > num)
        {
            last = mid -1 ;
        }
        else if(arr[mid] < num)
        {
            first = mid +1 ;
        }
    }
    if(t == 1)
    {
        cout << "\nNumber found at the position : " << mid +1 ;
    }
    else
        cout << "\nElement not found!!" ;
    return 0;

}


