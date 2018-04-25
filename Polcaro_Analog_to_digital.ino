
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x = analogRead(3);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(3);
  Serial.print(x);
  Serial.print("\t");
  Serial.println(x * 0.0048828125);
  if (x > 400) {
    digitalWrite (4, HIGH);
  }
  else { 
    digitalWrite (4, LOW);
  }
   if (x > 600) {
    digitalWrite (5, HIGH);
  }
  else { 
    digitalWrite (5, LOW);
  }
   if (x > 800) {
    digitalWrite (6, HIGH);
  }
  else { 
    digitalWrite (6, LOW);
  }
  delay(100);
}
