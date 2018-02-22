int buzzpin=8;
int greenledpin=11;
int redledpin1= 9;
int redledpin2= 5;
int echopin=6;
int trigpin= 7;

void setup()
{

Serial.begin (9600);
pinMode (buzzpin,OUTPUT); 
pinMode (greenledpin,OUTPUT );
pinMode (redledpin1 ,OUTPUT );
pinMode (redledpin2 ,OUTPUT );

pinMode (echopin,INPUT);
pinMode (trigpin, OUTPUT);

}

void loop() {
  digitalWrite (trigpin ,LOW );
  delayMicroseconds (3);
  digitalWrite (trigpin , HIGH );
  delayMicroseconds (3);
  digitalWrite (trigpin , LOW ); 

pinMode (echopin,INPUT);
long di = pulseIn (echopin , HIGH );
long distance= (di/2)/29 ;

  
 if (distance < 0.5 )
 {
  digitalWrite (redledpin1, HIGH );
   digitalWrite (redledpin2, HIGH );

  digitalWrite (buzzpin, HIGH );  
  digitalWrite (greenledpin , LOW );
  }
else 
{
   digitalWrite (greenledpin, HIGH );
  digitalWrite (buzzpin, LOW );
  digitalWrite (redledpin1, LOW);
    digitalWrite (redledpin2, LOW);

  
  
  }


  
}
