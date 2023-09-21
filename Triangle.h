#pragma once
class Triangle
{
private:
	int height;
	int width;

public:
	Triangle(int h, int w);

	~Triangle();

	void setH(int he);

	void drawHeight();

	void drawWidth();

	float Area();
};

