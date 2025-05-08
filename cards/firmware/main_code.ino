int buttonPin = 2;
int ledPin = 13;
int score = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    score++;
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    Serial.print("Score: ");
    Serial.println(score);
    delay(1000);
  }
}
