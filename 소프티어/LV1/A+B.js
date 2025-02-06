const readline = require("readline"); 
//readline 모듈을 가져옴

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
//readline.createInterface()로 입력을 받을 인터페이스를 생성
//input: process.stdin 표준 입력
//output: process.stdout 표준 출력
//테스트 케이스를 여러줄 받을 때 

let input =[];

rl.on("line",function(line){
    // line 이벤트는 사용자가 한 줄(\n) 입력할 때마다 실행됨됨
    input.push(line);
}).on("close", function(){
    // 입력 스트림이 종료되면 실행되는 이벤트트
    let testCase = parseInt(input[0]);
    // 문자열로 저장된 input[0]을 숫자로 변환하기
    // input[0]="5" --> testCase = 5

    for(let i =1;i<=testCase;i++){
        let [A,B] = input[i].split(" ").map(Number); // 숫자로 변환
        console.log(Case #`${i}: ${A+B}`);
    }
})