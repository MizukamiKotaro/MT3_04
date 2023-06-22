#pragma once
#include"Sphere.h"
#include"Plane.h"
#include"Line.h"
#include"Triangle.h"

class Collision
{
public:
	static bool IsCollision(const Sphere& s1, const Sphere& s2);
	static bool IsCollision(const Sphere& sphere, const Plane& plane);
	static bool IsCollision(const Segment& segment, const Plane& plane);
	static bool IsCollision(const Ray& ray, const Plane& plane);
	static bool IsCollision(const Line& line, const Plane& plane);

	static bool IsCollision(const Triangle& triangle, const Segment& segment);
	static bool IsCollision(const Triangle& triangle, const Ray& ray);
	static bool IsCollision(const Triangle& triangle, const Line& line);
};

