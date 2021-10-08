#include "GAME_OVER.h"
#include "libOne.h"

GAME_OVER::GAME_OVER(class GAME* game) :
	SCENE(game) {
}
GAME_OVER::~GAME_OVER() {

}
void GAME_OVER::darw() {
	clear();
	printSize(300);
	print("    Game Over");
}
void GAME_OVER::nextScene() {

}
