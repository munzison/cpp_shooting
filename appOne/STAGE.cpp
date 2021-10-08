#include "STAGE.h"
#include "libOne.h"

STAGE::STAGE(class GAME* game) :
	SCENE(game) {
}
STAGE::~STAGE() {

}
void STAGE::darw() {
	clear();
	printSize(300);
	print("STAGE");
}
void STAGE::nextScene() {

}
