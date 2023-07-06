#include <cstdlib>
#include <ctime>
#include "Model_Character.h"
#include "View.h"
#include "View_Sprite.h"

int main() {

    View ventana(1088, 640, "JUEGO");

    while (ventana.isOpen()) {
        View_Sprite test("C:\\Users\\Asus\\Desktop\\project\\Project1\\resources\\sprites\\collision\\collision.png");
        test.spriteSetPosition(0, 0);
        test.spriteDraw(&ventana);
        ventana.processEvents();
        ventana.clear();
        ventana.display();

    }

    return 0;
}