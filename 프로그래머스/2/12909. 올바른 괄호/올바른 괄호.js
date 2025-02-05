function solution(s){
    let cnt=0;
    
    for(char of s){
        if(char === '(') cnt++;
        else cnt --;
        
        if(cnt<0) return false
    }
    return cnt===0;
}