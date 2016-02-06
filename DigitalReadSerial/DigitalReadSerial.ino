/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor
 (讀取數位第2隻腳，並且輸出結果在串列監聽器)
 This example code is in the public domain.
 */

//digital pin 2 has a pushbutton attached to it. Give it a name:
//(要讓數位第2隻腳有東西連接。給他一個Name屬性:pushButton) 
int pushButton = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  //(初始化溝通報率為9600)
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  //(讓pushButton為輸入)
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  //(讀取輸入腳)
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  //(輸出button的狀態)
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}



