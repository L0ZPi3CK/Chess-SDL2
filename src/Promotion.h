#pragma once

#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
#include "Window2Tex.h"
#include "program.h"

class Promotion
{

public:
	Promotion();
	~Promotion();

	int clickedPiece = 0;

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void handleEvents();
	void update();
	void render();
	void clean();
	bool running();

	static SDL_Renderer* renderer;
	static SDL_Event event;

	void checkClickedPiece();

private:
	int count = 0;
	bool isRunning = false;
	SDL_Window* window;
};

