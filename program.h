#pragma once

#include <iostream>
#include "SDL.h"
#include "SDL_image.h"

// Window resolution
const int windowWidth = 1280;
const int windowHeight = 720;
const int promotionWindowWidth = 560;
const int promotionWindowHeight = 230;

class Program
{
public:
	Program();
	~Program();

	bool promotionWindow = false;
	int clickedPiecenumber;
	int clickedPiece = 0;

	std::string figureName[32] = {
		"Rook",
		"Knight",
		"Bishop",
		"Queen",
		"King",
		"Bishop",
		"Knight",
		"Rook",

		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",

		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",
		"Pawn",

		"Rook",
		"Knight",
		"Bishop",
		"Queen",
		"King",
		"Bishop",
		"Knight",
		"Rook"
	};

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void handleEvents();
	void update();
	void render();
	void clean();
	bool running();

	static SDL_Renderer* renderer;
	static SDL_Event event;

	void centerMousePosition();

	int getClickedPieceNumber();
	void setPiecePositionOnMousePosition();
	void centerPiecePosition();
	void setPiecesPositionOnBoard();
	void setPiece_Name_and_Color_and_Tex_and_SourcePositionAndSize_and_DestinationSize_ForAllPieces();
	void checkPawnPromotion();

private:
	int count = 0;
	bool isRunning = false;
	SDL_Window* window;

	// Mouse handling
	int mousedown = 0;
	int numberOfTheClickedPiece = 0;
};