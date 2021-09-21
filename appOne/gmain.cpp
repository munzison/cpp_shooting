#define c4
#ifdef c1
#include"libOne.h"
//カプセル化…関数全体をclassで囲む
class CHARACTER {//structとclassの違い,デフォルトがprivateかpublicか
    //禁止
protected:
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
    virtual void move() { //仮想関数
        Angle += AngSpeed;
    }
    void draw() {
        rectMode(CENTER);
        image(Img, Px, Py, Angle);
    }
};

class PLAYER :public CHARACTER {//継承 継承されるクラスを基底クラスと呼ぶ　baseclass
public:                              //継承したクラスを派生クラスと呼ぶ　　derived class
    void move() {
        Px += Vx;
    }
};

class ENEMY :public CHARACTER {
public:                             
    void move() {
        Py += Vy;
    }
};

class ENEMY_BULLET :public CHARACTER {
};



void gmain() {
    window(1920, 1080, full);
    int playerImg = loadImage("assets\\player.png");
    int enemyImg = loadImage("assets\\enemy.png");
    int enemyBulletImg = loadImage("assets\\eBullet.png");

    PLAYER player;
    ENEMY enemy;
    ENEMY_BULLET eBullet;

    player.setImage(playerImg);
    enemy.setImage(enemyImg);
    eBullet.setImage(enemyBulletImg);

    const int num = 3;
    CHARACTER* chara[num];
    chara[0] = &player;//多態性
    chara[1] = &enemy;
    chara[2] = &eBullet;

    for (int i = 0; i < num; i++) {
        chara[i]->init();
    }
    while (notQuit) {

        for (int i = 0; i < num; i++) { 
            chara[i]->move();
        }
        clear();
        for (int i = 0; i < num; i++) {
            chara[i]->draw();
        }
    }
}

#endif

#ifdef c2
#include"libOne.h"
class ENEMY {
private:
    int Img;
    float Px, Py, Vx;
public:
    void setImage(int img) {
        Img = img;
    }
    void init() {
        Px = random() % (int)width;
        Py = random() % (int)height;
        Vx = random() % 5 + 1.0f;

    }
    void move() {
        Px += Vx;
    }
    void draw() {
        image(Img, Px, Py);
    }
};
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    int enemyImg = loadImage("assets\\enemy.png");
    int num = 50;
    ENEMY* enemy = new ENEMY[num];
    for (int i = 0; i < num; i++) {
        enemy[i].setImage(enemyImg);
        enemy[i].init();
    }
    while (notQuit) {
        clear();
        for (int i = 0; i < num; i++) {
            enemy[i].move();
            enemy[i].draw();
        }
    }
    delete[] enemy;
}
#endif


#ifdef c3
#include"libOne.h"
class BABY {
public:
    //コンストラクタ
    BABY() {
        textSize(200);
        text("Hello", 700, 300);
    }
    //デストラクタ
    ~BABY() {
        textSize(200);
        text("GoodBye", 700, 600);
    }
};
void func() {
    BABY baby;

}
void gmain() {
    window(1920, 1080, full);
    BABY* baby = new BABY;
    delete baby;
    while (notQuit) {

    }

}

#endif


#ifdef c4
#include"libOne.h"
class FLOAT2 {
public:
    float x, y;
    FLOAT2() {
        x = 0;
        y = 0;
    }
    FLOAT2(float x,float y) {
        //thisポインタ
        this->x = x;
        this->y = y;
    }

};
void gmain() {
    window(1000, 1000, full);

    FLOAT2 pos(100,10);

    printSize(200);
    print(pos.x);
    print(pos.y);
    while (notQuit) {

    }
}
//#include"libOne.h"
//#include "TAKO_C4.h"

//gmain() {
    //window(1920, 1080, full);
    // takoImg = loadImage("assets\\enemy.png");
    //int num = 30;
    //TAKO_C4* takos = new TAKO_C4[num];
    //for (int i = 0; i < num; i++) {
        //takos[i].setImage(takoImg);
        //takos[i].init();
    //}
    //while (notQuit) {
        //for (int i = 0; i < num; i++) {
          //  takos[i].move();
            //takos[i].draw();
        //}
    //}
    //delete[] takos;
//}
#endif
