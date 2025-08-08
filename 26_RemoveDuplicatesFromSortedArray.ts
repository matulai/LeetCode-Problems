function removeDuplicates(nums: number[]): number {
  let x: number = -Infinity;
  let p: number = 0;
  for(let i: number = 0; i < nums.length; i++) {
      if (nums[i] > x) {
          nums[p] = nums[i];
          x = nums[p];
          p++;
      }
  }
  return p;
};