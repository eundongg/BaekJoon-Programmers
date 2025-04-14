function solution(num_list) {
    const even = num_list.reduce((acc, val, idx)=> idx%2===0? acc+val: acc, 0);
    const odd = num_list.reduce((acc, val, idx)=> idx%2!==0? acc+val: acc, 0);
    return even>=odd? even: odd;
}