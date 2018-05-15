int Sensor1 = A1;
int Sensor2 = A0;

void setup() {
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int Valor1 = analogRead(Sensor1);
  Serial.println(Valor1);
  delay(1000);
}
