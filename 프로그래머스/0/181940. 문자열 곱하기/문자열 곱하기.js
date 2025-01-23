function solution(my_string, k) {
    var answer = '';
    answer += my_string.repeat(k);
    // for(let i=0;i<k;i++){
    //     answer += my_string;
    // }
    return answer;
}