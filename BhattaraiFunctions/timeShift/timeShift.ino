void timeShift() {
  int bufSecond = Clock.getSecond();
  if (second != bufSecond) {
    second = bufSecond;
    previousNumber[4] = digits[4];
    previousNumber[5] = digits[5];
    digits[4] = second / 10;
    digits[5] = second % 10;
    if (second == 0) {
      minute = Clock.getMinute();
      previousNumber[2] = digits[2];
      previousNumber[3] = digits[3];
      digits[2] = minute / 10;
      digits[3] = minute % 10;
      if (minute == 0) {
        hour = Clock.getHour(h12, PM);
        previousNumber[0] = digits[0];
        previousNumber[1] = digits[1];
        digits[0] = hour / 10;
        digits[1] = hour % 10;
      }
    }
  }
}
