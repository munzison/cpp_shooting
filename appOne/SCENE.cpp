#include "SCENE.h"
SCENE::SCENE(class GAME* game):
	GAME_OBJECT(game){

}
SCENE::~SCENE(){

}
void SCENE::create(){//‰æ‘œ”Ô†İ’è

}
void SCENE::init(){

}
void SCENE::proc(){//S‘Ÿ•”
	update();
	draw();
	nextScene();
}
void SCENE::update(){

}
void SCENE::draw(){

}
void SCENE::nextScene(){

}
