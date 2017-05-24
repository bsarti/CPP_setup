
//Standard namespace declaration
using namespace std;

#include <stdio.h>
#include <iostream>
#include "point.h"
#include <string>
#include <sstream>

using namespace std;


std::string convert (float number){
    ostringstream buff;
    buff<<number;
    return buff.str();   
}

int main()
{
  Point Point1(3.5, 4.5);
  float x = 3;
  cout << convert(Point1.get_xcoor()) << endl;
  return 0;
};

