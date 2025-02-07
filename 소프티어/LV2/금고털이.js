const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let input=[];
let metal=[];

rl.on("line", function(line){
    input.push(line);
}).on("close",function(){
    const [W,N] = input[0].split(" ").map(Number);
    let remainingWeight = W;
    let totalPrice = 0;

    for(let i=1;i<=N;i++){
        let [M,P] = input[i].split(" ").map(Number);
        metal.push([M,P]);
    }

    metal.sort((a,b)=>b[1]-a[1]);

    for(let i=0;i<N;i++){
        let [M,P] = metal[i];

        if(remainingWeight >=M){
            totalPrice += M*P;
            remainingWeight -= M;
        }else{
            totalPrice += remainingWeight*P;
            break;
        }
    }
    console.log(totalPrice);
})