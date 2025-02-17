module;

#include <SDL3/SDL.h>

export module SDL;

export {
     //SDL_WindowFlags;
     void CreateWindow(const char *title, int w, int h, SDL_WindowFlags flags)
     {
           SDL_Window *window = SDL_CreateWindow(title, w, h, flags);
           if (window == NULL) {
                SDL_Log("Could not create window: %s\n", SDL_GetError());
                return;
           }
     }
};
