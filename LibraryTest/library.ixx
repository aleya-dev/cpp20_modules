export module LibraryTest;

import SDL;

export enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

export struct Window {
    static void Test();
    static void Open()
    {
        SDL_CreateWindow("LibraryTest", 800, 600, 0);
    }
};
