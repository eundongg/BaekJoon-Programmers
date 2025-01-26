function solution(a, d, included) {
    var answer = 0;
    for(let i=0;i<included.length;i++){
        answer += (included[i]==1? a:0);
        a += d;
    }
    return answer;
}