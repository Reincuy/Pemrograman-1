# Meminta pengguna untuk memasukkan bilangan bulat N
N = int(input("Masukkan sebuah bilangan bulat: "))

# Mengecek apakah N adalah bilangan positif, negatif, atau nol
if N > 0:
    print("Positif")
elif N < 0:
    print("Negatif")
else:
    print("Nol")
