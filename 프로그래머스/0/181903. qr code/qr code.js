function solution(q, r, code) {
    let result = [];
    
    [...code].forEach((element,index)=>{
        if(index%q===r) result.push(element);
    });
    return result.join('');
}