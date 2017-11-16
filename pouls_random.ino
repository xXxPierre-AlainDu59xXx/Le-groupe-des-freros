int pouls = random(70,85);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1200);
  pouls = random(pouls-1,pouls+2);
  Serial.println(pouls);
}
