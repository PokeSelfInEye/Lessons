#define FORWARD 1
#define BACKWARD 2
#define OFF 0


void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void motor(int direct) {
  if (direct == 1) {
    analogWrite(6, 100);
    analogWrite(5, 0);
  }
  if (direct == 2) {
    analogWrite(6, 0);
    analogWrite(5, 100);
  }
  if (direct == 0) {
    analogWrite(6, 0);
    analogWrite(5, 0);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  motor(FORWARD);
  delay(3000);
  motor(BACKWARD);
  delay(3000);
}
