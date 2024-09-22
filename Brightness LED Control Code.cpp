void setup () {
  pinMode(9, OUTPUT);
  
}

void loop () {
    int pot = analogRead(A0);
    int brightness = map(pot, 0, 1023, 0, 255);
    analogWrite(9, brightness);

}