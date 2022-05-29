int sensePin =0;
int ledPin =9;
void setup() {
Serial.begin(9600);

pinMode(ledPin, OUTPUT);
}
void loop() {
Serial.println(analogRead(sensePin));
delay(200);
}
