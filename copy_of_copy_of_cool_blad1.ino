int EN1= 10;
int IN1= 6;
int IN2= 7;
int IN3= 8;
int IN4= 9;
int EN2= 5;
char IN;
void setup() {
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
Serial.begin(9600);
}
void loop() {
  if(Serial.available()>0){
    IN=Serial.read(); 
  }
if (IN=='f'){
  forword();
  }
 else if(IN == 'b'){
  back();
  }
else if(IN == 'l'){
  left();
  }
 else if (IN == 'r'){
 right();
  }
}

void forword (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
  }

  
void back (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(IN1,0);
digitalWrite(IN2,1);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
  }

  void right (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
  }

  void left (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
  }

  
  void stope (){
analogWrite(EN1,0);
analogWrite(EN2,0);
digitalWrite(IN1,0);
digitalWrite(IN2,1);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
  }