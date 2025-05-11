/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
  let k = nums.length - 1;
  for(let i = k; i >= 0; i--) {
      if (nums[i] == val) {
          nums[i] = nums[k];
          nums.pop();
          k--
      }
  }
  return k + 1;
};