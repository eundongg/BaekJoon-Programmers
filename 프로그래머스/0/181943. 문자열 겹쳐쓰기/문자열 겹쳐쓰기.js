function solution(my_string, overwrite_string, s) {
    var answer = '';
    let before = my_string.slice(0,s);
    let after = my_string.slice(s+overwrite_string.length);
    answer = before+overwrite_string+after;
    return answer;
}