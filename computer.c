#include <stdio.h>
#include <math.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

void drawHeart(SDL_Renderer* renderer, int x, int y, int size) {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    int r = size / 2;
    int centerX = x + r;
    int centerY = y + r;
    float angle = 0;
    float step = M_PI / 180;
    while (angle < 2 * M_PI) {
        int xPos = r * (16 * pow(sin(angle), 3));
        int yPos = -r * (13 * cos(angle) - 5 * cos(2 * angle) - 2 * cos(3 * angle) - cos(4 * angle));
        SDL_RenderDrawPoint(renderer, centerX + xPos, centerY + yPos);
        angle += step;
    }
}

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("My Window",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    drawHeart(renderer, SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2 - 50, 100);

    SDL_RenderPresent(renderer);

    SDL_Delay(5000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
