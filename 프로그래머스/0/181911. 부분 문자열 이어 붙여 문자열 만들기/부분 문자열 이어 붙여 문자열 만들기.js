function solution(my_strings, parts) {
    return my_strings.map((str,idx)=> str.slice(parts[idx][0],parts[idx][1]+1)).join(""); 
}
// 00 01
// 10 11
// 20 21
// 30 31
