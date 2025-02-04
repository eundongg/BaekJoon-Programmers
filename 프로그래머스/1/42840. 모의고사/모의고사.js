function solution(answers) {
    var answer = [];
    const first = [1, 2, 3, 4, 5];
    const second = [2, 1, 2, 3, 2, 4, 2, 5];
    const third = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
    
    const scores = [0,0,0];
    
    answers.forEach((answer,idx)=>{
        if(answer === first[idx%first.length]) scores[0]++;
        if(answer === second[idx%second.length]) scores[1]++;
        if(answer === third[idx%third.length]) scores[2]++;
    })
    
    const maxScore = Math.max(...scores);
    
    return scores.map((score,idx)=> (score === maxScore? idx+1:null)).filter(num=>num!=null);

}