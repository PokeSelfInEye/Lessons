


void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, INPUT);
 
}


void motor(int direct, int speed_value) {
  if (direct == 1) {
    analogWrite(6, speed_value);
    analogWrite(5, 0);
  }
  if (direct == 2) {
    analogWrite(6, 0);
    analogWrite(5, speed_value);
  }
  if (direct == 0) {
    analogWrite(6, 0);
    analogWrite(5, 0);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead, 
  motor(, analogRead(5)/4);
  delay(3000);
  motor(BACKWARD, analogRead(5)/4);
  delay(3000);
  motor(OFF, 0);
}
