function solution(start_num, end_num) {
    return Array.from({ length: start_num - end_num + 1 }, (_, i) => start_num - i);
}