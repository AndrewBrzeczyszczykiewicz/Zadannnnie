#include <iostream>

using namespace std;

int main()
{
    int vari, choose;
    cout<< "Введите число вариантов ";
    cin>> vari;
    cout<< "Выберите способ подбора варианта (введите одну из цифр: 1,2,3) ";
    cin>>choose;
    
    switch(choose)
    {
        case 1: 
                int Lnum;
                cout<< "Введите свой номер по списку ";
                cin>> Lnum;
                cout<< (Lnum%vari)+1 << endl;
                cout<< "Вот ваш вариант ";
                break;
        case 2:
                char name;
                cout<< "Введите ваше имя ";
                cin>>name;
                cout<< (name%vari) << endl;
                cout<< "Вот ваш вариант ";
                break;
        case 3:
                char fname;
                cout<< "Введите вашу фамилию ";
                cin>>fname;
                cout<< (fname%vari) << endl;
                cout<< "Вот ваш вариант ";
                break;
        default:  cout<< "Вы ввели что-то не то "; break;
    }
    return 0;
}
