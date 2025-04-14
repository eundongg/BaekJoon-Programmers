function solution(num_list) {
    const [even,odd] = num_list.reduce(
        ([even,odd], val, idx)=> 
        idx%2===0? [even + val, odd] : [even, odd + val], [0,0]
    );
    return Math.max(even,odd);
}