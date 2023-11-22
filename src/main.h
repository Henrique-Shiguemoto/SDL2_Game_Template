#ifndef MAIN_H
#define MAIN_H

#define GAME_NAME 				"Game Name"
#define WINDOW_DEFAULT_WIDTH  	800
#define WINDOW_DEFAULT_HEIGHT 	600

bool Init();
void CreateWindow();
void HandleInput();
void SimulateWorld();
void RenderGraphics();
void Quit();

#endif
