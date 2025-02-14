function solution(n, control) {
    let result =n;
    for(char of control){
        if(char === "w") result+=1;
        else if(char === "s") result-=1;
        else if(char === "d") result+=10;
        else if(char === "a") result-=10;        
    }
    return result;
}