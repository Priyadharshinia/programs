a=input()
l=list(a)
dict = {i:l.count(i) for i in l}
maximum = max(dict, key=dict.get)  
print(maximum)
