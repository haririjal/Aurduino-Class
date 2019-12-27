void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
}

void loop() {
  int display;
  for(display=2;display<=9;display++)
  {
    digitalWrite(display,1);
    
    delay(200);
    
  } 
  for(display=9;display>=2;display--){
    digitalWrite(display,0);
    delay(200);
  }

}
