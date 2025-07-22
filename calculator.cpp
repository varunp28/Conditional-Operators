#include <iostream>
using namespace std;

int main() {
    int choice;
    int number1,number2;
    cout<<"The choices are: "<<endl<<"1.Addtion"<<endl<<"2.Subtraction"<<endl<<"3.Multilication"<<endl<<"4.Division"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter the number: ";
        cin>>number1;
        cout<<"Enter the number: ";
        cin>>number2;
        cout<<"The sum is" <<number1+number2<<endl;
       
        case 2:
        cout<<"Enter the number: ";
        cin>>number1;
        cout<<"Enter the number: ";
        cin>>number2;
        cout<<"The difference is : "<<number1-number2<<endl;
       
        case 3:
        cout<<"Enter the number: ";
        cin>>number1;
        cout<<"Enter the number: ";
        cin>>number2;
        cout<<"The product is "<<number1*number2<<endl;
       
        case 4:
        cout<<"Enter the number: ";
        cin>>number1;
        cout<<"Enter the number: ";
        cin>>number2;
        cout<<"The Quotient is : "<<number1/number2<<endl;
       
    }
