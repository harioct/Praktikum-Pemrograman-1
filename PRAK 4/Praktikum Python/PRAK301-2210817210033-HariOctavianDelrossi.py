a=int(input(""))
b=int(input(""))
c=int(input(""))
if a>b and a>c:
    if b>c:
        print(c,b,a)
    else:
        print(b,c,a) 
elif b>a and b>c:
    if a>c:
        print(c,a,b)
    else:
        print(a,c,b)
else:
    if a>b:
        print(b,a,c)
    else:
        print(a,b,c)