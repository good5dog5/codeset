
#define LED_PIN 13

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(110);
    digitalWrite(LED_PIN, LOW);
    delay(900);
}