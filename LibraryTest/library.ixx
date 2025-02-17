export module LibraryTest;

import SDL;

export struct Window {
    static void Test();
    static void Open()
    {
        CreateWindow("LibraryTest", 800, 600, 0);
    }
};
