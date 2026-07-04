const int led=8,button=2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  digitalWrite(led, digitalRead(button));
}
