void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  
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
   if(dis<10){
    digitalWrite(5,1);
  delayMicroseconds(834);
  digitalWrite(5,0);
  delayMicroseconds(20000-834);
   }
   else{
     digitalWrite(5,1);
  delayMicroseconds(1500);
  digitalWrite(5,0);
  delayMicroseconds(20000-1500);
   }

  

}



