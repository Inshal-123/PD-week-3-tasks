#include<iostream>
using namespace std;
main(){
	cout<<"Enter the movie name: ";
	string name;
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	float AdultTicketPrice;
	cin>> AdultTicketPrice;
	cout<<"Enter the child ticket price: $";
	float ChildTicketPrice;
	cin>> ChildTicketPrice;
	cout<<"Enter the number of adult tickets sold: ";
	int AdultTicketSold;
	cin>>AdultTicketSold;
	cout<<"Enter the number of adult tickets sold: ";
	int ChildTicketSold;
	cin>>ChildTicketSold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	float CharityPercentage;
	cin>>CharityPercentage;
	float TotalSales;
	TotalSales=(AdultTicketPrice*AdultTicketSold)+(ChildTicketPrice*ChildTicketSold);
	float CharityDonation;
	CharityDonation=TotalSales*( CharityPercentage/100);
	float RemainingAmount;
	RemainingAmount=TotalSales-CharityDonation;
	cout<<endl;
	cout<<"Movie: "<< name<<endl;
	cout<<"Total amount generated from tickets: $"<<TotalSales<<endl;
	cout<<"Donation to Charity ("<< CharityPercentage<<"): $"<<CharityDonation<<endl;
	cout<<"Remaining amount after donation: $"<<RemainingAmount;
}