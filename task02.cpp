#include<iostream>
using namespace std;
main(){
	cout<<"Number of Minutes: ";
	int minutes;
	cin>>minutes;
	cout<<"Frames per second: ";
	int frames;
	cin>>frames;
	int TotalFrames;
	TotalFrames=60*minutes*frames;
	cout<<"Total number of frames: "<<TotalFrames;
}