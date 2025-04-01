function solution(arr) {
    const idx = arr.map((value,index)=> (value===2? index:-1))
        .filter(index => index!==-1);
    
    if(idx.length===0) return [-1];
    
    return arr.slice(idx[0],idx[idx.length-1]+1);    
}