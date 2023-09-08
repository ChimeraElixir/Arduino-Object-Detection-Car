void setup() {
pinMode( 4 , INPUT);
pinMode( 6 , INPUT);
pinMode( 8 , OUTPUT);
pinMode( 9 , OUTPUT);
pinMode( 10 , OUTPUT);
pinMode( 11 , OUTPUT);

}

void loop() {
  int left = digitalRead( 4);
  int right=digitalRead( 6);
  if(left==0 && right==1){
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,HIGH);

  }
  if(left==1 && right==0){
    digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);

  }
  if(left==0 && right==0){
    digitalWrite(8,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(11,LOW);

  }
  if(left==1 && right==1){
    digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(11,HIGH);

  }

  // put your main code here, to run repeatedly:

}
