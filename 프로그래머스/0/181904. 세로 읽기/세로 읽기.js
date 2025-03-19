function solution(my_string, m, c) {
    let arr =[];
    for(let i =0;i<my_string.length;i+=m){
        arr.push(my_string.slice(i,i+m));
    }
    return arr.map(row => row[c-1]).join('');
}