#include<iostream>
using namespace std;
main(){
float ImposterCount,PlayerCount,ImposterChances;
cout<<"Enter Imposter Count: ";
cin>>ImposterCount;
cout<<"Enter Player Count: ";
cin>>PlayerCount;
ImposterChances=100*(ImposterCount/PlayerCount);
cout<<"Chances of being an imposter: "<<ImposterChances<<"%";
}