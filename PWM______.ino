#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  
  int period = 1000; 
  int maxDuty = 100; 
  int minDuty = 0;  

  for (int duty = minDuty; duty <= maxDuty; duty++) {
    set_duty(duty);
    delay(10);      
  }
  for (int duty = maxDuty; duty >= minDuty; duty--) {
    set_duty(duty);
    delay(10);   
  }
}


void set_period(int period) {
 
  if (period < 100 || period > 10000) {
    return;
  }
}

void set_duty(int duty) {
 
  if (duty < 0 || duty > 100) {
  }

  int period = 1000;
  int onTime = (period * duty) / 100;
  int offTime = period - onTime; 

  digitalWrite(PIN_LED, HIGH);
  delayMicroseconds(onTime);   
  digitalWrite(PIN_LED, LOW);  
  delayMicroseconds(offTime);    
}
