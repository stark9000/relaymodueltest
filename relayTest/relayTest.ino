int relay = 9;

void setup() {
  pinMode(relay, OUTPUT);
}

void loop() {
  //relay on
  digitalWrite(relay, LOW);
  delay(1000);

//relay off
  digitalWrite(relay, HIGH);
  delay(1000);
}
