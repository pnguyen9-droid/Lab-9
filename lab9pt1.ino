int probePin = 7;   // input from probes
int ledPin = 8;     // LED output

void setup() {
  pinMode(probePin, INPUT_PULLUP); // uses internal pull-up
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int state = digitalRead(probePin);

  if (state == LOW) {     // circuit closed (connected)
    digitalWrite(ledPin, HIGH);
  } else {                // circuit open (unplugged)
    digitalWrite(ledPin, LOW);
  }
}