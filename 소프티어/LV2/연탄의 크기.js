const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let input =[];
let warmer = [];
rl.on("line",function(line){
    input.push(line);
}).on("close",function(line){
    const house = parseInt(input[0]);
    warmer = input[1].split(" ").map(Number);

    let count =Array(1000).fill(0); // 선언과 동시에 초기화
    for(num of warmer){
        for(let i =2;i<=num;i++){
            if(num%i == 0) {
                count[i]++;
            }
        }
    }
    
    const best = Math.max(...count); //spread 연산
    console.log(best);
});
