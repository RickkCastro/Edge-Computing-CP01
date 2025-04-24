// Definição de LEDs, sensores e da buzina
int ledVerde = 5; 
int ledAmarelo = 6; 
int ledVermelho = 7; 
int buzzer = 2; 
int sensorLuminosidade = A0; 

// Definindo a luminosidade e os limites para alerta
int taxaLuminosidade = 0; 
int taxaAceitavel = 880 ; 
int taxaLimite = 960; 

// Configurando os pinos como saída e entrada
void setup() {
  pinMode(ledVerde, OUTPUT); 
  pinMode(ledAmarelo, OUTPUT); 
  pinMode(ledVermelho, OUTPUT); 
  pinMode(buzzer, OUTPUT); 
  pinMode(sensorLuminosidade, INPUT); 
  Serial.begin(9600); 
}
// Iniciando o loop 
void loop() {
  taxaLuminosidade = analogRead(sensorLuminosidade); 
  Serial.println(taxaLuminosidade); 

  // Definindo ifs de acordo com o valor da luminosidade
  if (taxaLuminosidade < taxaAceitavel) { 
    // Se a luminosidade estiver abaixo da taxaAceitavel:
    digitalWrite(ledVerde, HIGH); 
    digitalWrite(ledAmarelo, LOW); 
    digitalWrite(ledVermelho, LOW); 
    noTone(buzzer); 
  } 
  else if (taxaLuminosidade >= taxaAceitavel && taxaLuminosidade <= taxaLimite)  {
    // Se a luminosidade estiver entre a taxaAceitavel e a taxaLimite:
    digitalWrite(ledVerde, LOW);  
    digitalWrite(ledAmarelo, HIGH); 
    digitalWrite(ledVermelho, LOW); 
    tone(buzzer, 500); 
    delay(3000); 
    noTone(buzzer); 
  } 
  else if (taxaLuminosidade > taxaLimite) {
    // Se a luminosidade estiver acima da taxaLimite:
    digitalWrite(ledVerde, LOW); 
    digitalWrite(ledAmarelo, LOW); 
    digitalWrite(ledVermelho, HIGH); 
    tone(buzzer, 1000); 
  }

  delay(1000); // Pausa de 1 segundo antes do loop ser repetido
}