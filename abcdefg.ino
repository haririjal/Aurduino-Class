void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  
  Serial.begin(9600);
}

void loop() {
   long dur,dis;
   digitalWrite(3,0);
   delayMicroseconds(2);
   digitalWrite(3,1);
   delayMicroseconds(10);
   digitalWrite(3,0);

   dur = pulseIn(4,1);
   dis = (0.034/2)*dur;
   Serial.println(dis);

  

}



