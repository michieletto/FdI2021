#include <stdio.h>

typedef enum color_channel
{
    RED,
    GREEN,
    BLUE
} color_channel_t;

const char *color_name(color_channel_t ch)
{
    switch (ch)
    {
    case RED:
        return "red";
        break;

    case GREEN:
        return "green";
        break;

    case BLUE:
        return "blue";
        break;
    }
    return "unknown";
}

int main(void) {
    color_channel_t color;
    
    color = BLUE;

    printf("channel %s\n",
        color_name(color));
}