float setpoint = 30; //desired temperature set to 30 degrees
int tempPin = A0; //auduino analog input A0
int ledPin = 8; // led connect to digital pin 8

void setup()
{
    Serial.begin(9600); // start serial communication , baud rate spped of data transfer

    pinMode(ledPin,OUTPUT) // set D8 pin as output
    Serial.print("enter set temperature (degreeC):");


}
void loop()
{
    float temp = (analogRead(tempPin)*5.0/1023.0-0.5)*100;
    Serial.print("Temp :  ", temp);
    Serial.print("| Set : ", setpoint);
    digitalWrite(ledPin, temp < setpoint);

    if (Serial.available()) // check that any data avaialble or entered at serial monitor
    setpoint= Serial.parseFloat() // read for any new dta write an serial monitor and save it to variable
    delay(4000) // delay for 4 sec
}
