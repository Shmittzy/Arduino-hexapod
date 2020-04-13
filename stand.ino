void stand()
{
  for (int i = 60; i < 81; i = i + 5)
  {
    LR2.write(lr2 + i);
    LR5.write(lr5 + i);
    LR8.write(lr8 + i);
    LL2.write(ll2 - i);
    LL5.write(ll5 - i);
    LL8.write(ll8 - i);
    delay(50);
  }
  delay(500);
  LR1.write(140);
  LR4.write(140);
  LR7.write(160);
  LL1.write(40);
  LL4.write(40);
  LL7.write(20);
  delay(250);
  for (int i = 60; i > -1; i = i - 1)
  {
    LR1.write(lr1 + i);
    LR2.write(lr2 + i);
    LR4.write(lr4 + i);
    LR5.write(lr5 + i);
    LR7.write(lr7 + i);
    LR8.write(lr8 + i);
    LL1.write(ll1 - i);
    LL2.write(ll2 - i);
    LL4.write(ll4 - i);
    LL5.write(ll5 - i);
    LL7.write(ll7 - i);
    LL8.write(ll8 - i);
    delay(5);

  }
}

