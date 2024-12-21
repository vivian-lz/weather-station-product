void setLCD(){
  lcd.setCursor(0, 0);
  delay(1000);

  float h = bme.readHumidity();
  float t = bme.readTemperature();
  float p = (bme.readPressure() / 100.0F);
  
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");


  lcd.setCursor(0, 1);
  
  lcd.print("Temperature: ");
  lcd.print(t);
  lcd.print(char(223));
  lcd.print("C");

  lcd.setCursor(0, 2);

  lcd.print("Pressure:");
  lcd.print(p);
  lcd.print(" hPa");

  lcd.setCursor(0, 3);
  lcd.print("Altitude: ");
  lcd.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
  lcd.print(" m");
}
