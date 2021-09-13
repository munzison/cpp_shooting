#include"libOne.h"
//�J�v�Z�����c�֐��S�̂�class�ň͂�
class CHARACTER {//struct��class�̈Ⴂ,�f�t�H���g��private��public��
    //�֎~
private:
    int Img = 0;//�摜�\��
    float Px = 0, Py = 0, Angle = 0;//�ʒu
    float Vx = 0, Vy = 0, AngSpeed = 0;//�摜�𓮂���
    //���J
public:
    void setImage(int img) {
        Img = img;
    }
    void init() {//�������֐�
        Px = width / 2;
        Py = height / 2;
        Angle = 0;
        Vx = 1;
        Vy = 1;
        AngSpeed = 0.01f;
    }
    void move() {
        Angle += AngSpeed;
    }
    void draw() {
        rectMode(CENTER);
        image(Img, Px, Py, Angle);
    }
};

void gmain() {
    window(1920, 1080, full);
    int playerImg = loadImage("assets\\player.png");

    CHARACTER chara;

    chara.setImage(playerImg);
    chara.init();
    while (notQuit) {
        chara.move();
        clear();
        chara.draw();
    }
}
