def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

batas = 0
maks = -100000
minim = 100000

bilangan = int(input())
Listnilai = input().split()

while batas < bilangan:
    nilai = int(Listnilai[batas])
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print(f"{maks} {minim}")
