#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds: ";
float BagSize;
cin>> BagSize;
cout<<"Enter the cost of the bag: $";
float BagCost;
cin>>BagCost;
cout<<"Enter the area in square feet that can be covered with one bag: ";
float Area;
cin>> Area;
float CostPerPound;
CostPerPound=BagCost/BagSize;
cout<<"Cost of fertilizer per pound: $"<<CostPerPound<<endl;
float CostPerSquare;
CostPerSquare=BagCost/Area;
cout<<"Cost of fertilizer per square  foot: $"<< CostPerSquare;
}