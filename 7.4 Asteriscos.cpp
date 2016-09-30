#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows,cols;

    cout<<"Inserte el numero de filas: ";
    cin>>rows;
    cout<<"Ahora inserte el numero de columnas: ";
    cin>>cols;
    cout<<"\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;

    return 0;
}
