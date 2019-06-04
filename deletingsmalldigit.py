from itertools import combinations
a,b=map(int,input().split())
l=len(str(a))
c=list(combinations(str(a),l-b))
c=(sorted(v))
n="".join(v[0])
print(n)
