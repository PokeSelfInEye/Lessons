void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x = analogRead(3);
  int y = digitalRead(5);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(3);
  int y = digitalRead(5);
  Serial.print(x);
  Serial.print("\t");
  Serial.println(x * 0.0048828125);

  if (x > 200 and x < 400 and y == HIGH) {
    digitalWrite (4, HIGH);
  }
  else {
    digitalWrite (4, LOW);
  }
}
