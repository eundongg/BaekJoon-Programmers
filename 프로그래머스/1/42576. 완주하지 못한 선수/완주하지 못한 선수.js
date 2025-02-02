function solution(participant, completion) {
    const map = new Map();
    
    for(const player of completion){
        map.set(player,(map.get(player) || 0)+1);
    }
    
    for(const player of participant){
        if(!map.get(player)) return player; // 완주 못함
        map.set(player,map.get(player)-1);
    }
}