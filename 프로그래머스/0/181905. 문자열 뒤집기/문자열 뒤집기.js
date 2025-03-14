function solution(my_string, s, e) {
    const result =[
        ...my_string.slice(0,s),
        ...my_string.slice(s,e+1).split('').reverse(),
        ...my_string.slice(e+1)        
    ];
    return result.join('');
}