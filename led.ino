void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode (10, OUTPUT);
}

void loop() {
  digitalWrite(10, LOW);
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
digitalWrite(10, HIGH);
delay(1000);

}
