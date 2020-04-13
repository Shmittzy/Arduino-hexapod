int i;
void boogi()
{
  for (i = 0; i <= 15; i++)
  {
    LL8.write(ll8 - (15 - i)); //0
    LR8.write(lr8 + (30 - i)); //+15
    LR2.write(lr2 + i); //+15
    delay(10);
  }
  for (i = 0; i <= 15; i++)
  {
    LR8.write(lr8 + (15 - i)); //0
    LR5.write(lr5 + (15 - i)); //0
    LR2.write(lr2 + (15 + i)); //+30
    LL2.write(ll2 - i); //-15
    delay(10);
  }
  for (i = 0; i <= 15; i++)
  {
    LR5.write(lr5 + (15 - i));//0
    LR2.write(lr2 + (30 - i)); //+15
    LL2.write(ll2 - (15 + i)); //-30
    LL5.write(ll5 - i); //-15
    delay(10);
  }
  for (i = 0; i <= 15; i++)
  {
    LR2.write(lr2 + (15 - i));//0
    LL2.write(ll2 - (30 - i)); //-15
    LL8.write(ll8 - i); //-15
    delay(10);
  }
  for (i = 0; i <= 15; i++)
  {
    LL2.write(ll2 - (15 - i));//0
    LL8.write(ll8 - (15 + i)); //-30
    LR8.write(lr8 + i); //+15
    delay(10);
  }
  for (i = 0; i <= 15; i++)
  {
    LL8.write(ll8 - (30 - i));//-15
    LR8.write(lr8 + (15 + i));//+30
    LR5.write(lr5 + i);//+15
    delay(10);
  }
}
