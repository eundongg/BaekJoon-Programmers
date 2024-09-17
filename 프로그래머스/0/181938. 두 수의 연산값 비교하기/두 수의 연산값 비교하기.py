def solution(a, b):
    answer = 0
    var1 = str(a) + str(b)
    var2 = 2*a*b
    
    if (int(var1)>= var2) : 
        answer = int(var1)
    else :
        answer = int(var2)
        
    return answer