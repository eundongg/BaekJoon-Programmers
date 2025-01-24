function solution(n) {
    var answer = 0;
    if(n%2===0){
        for(let i=n;i>0;i--){
            if(i%2===0)
            answer += Math.pow(i,2);
        }
    }else {
        for(let i=n;i>0;i--){
            if(i%2===1)
            answer += i;
        }
        
    }
    return answer;
}