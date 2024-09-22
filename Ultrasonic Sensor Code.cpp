#define ECHOPIN 6
#define TRIGPIN 7

void setup() {
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
}

void loop() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  int distance = pulseIn(ECHOPIN, HIGH);
  distance = distance / 58;
  if (distance <= 0) {
    distance = 0;
  }
  Serial.print(distance);
  Serial.println("cm");
  delay(1);
}
