

void setup() {
  

}

void loop() {
  for(int i=0; i<3000; i++){
 analogWrite(5, i%30+1);
 analogWrite(6, ((i+15)%30)+1);
 delay(500);
  }
 
}
