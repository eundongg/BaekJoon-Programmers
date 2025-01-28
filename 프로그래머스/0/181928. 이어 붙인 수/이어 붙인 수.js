function solution(num_list) {
    
    const {oddSum,evenSum} = num_list.reduce((acc,num)=> {
        if(num%2==1) acc.oddSum += num;
        else acc.evenSum += num;
        return acc;
    },{oddSum:"",evenSum:""});
    
    return Number(oddSum)+Number(evenSum);
}