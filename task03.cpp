#include<iostream>
using namespace std;
main(){
	int InitialVelocity,Acceleration,Time,FinalVelocity;
	cout<<"Enter Intial Velocity (m/s): ";
	cin>>InitialVelocity;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>Acceleration;
	cout<<"Enter Time (s): ";
	cin>>Time;
	FinalVelocity=(Time*Acceleration)+InitialVelocity;
	cout<<"Final Velocity (m/s): "<<FinalVelocity;
}