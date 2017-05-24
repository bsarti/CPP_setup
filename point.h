using namespace std;

class Point{

public: 
	Point(float xcoor, float ycoor);
	float get_xcoor();
	float get_ycoor();
	void set_xcoor(float xcoorv);
	void set_ycoor(float xcoorv);


private:
	float xcoor; 
	float ycoor;


};