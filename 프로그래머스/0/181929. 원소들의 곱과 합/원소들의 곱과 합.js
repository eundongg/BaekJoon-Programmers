function solution(num_list) {
    
    const {sum,multi} = num_list.reduce(
        (acc,num) => {
            acc.sum += num;
            acc.multi *=num;
            return acc;
        },
        {sum:0,multi:1}
    );
    
    return (sum**2>multi)? 1:0;
}