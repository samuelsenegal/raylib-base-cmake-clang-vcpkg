#include <iostream>
#include <raylib.h>

int main(int, char**){
    std::cout << "Initializing window";
    InitWindow(1280, 720, "Test Window");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawFPS(0, 0);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
