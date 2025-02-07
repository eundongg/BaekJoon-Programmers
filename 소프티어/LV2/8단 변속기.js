const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let input = [];

rl.on("line",function(line){
    input = line.split(" ").map(Number);    
}).on("close",function(){

    if(input.join(" ") == "1 2 3 4 5 6 7 8") console.log("ascending");
    else if(input.join(" ") == "8 7 6 5 4 3 2 1") console.log("descending");
    else console.log("mixed");
})
    
