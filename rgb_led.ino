void setup() {
  
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,1);
  digitalWrite(7,0);
  delay(3000);
  digitalWrite(8,0);
  digitalWrite(7,1);
  delay(3000);
  digitalWrite(8,0);
  digitalWrite(7,0);
  delay(3000);
  
  
  
 

}
