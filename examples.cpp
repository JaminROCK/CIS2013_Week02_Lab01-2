#include <iostream>
using namespace std;

int main () {
int room_width = 5, room_length = 10;
float room_radius = 10.0;
float room_circle_area = (room_radius*room_radius)*3.14;
bool keep_running = true;
char question = 'y';

while (keep_running){


	cout << "Enter your first number: ";
	cin >> room_length;
	cout << "Enter your second number: ";
	cin >> room_width;


	if(room_length == room_width) {
		cout << "Length and Width are the same" << endl;
	} else {
	cout << "Length and Width are not the same" << endl;
	}
	if (room_length > room_width) {
		cout << "length is greater than width";
	} else {
		cout << "width is greater than length or equal" << endl;
	}
	cout << "Run again (y/n): ";
	cin >> question;
	if ( (question != 'y') && (question != 'y'))	{ keep_running = false;
		
	}
}

//Printing out
cout << " Our first number is " << room_width << endl;
cout << " Our second number is " << room_length << endl;
// Different math operations
// Finding the room area
cout << " If you multiply them you get room area " << room_width*room_length << endl;

cout << " Unless your room is a circle, then it is " << room_circle_area << endl;

return 0;

}