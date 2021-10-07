#include "SCENE.h"
SCENE::SCENE(class GAME* game):
	GAME_OBJECT(game){

}
SCENE::~SCENE(){

}
void SCENE::create(){//画像番号設定

}
void SCENE::init(){

}
void SCENE::proc(){//心臓部
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
