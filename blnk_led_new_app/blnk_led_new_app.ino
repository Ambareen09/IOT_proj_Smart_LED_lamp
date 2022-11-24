/*New blynk app project
 * https://srituhobby.com
 */
 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "4ex8PF_rvVcz0WPED8DzRQqvBpjYlK_s" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "DebjeeT's realme 5s";//Enter your WIFI name
char pass[] = "D9903889037d";//Enter your WIFI password


BLYNK_WRITE(V0) {
  digitalWrite(D0, param.asInt());
}

void setup() {
  pinMode(D0, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 8080);
}

void loop() {
  Blynk.run();
}
