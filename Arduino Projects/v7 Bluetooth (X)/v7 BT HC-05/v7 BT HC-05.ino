int estado = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) {
    estado = Serial.read();
}

  if(estado =='a'){
    digitalWrite(13,HIGH);
  }
   if(estado =='b'){
    digitalWrite(13,LOW );
   }    

}
  
