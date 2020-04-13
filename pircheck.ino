bool pir() {
  inputPin = digitalRead(8);
  Serial.println(inputPin);
  return(inputPin);
}
