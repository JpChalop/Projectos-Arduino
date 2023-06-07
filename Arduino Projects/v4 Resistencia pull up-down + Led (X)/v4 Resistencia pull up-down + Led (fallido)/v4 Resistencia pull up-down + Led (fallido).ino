  // SE APAGA EL PUTO ARDUINO CUANDO APRETO EL BOTÓN EN VEZ DE PRENDERSE EL PUTO LED 
  // 6 VECES REHICE TODO 
  // NO SÉ QUE VERGA MÁS HACER

int buttonPin = 4;
int ledPin = 2;
int buttonRead;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(buttonPin);
Serial.println(buttonRead);
delay(100);
if (buttonRead == 0){
  digitalWrite(ledPin, 1);
}
else {
  digitalWrite(ledPin, 0);
}
}