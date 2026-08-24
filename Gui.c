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
   int sizeText;

}Button;
typedef struct {
    char * text;
    Color color;
    Rectangle rect;
    int sizeText;

}Label;

/**
 Block function
 */
bool GuiButtonIsClic(Button button,char typeClic) {//isclic
    if (CheckCollisionPointRec(GetMousePosition(), button.rect)) {
        if (typeClic == 0) {
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)||IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) {
                return true;
            }
            else {
                return false;
            }

        }
        else if (typeClic == 1) {
            if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)||IsMouseButtonReleased(MOUSE_RIGHT_BUTTON)) {
                return true;
            }
            else {
                return false;
            }

        }
        else if (typeClic == 2) {
            if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)||IsMouseButtonDown(MOUSE_RIGHT_BUTTON)) {
                return true;
            }
            else {
                return false;
            }


        }
        else if (typeClic == 3) {
            if (IsMouseButtonUp(MOUSE_LEFT_BUTTON)||IsMouseButtonUp(MOUSE_RIGHT_BUTTON)) {
                return true;
            }
            else {
            }
                return false;
            }
        else {
            perror("неизвестный тип клика проверки");
        }


        }
    }
void GuiRenderButton(Button button) {
    DrawRectangleRec(button.rect, button.color);
    DrawText(button.text,button.rect.x, button.rect.y,button.sizeText,button.color);
}
void GuiRenderLabel(Label label) {
    DrawRectangleRec(label.rect, label.color);
    DrawText(label.text,label.rect.x, label.rect.y,label.sizeText,label.color);
}
