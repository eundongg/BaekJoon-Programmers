function solution(num_list) {

    const pre = num_list[num_list.length-2];
    const post = num_list[num_list.length-1];
    
    if(pre<post) num_list.push(post-pre);
    else num_list.push(post*2);
    return num_list;
}