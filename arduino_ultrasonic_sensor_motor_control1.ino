int trig = 13 ;
int echo = 12 ;
int motor = 9 ;
long t =0;
float d ;
int s =0; //speed
void setup() {
 pinMode ( trig , OUTPUT );
 pinMode ( echo , INPUT );
 pinMode (motor , OUTPUT);
}
void loop() {
digitalWrite(trig , LOW );
delayMicroseconds(1);
digitalWrite(trig , HIGH);
delayMicroseconds(10);
digitalWrite(trig , LOW );
t = pulseIn(echo , HIGH );
d = (.0343/2)*t ; 
s= map(d, 0, 200, 255, 64);
if ( s > 255)
{ s =255 ;
}
else if (s < 0)
{
s = 0 ;
}
analogWrite(motor , s);
}
