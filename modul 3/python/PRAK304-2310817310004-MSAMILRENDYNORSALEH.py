N = int(input(""))

if 1 <= N <= 9:
    print("Satuan")
elif 11 <= N <= 19:
    print("Belasan")
elif 10 <= N <= 99:
    print("Puluhan")
elif  N >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
else:
    print("Nol")