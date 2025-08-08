function strStr(haystack: string, needle: string): number {
  let p: number = 0;
  for(let i: number = 0; i < haystack.length; i++) {
      if (haystack[i] === needle[p]) {
          p++;
      } else {
          i = i - p; 
          p = 0;
      }
      if(p === needle.length) {
          return i - (p - 1);
      }
  }
  return -1;
};