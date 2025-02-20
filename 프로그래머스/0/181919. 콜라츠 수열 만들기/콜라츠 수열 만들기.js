function solution(n) {
    let result =[];
    while(n!=1){
        result.push(n);
        if(n%2==0){
            n = n/2;
        }else{
            n = (3*n) +1;
        }
    }
    result.push(n);
    return result;
}