#include <MP3.h>
#include <Servo.h>
Servo LL1, LL2, LL3, LL4, LL5, LL6, LL7, LL8, LL9, LR1, LR2, LR3, LR4, LR5, LR6, LR7, LR8, LR9;
// 1-3 front leg 4-6 middle leg 7-9 back leg
MP3 mp3(17, 16);
int x, p = 90, lr1 = p - 5, lr2 = p - 5, lr3 = p + 25, lr4 = p - 5, lr5 = p + 5, lr6 = p + 10, lr7 = p + 8, lr8 = p + 8, lr9 = p - 30, ll1 = p + 5, ll2 = p, ll3 = p - 20, ll4 = p + 5, ll5 = p + 5, ll6 = p + 5, ll7 = p, ll8 = p - 5, ll9 = p + 30;
int data = 0;
bool IRF, irf;
int dancy = 1;
bool inputPin = false;
bool booly;
void setup() {
  pinMode(8, INPUT);
  LR1.attach(22);
  LR2.attach(24);
  LR3.attach(26);
  LR4.attach(28);
  LR5.attach(30);
  LR6.attach(32);
  LR7.attach(34);
  LR8.attach(36);
  LR9.attach(38);
  LL1.attach(23);
  LL2.attach(25);
  LL3.attach(27);
  LL4.attach(29);
  LL5.attach(31);
  LL6.attach(33);
  LL7.attach(35);
  LL8.attach(37);
  LL9.attach(39);
  LR1.write(lr1);
  LR2.write(lr2);
  LR3.write(lr3);
  LR4.write(lr4);
  LR5.write(lr5);
  LR6.write(lr6);
  LR7.write(lr7);
  LR8.write(lr8);
  LR9.write(lr9);
  LL1.write(ll1);
  LL2.write(ll2);
  LL3.write(ll3);
  LL4.write(ll4);
  LL5.write(ll5);
  LL6.write(ll6);
  LL7.write(ll7);
  LL8.write(ll8);
  LL9.write(ll9);
  Serial.begin(9600);
  Serial3.begin(9600);
  mp3.begin(9600);
  pinMode(A8, INPUT);
  pinMode(A7, INPUT);
}
void loop()
{
  if (Serial3.available() > 0)
  {
    data = Serial3.read();
    Serial.println(data);
    if (data == '1')
    {
      sit();
    }
    if (data == '2')
    {
      stand();
    }
    while (data == '3')
    {
      IRF = digitalRead(A8);
      Serial.print("forward= ");
      Serial.println(IRF);
      if (IRF) {
        forward();
      }
      else {
        still();
      }
      if (Serial3.available() > 0)
        data = Serial3.read();
    }
    while (data == '4')
    {
      irf = digitalRead(A7);
      Serial.print("backward= ");
      Serial.println(irf);
      if (irf) {
        backward();
      }
      else {
        still();
      }
      if (Serial3.available() > 0)
        data = Serial3.read();
    }
    while (data == '5')
    {
      right();
      if (Serial3.available() > 0)
        data = Serial3.read();
    }
    while (data == '6')
    {
      left();
      if (Serial3.available() > 0)
        data = Serial3.read();
    }
    while (data == '8')
    {
      if (dancy == 1) {
        mp3.play(2);
        dancy = 0;
      }
      if (booly)
      {
        for (int i = 0; i <= 30; i++)
        {
          LR8.write(lr8 + i);//+30
          if (i < 16)
          {
            LL8.write(ll8 - i);//-15
            LR5.write(lr5 + i);//+15
          }
          delay(10);
        }
        booly = false;
      }
      boogi();
      if (Serial3.available() > 0)
        data = Serial3.read();
    }
    while (data == '9')
    {
      if (dancy == 1) {
        mp3.play(1);
        dancy = 0;
      }
      wave();
      if (Serial3.available() > 0)
        data = Serial3.read();
    }
    if (data == '7')
    {
      dancy = 1;
      still();
      mp3.stop();
    }
    if(data == 'a')
    { 
    sit();
    while(true){
      if(pir()){
        break;
      }
    }
      stand();
    }
  }
  booly = true;
}
