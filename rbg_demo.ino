void setup() {
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,1);
  delay(1000);
  digitalWrite(8,0);
  delay(1000);
}
