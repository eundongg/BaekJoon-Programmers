function solution(num_list) {

    let sum =0;
    let multi = 1;
    
    for(let i=0;i<num_list.length;i++){
        sum += (num_list[i]);
        multi *= num_list[i];
    }
    console.log(sum**2);
    console.log(multi);
    return (sum**2>multi)? 1:0;
}