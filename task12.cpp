#include<iostream>
using namespace std;
main(){
	int SquareMeters,Width,Height,PaintedWalls;
	cout<<"Number of square meters you can paint: ";
	cin>>SquareMeters;
	cout<<"Width of the singal wall(in meters): ";
	cin>>Width;
	cout<<"Height of the singal wall(in meters): ";
	cin>>Height;
	PaintedWalls=SquareMeters/(Width*Height);
	cout<<"Number of walls you can paint: "<<PaintedWalls;
}