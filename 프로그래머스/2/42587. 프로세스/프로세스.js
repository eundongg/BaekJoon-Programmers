function solution(priorities, location) {
    
    let queue = priorities.map((priority, index)=>[priority, index]);
    let count =0;
    
    while(queue.length){
        let current = queue.shift();
        
        if(queue.some(item=>item[0]>current[0])){
            queue.push(current);
        }else{
            count++;
            if(current[1]===location) return count;
        }
    }
        

}