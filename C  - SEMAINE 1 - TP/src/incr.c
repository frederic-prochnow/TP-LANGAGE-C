int incr(int t[8])
{
  int i;
  for (i = 0; i<8; i = i+1) {
    if(t[i] == 0) {
      t[i] = 1;
      return 1;
    }
    if(t[i] ==  1) {
      t[i] = 0;
    }
  }
  return 0;
}
