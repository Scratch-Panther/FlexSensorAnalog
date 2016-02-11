/*


  READING FLEX SENSOR DATA

  Bend the flex sensor and read how the resistance values change.


  A flex sensor is a plastic strip with a conductive coating.
  When the strip is straight, the coating will be a certain
  resistance. When the strip is bent, the particles in the coating
  get further apart, increasing the resistance. You are going to use this
  sensor to sense finger movement in the gloves.

  Hardware connections:

  Flex sensor:

    The flex sensor is the plastic strip with black stripes.
    It senses bending away from the striped side.

    The flex sensor has two pins, and since it's a resistor,
    the pins are interchangable.

    Connect one of the pins to ANALOG IN pin 0 on the Arduino.
    Connect the same pin, through a 22K Ohm resistor (red red orange) to the negative circuit,
    (GND).
    Connect the other pin to the red breadboard wires that are linked to the positive circuit,
    (5V).


*/


// Define the analog input pin to measure flex sensor position:

int flexpin0 = A0;
int flexpin1 = A1;
int flexpin2 = A2;
int flexpin3 = A3;
int flexpin4 = A4;

void setup()
{
  // Use the serial monitor window to help debug our sketch:

  Serial.begin(9600);

}


void loop()
{
  int flexposition0;
  int flexposition1;
  int flexposition2;
  int flexposition3;
  int flexposition4;


  // Input value from the analog pin.

  // Read the position of the flex sensor output (0 to 1023):

  flexposition0 = analogRead(flexpin0);
  flexposition1 = analogRead(flexpin1);
  flexposition2 = analogRead(flexpin2);
  flexposition3 = analogRead(flexpin3);
  flexposition4 = analogRead(flexpin4);

  // To help tune our program, we'll use the serial port to
  // print out our values to the serial monitor window:

  Serial.print("sensor0: ");
  Serial.println(flexposition0);

  Serial.print("sensor1: ");
  Serial.println(flexposition1);


  Serial.print("sensor2: ");
  Serial.println(flexposition2);


  Serial.print("sensor3: ");
  Serial.println(flexposition3);


  Serial.print("sensor4: ");
  Serial.println(flexposition4);

//Note that the sensor lines are "print" while the flex position lines are "println"
// This makes each sensor output on a new line, which makes it significantly easier to read.
 

  // After you upload the sketch, turn on the serial monitor
  // (the magnifying-glass icon to the right of the icon bar).
  // You'll be able to see the sensor values. Bend the flex sensor
  // and note its minimum and maximum values. 

}

