function solution(n, slicer, num_list) {
    const a = slicer[0];
    const b = slicer[1];
    const c = slicer[2];
    let result = [];
    
    if(n===1) result=num_list.slice(0,b+1);
    if(n===2) result=num_list.slice(a);
    if(n===3) result=num_list.slice(a,b+1);
    if(n===4) result=num_list.slice(a,b+1).filter((_,idx) => idx%c ===0);
    
    return result;
    
    
}