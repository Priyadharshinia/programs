myStr=input()
words=myStr.split()
new=[word[::-1] for word in words]
str2=" ".join(new)
print(str2)
