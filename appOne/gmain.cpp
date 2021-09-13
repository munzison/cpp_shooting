#include"libOne.h"
//カプセル化…関数全体をclassで囲む
class CHARACTER {//structとclassの違い,デフォルトがprivateかpublicか
    //禁止
private:
    int Img = 0;//画像表示
    float Px = 0, Py = 0, Angle = 0;//位置
    float Vx = 0, Vy = 0, AngSpeed = 0;//画像を動かす
    //公開
public:
    void setImage(int img) {
        Img = img;
    }
    void init() {//初期化関数
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
