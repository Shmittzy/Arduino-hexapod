void left()
{
  LR2.write(lr2 + 50);
  LR8.write(lr8 + 50);
  LL5.write(ll5 - 50);
  delay(100);

  LR3.write(lr3 + 20);
  LR9.write(lr9 + 20);
  LL6.write(ll6 + 20);
  delay(100);

  LR2.write(lr2);
  LR8.write(lr8);
  LL5.write(ll5);
  delay(100);



  LL2.write(ll2 - 50);
  LL8.write(ll8 - 50);
  LR5.write(lr5 + 50);
  delay(100);

  LL3.write(ll3 + 20);
  LL9.write(ll9 + 20);
  LR6.write(lr6 + 20);
  delay(100);

  LL2.write(ll2);
  LL8.write(ll8);
  LR5.write(lr5);
  delay(100);

  LL3.write(ll3);
  LL9.write(ll9);
  LR6.write(lr6);
  LL6.write(ll6);
  LR3.write(lr3);
  LR9.write(lr9);
  delay(100);
}

