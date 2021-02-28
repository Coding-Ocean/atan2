#include"libOne.h"
void gmain() {
    window(1000, 1000);
    int unkoImg = loadImage("assets\\unko.png");
    angleMode(DEGREES);
    rectMode(CENTER);
    while (notQuit) {
        clear(128);

        float px = 200;
        float py = 200;
        float x = mouseX - px;
        float y = mouseY - py;
        float r = sqrt(x * x + y * y);
        float deg = atan2(x, -y);
        image(unkoImg, px, py, deg);
        stroke(255, 160, 160);
        strokeWeight(5);
        arrow(px, py, px + x, py + y);

        float tpy = 50;
        textSize(tpy);
        //ãtéOäpä÷êîÇ≈äpìxÇãÅÇﬂÇÈ
        text((let)"x=" + x, 0, tpy); tpy += 50;
        text((let)"y=" + y, 0, tpy); tpy += 50;
        text((let)"asin(y / r)=" + asin(y / r), 0, tpy); tpy += 50;
        text((let)"acos(x / r)=" + acos(x / r), 0, tpy); tpy += 50;
        //text((let)"atan(y / x)=" + atan(y / x), 0, tpy); tpy += 50;
        text((let)"atan2(y , x)=" + atan2(y, x), 0, tpy); tpy += 50;
        text((let)"atan2(x , -y)=" + atan2(x, -y), 0, tpy); tpy += 50;
    }
}

/*
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    int unkoImg = loadImage("assets\\unko.png");
    angleMode(DEGREES);
    rectMode(CENTER);
    while (notQuit) {
        clear(128);
        mathAxis(500);
        float px = 0.0f;
        float py = 0.0f;
        float x = mathMouseX-px;
        float y = mathMouseY-py;
        float r = sqrt(x * x + y * y);
        float deg = atan2(-x, y);
        mathImage(unkoImg, px, py, deg);
        mathLine(px, py, px + x, py + y);

        float tpy = 50;
        textSize(tpy);
        //ãtéOäpä÷êîÇ≈äpìxÇãÅÇﬂÇÈ
        text((let)"x=" + x, 0, tpy); tpy += 50;
        text((let)"y=" + y, 0, tpy); tpy += 50;
        text((let)"asin(y / r)=" + asin(y / r), 0, tpy); tpy += 50;
        text((let)"acos(x / r)=" + acos(x / r), 0, tpy); tpy += 50;
        //text((let)"atan(y / x)=" + atan(y / x), 0, tpy); tpy += 50;
        text((let)"atan2(y , x)=" + atan2(y, x), 0, tpy); tpy += 50;
        text((let)"atan2(-x , y)=" + atan2(-x, y), 0, tpy); tpy += 50;
    }
}
*/
/*
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    angleMode(DEGREES);
    //íºäpéOäpå`ÇÃíÍï”Ç∆çÇÇ≥Ç™ï™Ç©Ç¡ÇƒÇ¢ÇÈ
    float x = 1.7320508f;//sqrt(3)
    float y = 1;
    float r = 2;
    while (notQuit) {
        clear(0,50,0);
        float py = 50;
        textSize(py);
        //ãtéOäpä÷êîÇ≈äpìxÇãÅÇﬂÇÈ
        text((let)"asin(y / r)="+asin(y / r), 0, py); py += 50;
        text((let)"acos(x / r)="+acos(x / r), 0, py); py += 50;
        text((let)"atan(y / x)="+atan(y / x), 0, py); py += 50;
        text((let)"atan2(y , x)=" + atan2(y, x), 0, py); py += 50;
    }
}
*/