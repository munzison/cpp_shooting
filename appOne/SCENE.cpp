#include "SCENE.h"
SCENE::SCENE(class GAME* game):
	GAME_OBJECT(game){

}
SCENE::~SCENE(){

}
void SCENE::create(){//�摜�ԍ��ݒ�

}
void SCENE::init(){

}
void SCENE::proc(){//�S����
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
