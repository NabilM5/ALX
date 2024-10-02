#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// Define colors for walls, ground, and ceiling
SDL_Color wallColor = {0x00, 0x00, 0xFF}; // Blue for walls
SDL_Color groundColor = {0x55, 0x33, 0x22}; // Brown for ground
SDL_Color ceilingColor = {0xA0, 0xA0, 0xA0}; // Gray for ceiling

int main(__attribute__((unused)) int argc, __attribute__((unused)) char* args[] )
{
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;

    // Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    }
    else
    {
        window = SDL_CreateWindow( "Maze Project", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( window == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        }
        else
        {
            screenSurface = SDL_GetWindowSurface( window );

            // Fill the ceiling
            SDL_Rect ceilingRect = {0, 0, SCREEN_WIDTH, SCREEN_HEIGHT / 2};
            SDL_FillRect( screenSurface, &ceilingRect, SDL_MapRGB( screenSurface->format, ceilingColor.r, ceilingColor.g, ceilingColor.b ) );

            // Fill the ground
            SDL_Rect groundRect = {0, SCREEN_HEIGHT / 2, SCREEN_WIDTH, SCREEN_HEIGHT / 2};
            SDL_FillRect( screenSurface, &groundRect, SDL_MapRGB( screenSurface->format, groundColor.r, groundColor.g, groundColor.b ) );

            // Now draw a sample wall (for demo purposes)
            SDL_Rect wallRect = {SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2};
            SDL_FillRect( screenSurface, &wallRect, SDL_MapRGB( screenSurface->format, wallColor.r, wallColor.g, wallColor.b ) );

            SDL_UpdateWindowSurface( window );

            // Event loop
            SDL_Event e;
            bool quit = false;
            while( quit == false )
            {
                while( SDL_PollEvent( &e ) )
                {
                    if( e.type == SDL_QUIT )
                    {
                        quit = true;
                    }
                }
            }
        }
    }

    // Clean up
    SDL_DestroyWindow( window );
    SDL_Quit();

    return 0;
}
