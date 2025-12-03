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
            s=str(x)
            m=len(s)
            allOk=False
            # print(f"NIG: {x}")
            for n in range(1, m//2+1):
                if m%n!=0:
                    continue
                init=s[0:n]
                ok=True
                for i in range(1, m//n):
                    cur=s[i*n:(i+1)*n]
                    if init!=cur:
                        ok=False
                        break
                # print(n, cur, init)
                if ok:
                    allOk=True
                    break
            if allOk:
                ans+=x
                print(f"Hi: {x}")
print(ans)
