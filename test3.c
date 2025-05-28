#include<raylib.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define ROAD_WIDTH 300

int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "CAR RACING");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(GREEN);  

        
        int road = (SCREEN_WIDTH-ROAD_WIDTH)/2; // road screen ko center ma banako ya bata road ko x axis suru huxa
        DrawRectangle(road,0,ROAD_WIDTH,SCREEN_HEIGHT,DARKGRAY);
    
        DrawLine(400,0,400,600,WHITE);
        
        // Draw Right Lane Divider (optional)
        // Uncomment if you want a visual second lane
        DrawLine(road + ROAD_WIDTH / 2 + 2, 0, road + ROAD_WIDTH / 2 + 2, SCREEN_HEIGHT, WHITE);

        DrawText("2-Lane Road Demo", 10, 10, 20, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
