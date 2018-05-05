

//Exercicio 3

const int inputPin = 2 ;





void setup() {
  pinMode(13, OUTPUT); //Yellow led
  pinMode(10, OUTPUT); //Green led
  pinMode(12, OUTPUT); //Red led 
  pinMode(inputPin, INPUT); //button 
}

void loop() 
{
 int val = digitalRead(inputPin);
 if (val == HIGH)
 {
 digitalWrite(10, HIGH);
 digitalWrite(13, LOW );
 digitalWrite(12, LOW);  
 
 delay(5000);
 digitalWrite(10, LOW);
 digitalWrite(13, HIGH);
 digitalWrite(12, LOW);  
 
 delay(3000);
 digitalWrite(10, LOW);
 digitalWrite(13, LOW );
 digitalWrite(12, HIGH);  
 
 delay(5000);
  }
 else 
 {
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(1000);
 }
  
}
