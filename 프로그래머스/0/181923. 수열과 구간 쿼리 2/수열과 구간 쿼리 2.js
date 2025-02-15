function solution(arr, queries) {
    let result =[];

    queries.forEach(([s,e,k])=>{
        let temp =[];
        for(let i=s;i<=e;i++){
            if(arr[i]>k) {
                temp.push(arr[i]);
            }else if(arr[i]<=k && i==e && temp.length == 0){
                result.push(-1);
            }
            if(i==e && temp.length != 0){
                result.push(Math.min(...temp))
            }
        }
    });
    return result;
}