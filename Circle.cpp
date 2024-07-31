#include <iostream>
#include <vector>

class Circle{
private :
	std::vector<float> position;
	std::vector<float> velocity;
	std::vector<float> acceleration;
	int radius;
public :
	Circle(std::vector<float> pos, std::vector<float> vel, std::vector<float> acc, int radius1)
		: position(pos),  // Initialize position vector
		velocity(vel),         // Initialize speed
		acceleration(acc),
		radius(radius1)
	{
	};
	Circle(int radius1) 
		: position({ 0, 0, 0 }),  // Initialize position vector
		velocity({0, 0, 0}),         // Initialize speed
		acceleration({ 0, 0, 0 }),
		radius(radius1)
	{
	};
	void SetPos(std::vector<float> position1) {
		position = position1;
	}
	void SetVel(std::vector<float> position1) {
		velocity = position1;
	}
	void SetAcc(std::vector<float> position1) {
		acceleration = position1;
	}
	std::vector<float> GetPos() {
		return position;
	}
	std::vector<float> GetVel() {
		return velocity;
	}
	std::vector<float> GetAcc() {
		return acceleration;
	}
	double GetDistance(Circle one, Circle two) {
		float sum = 0;
		sum += std::pow(one.position[0] - two.position[0], 2);
		sum += std::pow(one.position[1] - two.position[1], 2);
		sum += std::pow(one.position[2] - two.position[2], 2);
		return std::sqrt(sum);
	};
};