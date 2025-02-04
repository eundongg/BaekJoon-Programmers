function solution(clothes) {
    let map = new Map();
    
    for(let [name,type] of clothes){
        map.set(type,(map.get(type)||0)+1);
    }
    
    let answer =1;
    for(let count of map.values()){
        answer *= (count+1);
    }
    
    return answer -1;
}