//g++ -o eg_02 eg_02.cpp && ./eg_02
#include <iostream>
using namespace std;



// define  a new type - enumerated named color

enum Color {red,green,blue,yellow};


string get_color (Color color);
ostream& operator<<(ostream& out, Color color);

//overload function >> to read color type from keyboard

istream& operator>>(istream& in, Color& color);

Color convert_str_to_int(string color); // function which get string and return color 
int main (){

  Color apple_color {red};
  Color shirt_color {green};
  Color sky_color {blue};
  Color sun_color {yellow};

  int input_color;


  apple_color = static_cast<Color>(3); // converstion from int to color 
  cout << "Apple_color  " <<   apple_color<< endl;
  cout << "Apple_color  " <<  get_color(apple_color) << endl;
    cout << "sun_color  " <<   sun_color<< endl;
  cout << "sun_color  " <<   get_color(sun_color);

  cout << "Enter a some shirt color(red,green,blue,yellow)>> ";
  cin>>shirt_color;
  //shirt_color = static_cast<Color>(input_color);
  cout<<"Shirt color is " << shirt_color << "  now" << endl;
  return 0;
}
string get_color(Color color){
  switch(color){
    case red: return "red";
    case green: return "green";
    case blue: return "blue";
    case yellow: return "yellow";
    default: return "???";
    
  }
}

ostream& operator<<(ostream& out, Color color){
  switch(color){
    case red: out << "red";break;
    case green: out <<"green";break;
    case blue: out << "blue";break;
    case yellow: out << "yellow";break;
    default: out<< "???";break;
    
  }
  return out;
}
Color convert_str_to_int(string color){
  
   if(color == "red")return red;
   else if(color == "green")return green;
   else if(color == "blue")return blue;
   else if(color == "yellow")return yellow;
  else return yellow;
}

istream& operator>>(istream& in, Color& color){
  string input_value;
  in >> input_value;
 
 // color = static_cast<Color>(input_value);
  color = convert_str_to_int(input_value);
  return in;
}