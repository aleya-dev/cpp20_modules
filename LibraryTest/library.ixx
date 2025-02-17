module;

#include <SDL3/SDL.h>

export module LibraryTest;

export struct Window {
    static void Test();
    static SDL_Window* CreateWindow(const char* title, int w, int h, SDL_WindowFlags flags)
    {
        SDL_Window* window = SDL_CreateWindow(title, w, h, flags);
        if (!window) {
            SDL_Log("Could not create window: %s\n", SDL_GetError());
            return nullptr;
        }

        return window;
    }
};
