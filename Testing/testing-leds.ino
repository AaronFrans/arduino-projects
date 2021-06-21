int PIN_FIRST = 8;
int PIN_SECOND = 13;
int PIN_THIRD = 10;
int PIN_FOURTH = 6;

void setup()
{
    pinMode(PIN_FIRST, OUTPUT);
    pinMode(PIN_SECOND, OUTPUT);
    pinMode(PIN_THIRD, OUTPUT);
    randomSeed(analogRead(0));
}
void loop()
{
    long randomNumber = random(3);
    int chosenPin;
    switch (randomNumber)
    {
    case 0:
        chosenPin = PIN_FIRST;
        break;
    case 1:
        chosenPin = PIN_SECOND;
        break;
    case 2:
        chosenPin = PIN_THIRD;
        break;
    case 3:
        chosenPin = PIN_FOURTH;
        break;
    default:
        break;
    }

    digitalWrite(chosenPin, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1000);                   // wait for a second
    digitalWrite(chosenPin, LOW);  // turn the LED off by making the voltage LOW
    delay(1000);
    digitalWrite(PIN_FOURTH, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1000);                    // wait for a second
    digitalWrite(PIN_FOURTH, LOW);  // turn the LED off by making the voltage LOW
    delay(1000);
}
