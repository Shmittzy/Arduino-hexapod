void sit()
{
      for (int i = 1; i < 61; i = i + 5)
      {
        LR2.write(lr2 + i);
        LR5.write(lr5 + i);
        LR8.write(lr8 + i);
        LL2.write(ll2 - i);
        LL5.write(ll5 - i);
        LL8.write(ll8 - i);
        delay(50);
      }
}
