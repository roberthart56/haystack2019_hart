
//haystack motor 02.  Show use of analogWrite to vary speed.
int motorSpeed[6] = {200,125,230,56,30,255};

void setup() {
Serial.begin(9600);
}

void loop() {
// Serial.println(motorSpeed[0]); 
// Serial.println(motorSpeed[1]); 
// Serial.println(motorSpeed[2]); 

  for(byte i=0; i<6; i++){
  analogWrite(3,motorSpeed[i]);
  Serial.println(motorSpeed[i]);
  delay(500);
  analogWrite(3,0);
  delay(500);
  }
}
