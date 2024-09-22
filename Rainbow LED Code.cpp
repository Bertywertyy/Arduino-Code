int timer = 10; //

void setup() {
  for (int thispin = 2; thispin < 8; thispin++) {
    pinMode(thispin, OUTPUT);
  }
}

void loop(){
    for (int thispin = 2; thispin < 8; thispin++) {
      for (int brightness = 0; brightness <= 255; brightness -= 5) {
        analogWrite(thispin, brightness);
        delay(timer);
      }
      for (int brightness = 255; brightness >= 0; brightness -= 5) {
        analogWrite(thispin, brightness);
        delay(timer);
      }
    }
}
