n=int(input()) 
f1=0 
f2=1 
for i in range(n): 
    f3=f1+f2 
    print(f2,end=" ") 
    f1=f2 
    f2=f3
