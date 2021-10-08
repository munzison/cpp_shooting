#include "TITLE.h"
#include "libOne.h"

TITLE::TITLE(class GAME* game) :
	SCENE(game){
}
TITLE::~TITLE() {

}
void TITLE::darw() {
	clear();
	printSize(300);
	print("Title");
}
void TITLE::nextScene() {

}
