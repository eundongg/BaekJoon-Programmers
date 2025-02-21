function solution(a, b, c, d) {
    const dice =[a,b,c,d];
    const count ={};
    
    for(let num of dice) count[num] = (count[num]||0) +1;
    const entries = Object.entries(count).sort((a,b)=>b[1]-a[1]);
    
    if (entries.length === 1) { 
        return 1111 * entries[0][0];
    } 
    if (entries.length === 2){
        const [[p,pCount],[q,qCount]] = entries;
        if(pCount===3) return (10*Number(p) + Number(q))**2;
        if(pCount===2) return (Number(p) + Number(q)) * Math.abs(Number(p) - Number(q));
    }
    if(entries.length === 3){
        const [[p,_],[q],[r]] = entries;
        return Number(q) * Number(r);
    }
    if(entries.length === 4){
        return Math.min(...dice);
    }
}