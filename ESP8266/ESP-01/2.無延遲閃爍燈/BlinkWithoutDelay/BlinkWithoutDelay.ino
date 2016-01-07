/* 
ESP8266 ESP-01　板子上的藍色LED燈 　無閃爍範例
如果在Delay(1000)延遲時還必須讀取按鈕狀態　
此時就將使用到無延遲這個方式來實做
 
因為GPIO1與8266的Serial TX　腳位相同　所以在使用該範例的時候不能使用Serial.print()
以下範例"BUILTIN _LED"指的就是板子上的藍色LED燈
*/

int ledState = LOW;                 　//　設定LED初值為LOW  

unsigned long tmpMillis = 0;          //　註冊以前時間
const long interval = 1000;           //　設定等待時間

void setup() {
  pinMode(BUILTIN_LED, OUTPUT);       //　註冊GPIO1為輸出腳位
}

void loop()
{
  unsigned long currentMillis = millis();  　　　　//註冊一個currentMillis存放目前時間
  if(nowMillis - tmpMillis >= interval) {           //假如[目前時間]減掉[暫存時間]大於等於[等待時間]
    tmpMillis = nowMillis;                          //將[過去時間]存入
    if (ledState == LOW)
      ledState = HIGH;                              // 讓腳位進入高電壓
    else
      ledState = LOW;                               // 讓腳位進入低電壓
    digitalWrite(BUILTIN_LED, ledState);            //LED狀態寫入BUILTIN_LED
  }
}
