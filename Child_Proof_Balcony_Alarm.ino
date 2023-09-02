int trigPin = 12;
int echoPin = 11;
int pingTravelTime;
int buzz = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(buzz,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTravelTime = pulseIn(echoPin,HIGH);
delay(25);
Serial.println(pingTravelTime);
if(pingTravelTime<6000 and pingTravelTime>5000){
  digitalWrite(buzz,HIGH);
  }
else{
  digitalWrite(buzz,LOW);
  }
}
