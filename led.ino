void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode (10, OUTPUT);
 pinMode (4, OUTPUT);
}

void loop() {
  digitalWrite(4, LOW);
digitalWrite(LED_BUILTIN, HIGH); /*liga vermelha e desliga amarela*/
delay(2000);
digitalWrite(LED_BUILTIN, LOW); 
digitalWrite(10, HIGH);/*liga verde e desliga vermelha*/
delay(2000);
digitalWrite(4, HIGH);/*liga amarela e desliga verde*/
digitalWrite(10, LOW);
delay(1000);

}
