int val = 0;

void setup() {
  Serial.begin(9800);
}

void loop() {
  int start = 0;
  int pluse = 0;
  bool flag;
  while (true) {
    pluse = 0;
    flag = false;
    while (millis() < start + 1000) {
      if (analogRead(0) && flag == false) {
        pluse++;
        flag = true;
      }
      else if (flag) {
        flag = false;
      }
    }
    Serial.print(pluse);
    start += 500;
  }
}
