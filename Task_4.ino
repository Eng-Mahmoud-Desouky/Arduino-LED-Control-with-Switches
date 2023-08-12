int Switch1 = 2;
int Switch2 = 3;
int led1 = 4 ;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;

void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
}

void loop() {
int R1 = digitalRead(Switch1);
int R2 = digitalRead(Switch2);

digitalWrite(led1,R1);
digitalWrite(led2,R1);
digitalWrite(led4,R2);
digitalWrite(led6,R2);

}
