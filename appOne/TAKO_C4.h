#pragma once
class TAKO_C4
{
private:
	int Img;
	float Px, Py, Angle;
public:
	void setImage(int img);
	void init();
	void move();
	void draw();
};

