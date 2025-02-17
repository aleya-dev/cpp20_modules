export module SDL;

#include <SDL3/SDL.h>

export {
     //SDL_WindowFlags;
     SDL_Window * SDLCALL SDL_CreateWindow(const char *title, int w, int h, SDL_WindowFlags flags);
};