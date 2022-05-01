int led1 = D7; 


void setup() {
  pinMode(led1, OUTPUT);
}


void loop() {
  // To blink the LED, first we'll turn it on...
  //S ...
  
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  delay(500);
  
  //A .__
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
  //M__ __
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
  //Y __ . __ __
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
  //A. __
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
  //M __ __
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(1000);

  // Wait 1 second...
  

  // And repeat!
}

