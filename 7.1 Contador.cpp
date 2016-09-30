#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cont=1, i;
    for(i=0;i<=8;i+=2)
    {
        cont+=i;
    }

    cout<<i<<"-"<<cont;

    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;
    return 0;


}
