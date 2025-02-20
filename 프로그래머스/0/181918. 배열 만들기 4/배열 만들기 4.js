function solution(arr) {
    var stk = [];
    let i =0;
    
    while(i<arr.length){
        let len = stk.length;
        if(len == 0) {
            stk.push(arr[i]);
            i++
        }else{
            if(stk[len-1]<arr[i]){
                stk.push(arr[i]);
                i++;
            }else{
                stk.pop();
            }
        }         
    }
    
    return stk;
}