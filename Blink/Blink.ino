/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  (讓LED一秒亮，然後一秒暗，一直重複下去)
  Most Arduinos have an on-board LED you can control.
  (很多種Arduino有板上LED可以提供操控)
  On the Uno and Leonardo, it is attached to digital pin 13.
  (在Uno和Leonardo上的第13隻數位腳可供連接)
  If you're unsure what pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  //(初始化第13隻數位腳並且設為output)
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)(讓LED呈現高電位)
  delay(1000);              // wait for a second(延遲一秒)
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW(讓LED呈現低電位)
  delay(1000);              // wait for a second(再延遲一秒)
}
