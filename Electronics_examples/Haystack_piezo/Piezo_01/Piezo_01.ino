/*
  Piezo_01.
  Buzzer on A0
*/
int ontime;
// the setup routine runs once when you press reset:
void setup() {
  pinMode(A0, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  int loop_delay = random(2000);
  
for(int i = 0; i<500; i++){
  digitalWrite(A0, HIGH);
  delayMicroseconds(loop_delay);
  digitalWrite(A0, LOW);
  delayMicroseconds(loop_delay);
  }
  
  
}
