/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

// the setup routine runs once when you press reset:(當按下reset鈕{紅色那顆}時執行setup初始化動作)
void setup() {
  // initialize serial communication at 9600 bits per second:(報率每秒9600 bit/sec傳送)
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:(永遠執行直到reset)
void loop() {
  // read the input on analog pin 0:(讓類比的A0為輸入腳)
  int sensorValue = analogRead(A0);
  // print out the value you read:(輸出你所讀入的值)
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability(為了穩定，在下個讀入之間放個延遲)
}
