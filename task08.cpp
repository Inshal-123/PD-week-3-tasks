#include<iostream>
using namespace std;
main(){
	cout<<"Enter the vegetable price per kilogram (in coins): ";
	float VegetablePrice;
	cin>> VegetablePrice;
	cout<<"Enter the vegetable price per kilogram (in coins): ";
	float FruitPrice;
	cin>> FruitPrice;
	cout<<"Enter total kilograms of vegetables: ";
	int TotalVegetables;
	cin>>TotalVegetables;
	cout<<"Enter total kilograms of fruits: ";
	int TotalFruits;
	cin>>TotalFruits;
	float TotalCoinEarning;
	TotalCoinEarning=(VegetablePrice*TotalVegetables)+(FruitPrice*TotalFruits);
	float TotalRupeesEarning;
	TotalRupeesEarning=TotalCoinEarning/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<TotalRupeesEarning;
}