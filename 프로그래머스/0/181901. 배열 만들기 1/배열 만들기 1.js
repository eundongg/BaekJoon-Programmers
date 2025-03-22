function solution(n, k) {
    return [...Array(n)].map((_, i) => i + 1).filter(num => num % k === 0);
}