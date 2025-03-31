function solution(arr, idx) {
    return arr.findIndex((num,i) => i>=idx && num===1);
}