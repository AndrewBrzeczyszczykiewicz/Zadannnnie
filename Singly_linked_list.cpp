#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
using namespace std ;

struct Node{
   int value ;
   struct Node *next ; 
} ;
struct Node *first = NULL ; 
struct Node *p ;
int n ;
struct Node *To_Delete;
void push_front() {
    cout<<"Enter 0 to stop"<<endl;
    for (;;) {
     cin >> n;

        if (n==0){
             break;
        }

        p = new struct Node;
        p->value = n;
        p->next = first ;
        first = p;
    }
}
void Show(){
    p = first;
    if (p==NULL){
        cout<<"List is empty"<<endl; 
    }
    else
    {
    while (p) {
        cout << p->value<<" "  ;
        p = p->next;
    }
    cout<<endl;
    }
}

void Delete() {
    if (first==NULL){
      cout<<"List is empty"<<endl;  
    }
    else{
        if(first->next==NULL){
            cout<<first->value<<" - that element is gone"<<endl;
            first = NULL ;
        }
        else{
        p = first;
        while(p->next->next){
            p=p->next;
        }
        To_Delete=p->next;
        p->next=To_Delete->next;
        cout<<To_Delete->value<<" - that element is gone"<<endl;
        delete To_Delete;
    }
    }
    
}



int main(){


    
    int answer, True;
	True = 1;
	while (True) {

		cout << "Enter:  1 - to push front" << endl << "2 - to show list" << endl << "3 - to delete last element" << endl << "4 - to exit" << endl;
		cin >> answer;
		switch (answer)
		{
		case 1:
			push_front();
			continue;

		case 2:
			Show();
			continue;

		case 3:
		Delete();
			continue;
		case 4:
		True=0;
			break;
		}
	}
    return 0 ;
}