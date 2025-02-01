function solution(nums) {
    
    const unique = new Set(nums).size;
    const div = nums.length/2;
    
    return Math.min(unique,div);
}