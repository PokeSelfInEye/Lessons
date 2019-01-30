void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(analogRead(5));
  Serial.print("\t");
  Serial.println(analogRead(4));
  if ((analogRead(5) >= 528) && (analogRead(4) != 524)) {
    analogWrite(6, analogRead(4)/4);
    digitalWrite(5, LOW);
  }
  else if ((analogRead(5) <= 520) && (analogRead(4) != 524)) {
    digitalWrite(6, LOW);
    analogWrite(5, analogRead(4)/4);
  }
  else{
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  }
}
