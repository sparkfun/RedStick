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
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop()
{
	Serial.println(analogRead(A0));
	  float voltage, degreesC, degreesF;

  // First we'll measure the voltage at the analog pin. Normally
  // we'd use analogRead(), which returns a number from 0 to 1023.
  // Here we've written a function (further down) called
  // getVoltage() that returns the true voltage (0 to 5 Volts)
  // present on an analog input pin.

  voltage = 0;
  for(int i = 0; i < 100; i++)
  {
	  voltage += getVoltage(A0);
  }
  voltage = voltage / 100;

  // Now we'll convert the voltage to degrees Celsius.
  // This formula comes from the temperature sensor datasheet:

  degreesC = (voltage - 0.5) * 100.0;

  // While we're at it, let's convert degrees Celsius to Fahrenheit.
  // This is the classic C to F conversion formula:

  degreesF = degreesC * (9.0/5.0) + 32.0;


  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(degreesC);
  Serial.print("  deg F: ");
  Serial.println(degreesF);

  // These statements will print lines of data like this:
  // "voltage: 0.73 deg C: 22.75 deg F: 72.96"

  // Note that all of the above statements are "print", except
  // for the last one, which is "println". "Print" will output
  // text to the SAME LINE, similar to building a sentence
  // out of words. "Println" will insert a "carriage return"
  // character at the end of whatever it prints, moving down
  // to the NEXT line.

  delay(1000); // repeat once per second (change as you wish!)
}


float getVoltage(int pin)
{
  return ((analogRead(pin) * 0.004982814));
}
