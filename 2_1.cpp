#include <iostream>

using namespace std;

int main()
{
    int Nline, Mcol, i, j;
    cout<< "Введите высоту, затем ширину прямоугольника \n";
    cin>> Nline;
    cin>> Mcol;
    for (i=0; i<Nline; i++)  { cout<<endl;
        for (j=0; j<Mcol; j++)  { cout<< "*"; }
    }
}
