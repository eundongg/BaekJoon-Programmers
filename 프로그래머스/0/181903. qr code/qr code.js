function solution(q, r, code) {
    
    return [...code].filter((_,index)=> index%q===r).join('');
}