function solution(number) {
    const sum = number.toString().split("").map(Number).reduce((acc,cur)=>acc+cur,0);
    const spare = sum%9;
    return spare;
}