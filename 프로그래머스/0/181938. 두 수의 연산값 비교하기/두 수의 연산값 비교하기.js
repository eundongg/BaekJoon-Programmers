function solution(a, b) {
    var answer = 0;
    answer = Math.max(Number(`${a}${b}`), 2*a*b);
    return answer;
}