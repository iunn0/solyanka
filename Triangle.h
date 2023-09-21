#pragma once
class Triangle
{
private:
	int height;
	int width;

public:
	Triangle(int h = 0, int w = 0);
	Triangle(int h = 0);

	~Triangle();

	void setValues(int h, int w);

	void drawByHeight();

	void drawByWidth();

	float Area();
};

