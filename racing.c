#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define ROAD_WIDTH 300

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "2D Car Racing - 2 Lane Road");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(GREEN);  // Grass background

        // Draw Road
        int roadX = (SCREEN_WIDTH - ROAD_WIDTH) / 2;
        DrawRectangle(roadX, 0, ROAD_WIDTH, SCREEN_HEIGHT, DARKGRAY);

        // Draw Left Lane Divider
        DrawLine(roadX + ROAD_WIDTH / 2 - 2, 0, roadX + ROAD_WIDTH / 2 - 2, SCREEN_HEIGHT, WHITE);
        
        // Draw Right Lane Divider (optional)
        // Uncomment if you want a visual second lane
        // DrawLine(roadX + ROAD_WIDTH / 2 + 2, 0, roadX + ROAD_WIDTH / 2 + 2, SCREEN_HEIGHT, WHITE);

        DrawText("2-Lane Road Demo", 10, 10, 20, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
