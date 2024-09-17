def solution(a, b):
    answer = ''
    int1 = str(a)+str(b)
    int2 = str(b)+str(a)
    if(int1>=int2):
        answer = int(int1)
    else :
        answer = int(int2)
    
    return answer