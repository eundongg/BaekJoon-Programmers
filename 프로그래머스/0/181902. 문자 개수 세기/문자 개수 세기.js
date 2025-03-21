function solution(my_string) {
    let result = Array(52).fill(0);
    
    for(let char of my_string){
        let charCode = char.charCodeAt(0); 
        
        if (char >= 'A' && char <= 'Z') {
            result[charCode - 'A'.charCodeAt(0)]++; 
        } else if (char >= 'a' && char <= 'z') {
            result[charCode - 'a'.charCodeAt(0) + 26]++; 
        }
    }
    return result;
}