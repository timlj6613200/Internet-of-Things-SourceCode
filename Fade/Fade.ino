/*
 Fade

 This example shows how to fade an LED on pin 9
 using the analogWrite() function.

 The analogWrite() function uses PWM, so if
 you want to change the pin you're using, be sure to use another PWM capable pin. 
 (analogWrite方式適用PWM技術，所以要想用的話，要找符合的腳位)
 {PWM（Pulse Width Modulation）--一種以數位方式來達到類比輸出的技術}
 On most Arduino, the PWM pins are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.
(PWM腳位通常都會有"~"的符號)
 This example code is in the public domain.
 */

int led = 9;           // the PWM pin the LED is attached to (LED連接PWM腳)
int brightness = 0;    // how bright the LED is (確認LED是否有亮)
int fadeAmount = 5;    // how many points to fade the LED by (多少次指示LED褪色)

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:(宣告第9腳為輸出)
  //pinMode(設定腳位,為輸出或輸入);
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9: (設定第9隻腳為brightness狀態)
  //analogWrite(腳位,狀態);
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  //(每次LOOP都改變brightness)
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  //(假如顏色到底顛倒方向回來)
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait for 30 milliseconds to see the dimming effect
  //(延遲30毫秒才看的出來漸漸變暗)
  delay(30);
}
