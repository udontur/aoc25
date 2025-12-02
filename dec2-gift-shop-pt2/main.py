import math

def index(x, n):
    return (x//10**n)%10

ans=0
with open("sample.txt", "r") as inputFile:
    chainData = inputFile.read()
    datas=chainData.split(",")
    for data in datas:
        l, r=data.split("-")
        l=int(l)
        r=int(r)
        for x in range(l, r+1):
            n=int(math.log10(x))
            ok=True
            m=[0]*10
            for i in range(0, n+1):
                a=index(x, i)
                m[a]+=1
            mk=[]
            for i in range(0, 10):
                # print(m[i], end=" ")
                if(m[i]>0):
                    mk.append(m[i])
            for i in range(1, len(mk)):
                if mk[i-1]==1 or mk[i]==1:
                    ok=False
                    break
                if mk[i-1]!=mk[i]:
                    ok=False
                    break
            if ok:
                print(x)
                ans+=x
print(ans)
