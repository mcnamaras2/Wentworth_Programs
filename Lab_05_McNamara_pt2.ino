char ByteToSend;
int Sending;
String readString;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);  
  Serial.println(); 
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available() ){
  ByteToSend = Serial.read();
  readString += ByteToSend;
  delay (2);
}
 if (readString.length() > 0)
 {
   Sending = readString.toInt();
 }
 readString = "";
 Serial.write(Sending);
}


