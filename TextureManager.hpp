#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <map>

class TextureManager {
public:
	TextureManager();
	static void createTextureManager(SDL_Renderer* renderer);
	static SDL_Texture* load(std::string image_path);
	static void createText(std::string font_path, int font_size, std::string message_text, SDL_Color color);
	static void displayText(int x, int y);
	static void clean();
	static SDL_Renderer* renderer;
	static SDL_Texture* text_texture;
	static SDL_Rect location_rect;

private:
	static std::map<std::string, SDL_Texture*> texture_map;

};