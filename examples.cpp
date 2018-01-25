#include <iostream>
using namespace std;

int main () {
int room_width = 5, room_length = 10;
float room_radius = 10.0;
float room_circle_area = (room_radius*room_radius)*3.14;

//Printing out
cout << " Our first number is " << room_width << endl;
cout << " Our second number is " << room_length << endl;
// Different math operations
// Finding the room area
cout << " If you multiply them you get room area " << room_width*room_length << endl;

cout << " Unless your room is a circle, then it is " << room_circle_area << endl;

return 0;

}