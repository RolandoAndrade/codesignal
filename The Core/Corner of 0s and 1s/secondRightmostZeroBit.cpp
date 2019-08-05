int secondRightmostZeroBit(int n) {
  return ~(n |= -~n) & -~n;
}
