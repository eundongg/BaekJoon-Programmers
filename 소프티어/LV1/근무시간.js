const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

const input = [];
let totalWork = 0;

rl.on("line", function(line){
    input.push(line);
}).on("close", function(){
    for(let i=0;i<input.length;i++){
        let [start,end] = input[i].split(" ");

        let [startHour,startMin] = start.split(":").map(Number);
        let [endtHour,endMin] = end.split(":").map(Number);

        let calc = ((endtHour-startHour)*60) + (endMin-startMin);
        totalWork += calc;
    }
    console.log(totalWork);
});
