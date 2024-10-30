#include <Arduino.h>
#include <string_char.h>

void setup() {
    Serial.begin(115200);
    Serial.println("Main init");
    string_char_tasks();

    Serial.println("Main init done");
}

void loop() {

}
