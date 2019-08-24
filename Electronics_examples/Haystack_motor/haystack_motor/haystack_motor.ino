

void setup() {

}

void loop() {
  analogWrite(3,255);
  delay(500);
  analogWrite(3,100);
  delay(500);
  analogWrite(3,0);
  delay(500);
}
