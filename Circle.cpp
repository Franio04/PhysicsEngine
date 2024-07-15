#include <iostream>
#include <vector>

class Circle {
private :
	std::vector<double> position;
	double speed;
	int radius;
public :
	Circle(double x, double y, double z, int radius1, double speed1) 
		: position({ x, y, z }),  // Initialize position vector
		  radius(radius1),      // Initialize radius
		  speed(speed1)         // Initialize speed
	{
	};
	Circle(double x, double y, int radius1, double speed1) 
		: position({ x, y, 0 }),  // Initialize position vector
		radius(radius1),      // Initialize radius
		speed(speed1)         // Initialize speed
	{
	};
	double GetDistance(Circle one, Circle two) {
		double sum = 0;
		sum += std::pow(one.position[0] - two.position[0], 2);
		sum += std::pow(one.position[1] - two.position[1], 2);
		sum += std::pow(one.position[2] - two.position[2], 2);
		return std::sqrt(sum);
	};
};