#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter the Name of the Person: ";
cin>>name;
float WeightToLose;
cout<<"Enter the target weight to lose in kilograms: ";
cin>>WeightToLose;
float NumbersOfDays;
NumbersOfDays= WeightToLose*15;
cout<<name<<" will need "<<NumbersOfDays<<" days to lose "<<WeightToLose<<" kg of weight by following the doctor's suggestions";
}