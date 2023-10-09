//g++ -o eg_01 eg_01.cpp && ./eg_01
#include <iostream>
using namespace std;

using Color = int;

// define constant for color 

const Color RED = 0;
constexpr Color green = 1;
constexpr Color blue = 2;
constexpr Color yellow = 3;

int main (){

  Color apple_color {RED};
  Color shirt_color {green};
  Color sky_color {blue};
  Color sun_color {3};
  cout << "Apple_color  " <<   apple_color<< endl;
    cout << "sun_color  " <<   sun_color;
}