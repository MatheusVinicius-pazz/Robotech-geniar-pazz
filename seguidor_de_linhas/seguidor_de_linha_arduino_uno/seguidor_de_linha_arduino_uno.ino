int motorA1 = 2;
int motorA2 = 13;

int motorB1 = 13;
int motorB2 = 11;

int sensor1 = 6;
int sensor2 = 9;
int sensor3 = 10;
int sensor4 = 11;
int sensor5 = 5;

#define NUM_SENSOR 5
int valorSensores[NUM_SENSOR];

int velocidade = 140;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);

  Serial.begin(9600);
}

void leituraSensores() {
  valorSensores[0] = digitalRead(sensor1);
  valorSensores[1] = digitalRead(sensor2);
  valorSensores[2] = digitalRead(sensor3);
  valorSensores[3] = digitalRead(sensor4);
  valorSensores[4] = digitalRead(sensor5);
}
void frente() {
  analogWrite(motorA1, velocidade);
  digitalWrite(motorA2, LOW);

  analogWrite(motorB1, velocidade);
  digitalWrite(motorB2, LOW);
}
void loop() {
  leituraSensores();

  if(va






  
  /*
  // Imprime os valores dos sensores
  for (int i = 0; i < NUM_SENSOR; i++) {
    Serial.print("Sensor ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(valorSensores[i]);
  }
  
  delay(5000);
  */
}



void esquerda() {
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);

  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
}

void direita() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);

  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
}