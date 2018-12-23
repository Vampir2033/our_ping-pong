void updateDate() {
  digits[0] = (Clock.getYear() / 10) % 10;
  digits[1] = Clock.getYear() % 10;
  digits[2] = Clock.getMonth(Century) / 10;
  digits[3] = Clock.getMonth(Century) % 10;
  digits[4] = Clock.getDate() / 10;
  digits[5] = Clock.getDate() % 10;
}
