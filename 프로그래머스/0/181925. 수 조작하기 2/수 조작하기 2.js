function solution(numLog) {
    let result ="";
    for(let i=0;i<numLog.length;i++){
        let diff = numLog[i+1]-numLog[i];
        if(diff==1) result+="w";
        else if(diff==-1) result+="s";
        else if(diff==10) result+="d";
        else if(diff==-10) result+="a";        
    }
    return result;
}