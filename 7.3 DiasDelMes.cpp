#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year,month,days;
    cout<<"Inserte el a\xa4"<<"o: ";
    cin>>year;
    cout<<"Inserte el mes: ";
    cin>>month;


    if(month==2)
    {
        if(year%4==0 && year%100!=0)
        {
            days=29;
        }
        else days=28;
    }
    else{
            if(month==8)
            {
                days=31;
            }
            else
            {
                if(month>8)month++;

                if(month%2==0)
                {
                    days=30;
                }
                else days=31;
            }
        }

    cout<<"Su mes tiene : "<<days<<" dias";

    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;
    return 0;
}
