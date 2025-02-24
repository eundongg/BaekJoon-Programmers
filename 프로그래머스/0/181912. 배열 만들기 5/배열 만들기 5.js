function solution(intStrs, k, s, l) {
    let arr =[];
    for(num of intStrs){
        const newNum = Number(num.slice(s,s+l));
        if(newNum>k) arr.push(newNum);
    }
    return arr;
}