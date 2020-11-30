#define  LED15 A4
#define  LED14 A3
#define  LED13 A2
#define  LED12 A1
#define  LED11 A0
#define  LED10 13
#define  LED9 12
#define  LED8 11
#define  LED7 10
#define  LED6 9
#define  LED5 8
#define  LED4 7
#define  LED3 6
#define  LED2 5
#define  LED1 4
#define  BTNPIN 3
int buttonstate=0;
int delayTime = 100;
int miss = LOW;

void setup()
{
 pinMode(LED15,OUTPUT);
 pinMode(LED14,OUTPUT);
 pinMode(LED13,OUTPUT);
 pinMode(LED12,OUTPUT);
 pinMode(LED11,OUTPUT);
 pinMode(LED10,OUTPUT);
 pinMode(LED9,OUTPUT);
 pinMode(LED8,OUTPUT);
 pinMode(LED7,OUTPUT);
 pinMode(LED6,OUTPUT);
 pinMode(LED5,OUTPUT);
 pinMode(LED4,OUTPUT);
 pinMode(LED3,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED1,OUTPUT);
 pinMode(BTNPIN,INPUT);
 digitalWrite(LED15,0);
 digitalWrite(LED14,0);
 digitalWrite(LED13,0);
 digitalWrite(LED12,0);
 digitalWrite(LED11,0);
 digitalWrite(LED10,0);
 digitalWrite(LED9,0);
 digitalWrite(LED8,0);
 digitalWrite(LED7,0);
 digitalWrite(LED6,0);
 digitalWrite(LED5,0);
 digitalWrite(LED4,0);
 digitalWrite(LED3,0);
 digitalWrite(LED2,0);
 digitalWrite(LED1,0);
}

void loop() 
{
 digitalWrite(LED1,1);
 delay(delayTime);
 digitalWrite(LED2,1);
 delay(delayTime);
 digitalWrite(LED3,1);
 delay(delayTime);
 digitalWrite(LED4,1);
 delay(delayTime);
 digitalWrite(LED5,1);
 delay(delayTime);
 digitalWrite(LED6,1);
 delay(delayTime);
 digitalWrite(LED7,1);
 delay(delayTime);
 digitalWrite(LED8,1);
 delay(delayTime);
 digitalWrite(LED9,1);
 delay(delayTime);
 digitalWrite(LED10,1);
 delay(delayTime);
 digitalWrite(LED11,1);
 delay(delayTime);
 digitalWrite(LED12,1);
 delay(delayTime);
 digitalWrite(LED13,1);
 delay(delayTime);
 digitalWrite(LED14,1);
 delay(delayTime);
 digitalWrite(LED15,1);
 delay(delayTime);
 buttonstate = digitalRead(BTNPIN);
 if (buttonstate == HIGH && miss == LOW)
{
 digitalWrite(LED1,1);
 delay(delayTime);
 digitalWrite(LED1,0);
 delay(delayTime);
 digitalWrite(LED2,1);
 delay(delayTime);
 digitalWrite(LED2,0);
 delay(delayTime);
 digitalWrite(LED3,1);
 delay(delayTime);
 digitalWrite(LED3,0);
 delay(delayTime);
 digitalWrite(LED4,1);
 delay(delayTime);
 digitalWrite(LED4,0);
 delay(delayTime);
 digitalWrite(LED5,1);
 delay(delayTime);
 digitalWrite(LED5,0);
 delay(delayTime);
 digitalWrite(LED6,1);
 delay(delayTime);
 digitalWrite(LED6,0);
 delay(delayTime);
 digitalWrite(LED7,1);
 delay(delayTime);
 digitalWrite(LED7,0);
 delay(delayTime);
 digitalWrite(LED8,1);
 delay(delayTime);
 digitalWrite(LED8,0);
 delay(delayTime);
 digitalWrite(LED9,1);
 delay(delayTime);
 digitalWrite(LED9,0);
 delay(delayTime);
 digitalWrite(LED10,1);
 delay(delayTime);
 digitalWrite(LED10,0);
 delay(delayTime);
 digitalWrite(LED11,1);
 delay(delayTime);
 digitalWrite(LED11,0);
 delay(delayTime);
 digitalWrite(LED12,1);
 delay(delayTime);
 digitalWrite(LED12,0);
 delay(delayTime);
 digitalWrite(LED13,1);
 delay(delayTime);
 digitalWrite(LED13,0);
 delay(delayTime);
 digitalWrite(LED14,1);
 delay(delayTime);
 digitalWrite(LED14,0);
 delay(delayTime);
 digitalWrite(LED15,1);
 delay(delayTime);
 digitalWrite(LED15,0);
 delay(delayTime);
}
else {
  digitalWrite(LED1,1);
 delay(delayTime);
 digitalWrite(LED2,1);
 delay(delayTime);
 digitalWrite(LED3,1);
 delay(delayTime);
 digitalWrite(LED4,1);
 delay(delayTime);
 digitalWrite(LED5,1);
 delay(delayTime);
 digitalWrite(LED6,1);
 delay(delayTime);
 digitalWrite(LED7,1);
 delay(delayTime);
 digitalWrite(LED8,1);
 delay(delayTime);
 digitalWrite(LED9,1);
 delay(delayTime);
 digitalWrite(LED10,1);
 delay(delayTime);
 digitalWrite(LED11,1);
 delay(delayTime);
 digitalWrite(LED12,1);
 delay(delayTime);
 digitalWrite(LED13,1);
 delay(delayTime);
 digitalWrite(LED14,1);
 delay(delayTime);
 digitalWrite(LED15,1);
 delay(delayTime); 
}
if (buttonstate == LOW && miss == HIGH)
{
 digitalWrite(LED15,1);
 delay(delayTime);
 digitalWrite(LED15,0);
 delay(delayTime);
 digitalWrite(LED14,1);
 delay(delayTime);
 digitalWrite(LED14,0);
 delay(delayTime);
 digitalWrite(LED13,1);
 delay(delayTime);
 digitalWrite(LED13,0);
 delay(delayTime);
 digitalWrite(LED12,1);
 delay(delayTime);
 digitalWrite(LED12,0);
 delay(delayTime);
 digitalWrite(LED11,1);
 delay(delayTime);
 digitalWrite(LED11,0);
 delay(delayTime);
 digitalWrite(LED10,1);
 delay(delayTime);
 digitalWrite(LED10,0);
 delay(delayTime);
 digitalWrite(LED9,1);
 delay(delayTime);
 digitalWrite(LED9,0);
 delay(delayTime);
 digitalWrite(LED8,1);
 delay(delayTime);
 digitalWrite(LED8,0);
 delay(delayTime);
 digitalWrite(LED7,1);
 delay(delayTime);
 digitalWrite(LED7,0);
 delay(delayTime);
 digitalWrite(LED6,1);
 delay(delayTime);
 digitalWrite(LED6,0);
 delay(delayTime);
 digitalWrite(LED5,1);
 delay(delayTime);
 digitalWrite(LED5,0);
 delay(delayTime);
 digitalWrite(LED4,1);
 delay(delayTime);
 digitalWrite(LED4,0);
 delay(delayTime);
 digitalWrite(LED3,1);
 delay(delayTime);
 digitalWrite(LED3,0);
 delay(delayTime);
 digitalWrite(LED2,1);
 delay(delayTime);
 digitalWrite(LED2,0);
 delay(delayTime);
 digitalWrite(LED1,1);
 delay(delayTime);
 digitalWrite(LED1,0);
 delay(delayTime);
}
else {
  digitalWrite(LED1,1);
 delay(delayTime);
 digitalWrite(LED2,1);
 delay(delayTime);
 digitalWrite(LED3,1);
 delay(delayTime);
 digitalWrite(LED4,1);
 delay(delayTime);
 digitalWrite(LED5,1);
 delay(delayTime);
 digitalWrite(LED6,1);
 delay(delayTime);
 digitalWrite(LED7,1);
 delay(delayTime);
 digitalWrite(LED8,1);
 delay(delayTime);
 digitalWrite(LED9,1);
 delay(delayTime);
 digitalWrite(LED10,1);
 delay(delayTime);
 digitalWrite(LED11,1);
 delay(delayTime);
 digitalWrite(LED12,1);
 delay(delayTime);
 digitalWrite(LED13,1);
 delay(delayTime);
 digitalWrite(LED14,1);
 delay(delayTime);
 digitalWrite(LED15,1);
 delay(delayTime); 
}
}
