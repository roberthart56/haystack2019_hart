

void setup() {
}

void loop() {

  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 125);
  analogWrite(9, 0);
  analogWrite(10, 125);
  analogWrite(11, 0);
  delay(1000);
  analogWrite(3, 0);
  analogWrite(5, 255);
  analogWrite(6, 0);
  analogWrite(9, 125);
  analogWrite(10, 0);
  analogWrite(11, 125);
  delay(1000);

}
