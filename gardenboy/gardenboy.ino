void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val;
  val = analogRead(0);
  Serial.print(val);
  Serial.println();
  delay(100);
}
