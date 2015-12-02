/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
}

int iLoop = 0;

// the loop function runs over and over again forever
void loop() {
  if ( iLoop < 14 )
  {
    digitalWrite(iLoop, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);              // wait for a second
    digitalWrite(iLoop, LOW);    // turn the LED off by making the voltage LOW
  }
  else  //Do analog style inputs
  {
    if ( iLoop < 22 )
    {
      switch (iLoop)
      {
        case 14:
          digitalWrite(A0, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A0, LOW);    // turn the LED off by making the voltage LOW
          break;
        case 15:
          digitalWrite(A1, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A1, LOW);    // turn the LED off by making the voltage LOW
          break;
        case 16:
          digitalWrite(A2, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A2, LOW);    // turn the LED off by making the voltage LOW
          break;
        case 17:
          digitalWrite(A3, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A3, LOW);    // turn the LED off by making the voltage LOW
          break;
        case 18:
          digitalWrite(A4, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A4, LOW);    // turn the LED off by making the voltage LOW
          break;
        case 19:
          digitalWrite(A5, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A5, LOW);    // turn the LED off by making the voltage LOW
          break;
        case 20:
          digitalWrite(A6, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A6, LOW);    // turn the LED off by making the voltage LOW
          break;
        case 21:
          digitalWrite(A7, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second
          digitalWrite(A7, LOW);    // turn the LED off by making the voltage LOW
          break;
        default:
          break;
      }
    }
    else //expired
    {
      iLoop = -1;
    }
  }
  iLoop++;
}
