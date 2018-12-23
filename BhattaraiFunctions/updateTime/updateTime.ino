void updateTime(){
  second = Clock.getSecond();
  minute = Clock.getMinute();
  hour = Clock.getHour(h12, PM);
  previousNumber[0] = [0] = hour/10;
  previousNumber[1] = digits[1] = hour%10;
  previousNumber[2] = digits[2] = minute/10;
  previousNumber[3] = digits[3] = minute%10;
  previousNumber[4] = digits[4] = second/10;
  previousNumber[5] = digits[5] = second%10;
}
