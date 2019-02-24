n=input()
c=0
v=len(n)
for i in n:
	if(i!=" "):
		c=c+1
if(v==c):
	print("Yes")
else:
	print("No")
