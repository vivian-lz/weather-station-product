void setRGB(){
  float t = bme.readTemperature();
   if(t < 16){
    digitalWrite(bluePin, HIGH);
    digitalWrite(greenPin, LOW);
   
  }else if(t < 20){
    //cyan (blue + green)
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
  
  }else if(t < 24){
    //green by turning off blue
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, HIGH); 
    digitalWrite(redPin, LOW);
    
  }else if(t < 28){
    //yellow
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
   
  }else if(t < 31){
    //magenta
    digitalWrite(bluePin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  
  }else{
    digitalWrite(bluePin, LOW);
    digitalWrite(redPin, HIGH);
  }
}
