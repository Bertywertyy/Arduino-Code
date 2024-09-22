int pot;
void setup () {
  pinMode(9, OUTPUT);
  
}

void loop () {
    pot = analogRead(A0);
    digitalWrite(9, HIGH);
    delay(pot);
    digitalWrite(9, LOW);
    delay(pot);
}

