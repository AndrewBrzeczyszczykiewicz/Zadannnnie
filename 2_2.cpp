#include <iostream>

using namespace std;

int main()
{
    int Wtr, spaces, i, j, k;
    cout<< "Введите ширину основания треугольника ";
    cin>> Wtr;
    if (Wtr%2==0)
    {
        spaces=Wtr/2-1;
        for (i=0; i<Wtr; i++)
        {
            if (i%2==0) { cout<< endl; }
            else
            {
                for (j=0;j<spaces;j++) { cout<<" "; }
                for (k=0; k<(i+1);k++) { cout<<"*"; }
                spaces--;
            }
        }
    }
    else
    {
        spaces=Wtr/2;
        for (i=0; i<Wtr; i++)
        {
            if (i%2==1) { cout<< endl; }
            else
            {
                for (j=0;j<spaces;j++) { cout<<" "; }
                for (k=0; k<(i+1);k++) { cout<<"*"; }
                spaces--;
            }
        }
    }
return 0;
}
