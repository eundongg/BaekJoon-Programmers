def solution(my_string, overwrite_string, s):
    answer = ''
    new_str = my_string[:s]
    last_str = my_string[s+len(overwrite_string):]
    answer = new_str + overwrite_string + last_str

    # answer = new_str+overwrite_string
        
    return answer