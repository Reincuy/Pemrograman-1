n = int(input())

if n == 2:
    angka1, angka2 = map(int, input().split())
    
    if angka1 > angka2:
        angka1, angka2 = angka2, angka1

    print(angka1, angka2)
elif n == 3:
    angka1, angka2, angka3 = map(int, input().split())
    
    if angka1 > angka2:
        angka1, angka2 = angka2, angka1
    if angka2 > angka3:
        angka2, angka3 = angka3, angka2
    if angka1 > angka2:
        angka1, angka2 = angka2, angka1

    print(angka1, angka2, angka3)
