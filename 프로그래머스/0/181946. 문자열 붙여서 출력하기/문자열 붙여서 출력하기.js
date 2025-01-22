const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = line.split(' ');
}).on('close', function () {
    console.log(input.join(''))
    //join()이면 기본 구분자(쉼표)가 삽입됨
    //join('')이면 구분자 없이 문자열 연결
    //join('-')이면 -을 구분자로 사용
});