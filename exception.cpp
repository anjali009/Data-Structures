#include <iostream>

using namespace std ;

class job
{
    public :
        int id ;
        float cost ;
        friend istream& operator >>(istream&, job&) ;
        friend ostream& operator <<(ostream&, job&) ;
        class jobException {} ;

} ;

istream& operator >>(istream& in, job& j)
{
    cout << "\nEnter the job id : " ;
    in >> j.id ;
    cout << "\nEnter the cost : " ;
    in >> j.cost ;
    if(j.cost < 250)
        throw job::jobException() ;

    return in ;
}

ostream& operator <<(ostream& out, job& j)
{
    out << "\nThe job id is : " << j.id;
    out << "\nThe cost is : " << j.cost ;
    return out ;
}

int main()
{
    job j[8] ;
    int k = 0 ;
    try
    {
        for(int i = 0 ; i < 8 ; i++)
        {
            cin >> j[i] ;
            k++ ;
        }
    }
    catch(job :: jobException)
    {
        cout << "\nError, cost is less than $250!!!" ;
        for(int i = k ; i < 8 ; i++)
            cin >> j[i] ;
    }

    for(int i = 0 ; i < 8 ; i++)
    {
        cout << j[i] ;
    }
}


