n=int(input())
val=list(map(int,input().split()))
val1=list(map(int,input().split()))
c=0
for i in range(n):
	if(val1[0]!=val[i]):
		c=c+1
	else:
		break
print(c)
