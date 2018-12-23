void show()
{
  for (int i = 0; i < 6; i++) {
    int myDelayMksek;
    if (flagBlink[i]) {
      int myMillis = millis() - blinkTimer[i];
      if (myMillis <= 1000) {
        if (myMillis < 500) {
          setNumber(previousNumber[i]);
          myDelayMksek = delaysArr[myMillis / 10];
        }
        else {
          setNumber(digits[i]);
          myDelayMksek = delaysArr[(1000 - myMillis) / 10];
        }
      }
      else {
        setNumber(digits[i]);
        flagBlink[i] = false;
        previousNumber[i] = digits[i];
      }
    }
    else {
      setNumber(digits[i]);
      myDelayMksek = 2000;
    }
    if (myDelayMksek) {// если 0, то пусть вообще не загорается
      digitalWrite(lampKeys[i], HIGH);
      delayMicroseconds(myDelayMksek);
      //потушим первый индикатор
      digitalWrite(lampKeys[i], LOW);

    }
    delayMicroseconds(3000 - myDelayMksek);
  }
}
