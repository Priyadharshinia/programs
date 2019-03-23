n=int(input())
val=list(map(int,input().split()))
for i in range(n):
	if val.count(val[i])==1:
		print(val[i])
