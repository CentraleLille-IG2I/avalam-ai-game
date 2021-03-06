#ifndef DISPLAY_CPP
#define DISPLAY_CPP

#include <string>
#include "SDL2/SDL.h"
#include "../GraphicComponent/GraphicComponent.class.h"
#include "../Window/Window.class.h"
#include "../../config/constants.h"

class Display
{
public:
	SDL_Renderer *renderer;
	int x, y, width, height;
	unsigned int size;
	GraphicComponent** components;

	Display(int set_x, int set_y, int set_width, int set_height, Window* window);
	Display(Window* window);
	
	~Display();

	Display* initWindow();
	Display* destroyRenderer(SDL_Renderer *renderer);
	int update();

	Display* updateWindow();
	
	GraphicComponent* addComponent(GraphicComponent* componentToAdd);

	GraphicComponent* getTargeted(int mouse_x, int mouse_y);

	std::string* inputString(std::string question);
};


#endif