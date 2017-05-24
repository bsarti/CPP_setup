#include "point.h"

Point::Point(float xcoor, float ycoor){
	this->xcoor = xcoor;
	this->ycoor = ycoor;
}

float Point::get_xcoor(){
	return this->xcoor;
}
float Point::get_ycoor(){
	return this->ycoor;
}
void Point::set_xcoor(float xcoor){
	this->xcoor =  xcoor;
}
void Point::set_ycoor(float ycoor){
	this->ycoor =  ycoor;
}