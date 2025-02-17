function solution(l, r) {
    let result =[];
    
    function dfs(num){
        if(num>r) return;
        if(num>=l) result.push(num);
        
        dfs(num*10+5);
        dfs(num*10+0);
    }
    dfs(5);
    
    return result.length>0? result.sort((a,b)=>a-b):[-1];
}