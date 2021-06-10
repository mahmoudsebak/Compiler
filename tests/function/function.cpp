int s(int x, int y)
{
  return x + y;
}

void m()
{
  int a = s(10, 20);
  a = s(a, a);
}

exit