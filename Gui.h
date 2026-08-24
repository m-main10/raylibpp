

#ifndef MISHAOSWIN_GUI_H
#define MISHAOSWIN_GUI_H
/**
 *  Gui.c
 *   Library Created to Make GUI creation easier
 *   Creator m-main10
 *   The library is required for operation raylib
 */

#include "raylib.h"//Raylib
#include <stdbool.h>//bool True False
#include <stdio.h>//perror
/**
 *block macro
 */
#define IsClicPressed 0
#define IsClicReleased 1
#define IsClicDown 2
#define IsClicUp 3
 /**
 *  Structure block
 */
typedef struct {
    char * text;
    Rectangle rect;
    Color color;

}Button;
typedef struct {
    char * text;
    Color color;
    Rectangle rect;
}Label;

/**
 Block function
 */
bool GuiButtonIsClic(Button button,char typeClic);
#endif //MISHAOSWIN_GUI_H
