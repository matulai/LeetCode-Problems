function mySqrt(x: number): number {
  let number = x;
  let start = Math.floor(number/2);

  while(start * start > number) {
      start = Math.floor(start/2);
  }

  while(start <= x) {
      if (start * start > x) {
          start -= 1;
          break;
      }
      if(start * start === x) {
          break;
      }
      start++;
  }
  return start;
};