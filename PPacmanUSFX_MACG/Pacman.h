#pragma once
class Pacman
{
private:
	float posicionX;
	float posicionY;
	int color;
	float velociadX;
	float velocidadY;
public:
	void move(float _velocidadX, float _velocidadY);
};

