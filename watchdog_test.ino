#include <avr/wdt.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Initializing");
  
}

void loop() {
  char incoming = 0;
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    incoming = Serial.read();
    if (incoming == ' ') {
      wdt_enable(WDTO_250MS);
      Serial.println("Entering loop");
      while (1);
    }
  }
}
