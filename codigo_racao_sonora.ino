// Pinos do sensor ultrassônico
const int trigPin = 9;
const int echoPin = 10;

// Pino do buzzer
const int buzzerPin = 8;

// Pino do led
const int ledPin = 13;

// Variáveis para distância
long duration;
int distance;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);     // TRIG é saída
  pinMode(echoPin, INPUT);      // ECHO é entrada
  pinMode(buzzerPin, OUTPUT);   // buzzer é saída
  Serial.begin(9600);           // Inicia comunicação serial
}

void loop() {
  // Envia pulso ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lê o tempo do retorno do pulso
  duration = pulseIn(echoPin, HIGH);

  // Calcula a distância em cm
  distance = duration * 0.034 / 2;

  // Exibe no Monitor Serial
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Emite sons conforme a distância
  if (distance > 100) {
    noTone(buzzerPin); // Muito longe, sem som
    delay(1000);
  } else if (distance > 50) {
    tone(buzzerPin, 500); // Bip grave e lento
    digitalWrite(ledPin, HIGH);
    delay(150);
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    delay(400);
  } else if (distance > 30) {
    tone(buzzerPin, 600); // Bip grave e semi lento
    digitalWrite(ledPin, HIGH);
    delay(200);
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    delay(500);
  } else if (distance > 15) {
    tone(buzzerPin, 700); // Bip médio e rapido
    digitalWrite(ledPin, HIGH);
    delay(100);
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    delay(400);
  } else if (distance < 15) {
    noTone(buzzerPin);
    delay(1000);
  } else {
    tone(buzzerPin, 1000); // Muito perto, som e led desligados para evitar incomodar
  }
}