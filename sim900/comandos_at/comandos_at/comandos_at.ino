

  void setup(){
     Serial.begin(19200);

     Serial2.begin(19200);
     Serial.println("Start!...");
     Serial2.println("AT");  
  }

  void loop(){  
   if (Serial2.available())
     Serial.write(Serial2.read());    

   if(Serial.available()) 
     Serial2.write(Serial.read());
     
  }
