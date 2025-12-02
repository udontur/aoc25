import math

def index(x, n):
    return (x//10**n)%10

ans=0
with open("input.txt", "r") as inputFile:
    chainData = inputFile.read()
    datas=chainData.split(",")
    for data in datas:
        l, r=data.split("-")
        l=int(l)
        r=int(r)
        for x in range(l, r+1):
            n=int(math.log10(x))
            if(n%2==0):
                continue
            ok=True
            for i in range(0, n//2+1):
                a=index(x, n-i)
                b=index(x, n//2-i)
                if a!=b:
                    ok=False
                    break
            if ok:
                print(x)
                ans+=x
print(ans)
