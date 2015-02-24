#include <iostream>

using namespace std ;

int main()
{
    int a[] = {4,6,8,10} ;
    int b[] = {5,7,9,11} ;
    int c[8] ;
    cout << "\nArray A is : " ;
    int i=0, j =0, k =0 ;
    for(i = 0; i < 4; i++)
    {
        cout << a[i] << "\t" ;
    }
    cout << "\nArray B is : " ;
    for(j = 0; j < 4; j++)
     {
        cout << b[j] << "\t" ;
     }
    while((i < 4) && (j < 4))
    {
        if(a[i] > b[j])
        {
            c[k] = a[i] ;
        }
        else if(a[i] < b[j])
        {
            c[k] = b[i] ;
        }
    }
    for(; i < 4; i++, k++)
    {
        c[k] = a[i] ;
    }
    for(; j < 4; j++, k++)
    {
        c[k] = a[j] ;
    }
    cout << "\nThe new array is : " ;
    for(int k = 0; k <8; k++)
    {
        cout << c[k];
    }
    return 0 ;

}
