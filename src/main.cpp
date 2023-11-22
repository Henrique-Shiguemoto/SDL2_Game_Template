#include <iostream>

#define SDL_MAIN_HANDLED
#include "SDL.h"

int main(){
	if(SDL_Init(SDL_INIT_VIDEO)){
		std::cout << "SDL2 Couldn't Initialize!\n" << std::endl;
		return 1;
	}
	std::cout << "SDL2 Initialized!\n" << std::endl;
	return 0;
}