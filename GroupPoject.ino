int input = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  input = digitalRead(5);

  if(input == HIGH) {
    digitalWrite(8, HIGH);
    
  }
  else if (input == LOW) {
    digitalWrite(8, HIGH);
  }
}
