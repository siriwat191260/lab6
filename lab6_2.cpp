#include<iostream>
#include<string>
using namespace std;
int main(){
    string Name,movie,day,z;
    int num;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,Name);
    cout <<"Fahsai: Wow!!! "<< Name <<" is a really cool name.\n";
    cout <<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << Name <<": ";
    cin >>  num;
    cin.ignore();
    int x=(num/10000000)-12;   
    cout << "Fahsai: I think you may be GEAR "<< x <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << Name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << Name << ": ";
    getline(cin,day);
    cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n"; 
    cout << Name << ": ";
    getline(cin,z);
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";

    


}