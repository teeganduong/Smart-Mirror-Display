#pragma once
#include "Widget.h"
#include <string>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>

class Text: public Widget
{
public:
	Text(int, int, SDL_Renderer*, SDL_Window*, std::string, SDL_Color, std::string, int);
	void draw();
	void changeText(std::string);
	void changeFont(std::string, int);
	~Text();
private:
	std::string text;
	SDL_Texture* texture;
	SDL_Color color;
	TTF_Font *font;
	int size;
};
