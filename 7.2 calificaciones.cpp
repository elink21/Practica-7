#include <bits/stdc++.h>
using namespace std;

int main()
{
    int calificacion;
    cout<<"Introduzca la calificacion: ";

    cin>>calificacion;

    if(calificacion<60)
    {
        cout<<"Tienes F";
    }
    else if(calificacion<=70)
    {
        cout<<"Tienes D";
    }
    else if(calificacion<=80)
    {
        cout<<"Tienes C";
    }
    else if(calificacion<=90)
    {
        cout<<"Tienes B";
    }
    else cout<<"Tienes A";

    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;
    return 0;
}
