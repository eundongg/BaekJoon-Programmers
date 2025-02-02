function solution(arr)
{
    const newArray = [];
    
    let temp = -1;
    for(const num of arr){
        if(temp!=num){
            newArray.push(num);
            temp = num;
        }
    }
    
    return newArray;
}