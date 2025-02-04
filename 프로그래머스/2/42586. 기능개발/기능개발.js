function solution(progresses, speeds) {
    let answer = [];
    
    let days = progresses.map((progress,idx) => Math.ceil((100-progress)/speeds[idx]));
    
    let maxDay = days[0];
    let count =0;
    
    for(let day of days){
        if(day<=maxDay){
            count++;
        }else{
            answer.push(count);
            count=1;
            maxDay = day;
        }        
    }
    answer.push(count); // 마지막 값
    
    return answer;    
}