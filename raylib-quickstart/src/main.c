#include "raylib.h"

#include "resource_dir.h" // utility header for SearchAndSetResourceDir

int main() {
  // Tell the window to use vysnc and work on high DPI displays
  SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);

  // Create the window and OpenGL context
  InitWindow(1280, 800, "Hello Raylib");

  // Utility function from resource_dir.h to find the resources folder and set
  // it as the current working directory so we can load from it
  SearchAndSetResourceDir("resources");

  // Load a texture from the resources directory
  Texture wabbit = LoadTexture("wabbit_alpha.png");

  // game loop
  while (!WindowShouldClose()) // run the loop untill the user presses ESCAPE or
                               // presses the Close button on the window
  {
    // drawing
    BeginDrawing();

    // Setup the backbuffer for drawing (clear color and depth buffers)
    ClearBackground(BLACK);

    // draw some text using the default font
    DrawText("Scheduling Algorithms", 200, 200, 20, WHITE);

    // draw our texture to the screen
    DrawRectangle(400, 400, 100, 100, GREEN);

    // end the frame and get ready for the next one  (display frame, poll
    // input, etc...)
    EndDrawing();
  }

  // cleanup
  // unload our texture so it can be cleaned up
  UnloadTexture(wabbit);

  // destory the window and cleanup the OpenGL context
  CloseWindow();
  return 0;
}
