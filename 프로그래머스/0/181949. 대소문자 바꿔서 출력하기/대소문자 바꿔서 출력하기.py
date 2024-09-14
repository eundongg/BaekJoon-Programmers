str = input()
result = ""

for char in str:
    if  char.islower():
        result += char.upper()
    else :
        result += char.lower()
        
print(result)
    