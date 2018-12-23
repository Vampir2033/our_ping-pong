void dateMode() {
  updateDate();
  while (true) {
    show();
    if (Clock.getSecond() < 3 && !Clock.getMinute() && !Clock.getHour(h12, PM))
      updateDate();
    if (pushedKey = pushButton()) {
      if (pushedKey == 1) {
        updateTime();
        mainMode = true;
        return;
      }
      else if (pushedKey == 3)
        navigate(diverKey);
      else if (pushedKey == 2)
        navigate(setupKey);
    }
  }
}
