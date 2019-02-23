n=int(input())
num=[int(a) for a in input().split()]
d=sorted(num)
for i in range(n):
	print(d[i],end=" ")
	i=i+1
	
	
