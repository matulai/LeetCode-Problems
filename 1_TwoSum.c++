/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var twoSum = function(nums, target) {
  let indices = [];
  for (let n=0; n<nums.length; n++) {
      let x = nums[n];
      for (let m=n+1; m<nums.length; m++) {
          let y = nums[m];
          if ((x+y) === target) {
              indices.push(n);
              indices.push(m);
              return indices;
          }
      }
  }
};