function solution(arr) {
    const idx = arr.map((value,index)=> (value===2? index:-1))
        .filter(index => index!==-1);
    let newArr = [];
    if(idx.length===0) return [-1];
    else{
        for(let i =0;i<idx.length-1;i++){
            newArr = newArr.concat(arr.slice(idx[i],idx[i+1]));
        }
        newArr.push(arr[idx[idx.length-1]]);
    
    }
    return newArr;    
}