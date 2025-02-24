function solution(my_string, queries) {
    let arr = my_string.split(""); // 문자열을 바로 배열로 변환
    for(const[s,e] of queries){
        arr = [
            ...arr.slice(0,s),
            ...arr.slice(s,e+1).reverse(),
            ...arr.slice(e+1)
            ];
    }
    return arr.join("");
    
}