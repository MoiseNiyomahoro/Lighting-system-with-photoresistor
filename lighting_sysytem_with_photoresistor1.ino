#define ldr A0
#define led 8

int value;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(ldr);
  Serial.println(value);

  if (value < 200) {
    digitalWrite(led, HIGH);
  } else {             
    digitalWrite(led, LOW);
  }

  delay(200);
}