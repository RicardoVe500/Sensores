int Sensor1 = A1;
int Sensor2 = A0;

void setup() {
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  Serial.begin(9600);
}

int Residuo [4]= {0,0,0,0};
void loop() {
 int Valor1 =1234; //analogRead(Sensor1);
  //int Residuo = Valor1%10;
  for(int i = 0; i<=3; i++ ){
    Residuo[i]= Valor1%10;
    Valor1 = Valor1/10;
     
    }
    
    for(int i = 3; i>=0; i--){
    Serial.write(Residuo[i]);
    }
    //Serial.println(Residuo[i]);
    //Serial.println("*");
  //Serial.write(Valor1);
  delay(1000);
}
