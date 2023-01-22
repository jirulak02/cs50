#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //TODO - DONE
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            int n = round((image[i][j].rgbtBlue * image[i][j].rgbtGreen * image[i][j].rgbtRed) / 3);
            image[i][j].rgbtBlue = n;
            image[i][j].rgbtGreen = n;
            image[i][j].rgbtRed = n;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    //TODO - DONE
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            int r = image[i][j].rgbtRed;
            int g = image[i][j].rgbtGreen;
            int b = image[i][j].rgbtBlue;
            int sepiaRed = round(.393 * r + .769 * g + .189 * b);
            int sepiaGreen = round(.349 * r + .686 * g + .168 * b);
            int sepiaBlue = round(.272 * r + .534 * g + .131 * b);
            if(sepiaRed > 255) {
                sepiaRed = 255;
            }
            if(sepiaGreen > 255) {
                sepiaGreen = 255;
            }
            if(sepiaBlue > 255) {
                sepiaBlue = 255;
            }
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtRed = sepiaRed;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    //TODO - DONE
    for(int i = 1; i < height; i++) {
        int w = width / 2;
        for(int j = 1; j < w; j++) {
            tmp = image[i][j];
            *image[i][j] = *image[i][width - j];
            *image[i][width - j] = tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    //TODO
    return;
}
