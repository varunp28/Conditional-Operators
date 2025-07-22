#include <iostream>
using namespace std;
int main() {
    int choice;
    cout<<"Pick your charecter"<<endl<<"1.William Butcher"<<endl<<"2.Homelander"<<endl<<"3.A-Train"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    
    switch(choice){
        case 1:
        cout<<"Your charecter is William Butcher "<<endl<<"Powers:Deadskin tentacles"<<endl<<"Weapon: Wrench"<<endl;
        break;
        case 2:
        cout<<"Your charecter is Homelander"<<endl<<"Powers: "<<endl<<"1.Indestructable Body"<<endl<<"2.Laser eyes"<<endl<<"3.X-Ray vision"<<endl<<"4.Super Strength"<<endl<<"Weapon:None";
        break;
        case 3:
        cout<<"Your charecter is A-Train"<<endl<<"Powers: "<<endl<<"1.Super Speed"<<endl<<"2. Super Strength"<<endl<<"Weapon: None";
        break;
        
        default :
        cout<<"Oi dont be too cunning aehh!!";
    }
    
}
