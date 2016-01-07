/*
 ESP8266 ESP-01　板子上的藍色LED燈 閃爍範例
 因為GPIO1與8266的Serial TX　腳位相同　所以在使用該範例的時候不能使用Serial.print()
 以下範例"BUILTIN _LED"指的就是板子上的藍色LED燈
*/

void setup() {
  pinMode(BUILTIN_LED, OUTPUT);     // 註冊 BUILTIN_LED 　為輸出腳
}

void loop() {
  digitalWrite(BUILTIN_LED, LOW);   // 讓腳位進入低電壓 
  delay(1000);                      // 延遲1秒
  digitalWrite(BUILTIN_LED, HIGH);  // 讓腳位進入低電壓
  delay(2000);                      // 延遲1秒
}
