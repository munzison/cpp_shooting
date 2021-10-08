#include "GAME_CLEAR.h"
#include "libOne.h"

GAME_CLEAR::GAME_CLEAR(class GAME* game) :
	SCENE(game) {
}
GAME_CLEAR::~GAME_CLEAR() {

}
void GAME_CLEAR::darw() {
	clear();
	printSize(300);
	print("    Game Clear");
}
void GAME_CLEAR::nextScene() {

}
