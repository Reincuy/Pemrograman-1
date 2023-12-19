import math

a, b = map(int, input("").split())
c = math.sqrt(b**2 - a**2)
tinggi = a
keliling = a + b + c
luas = 0.5 * c * a
print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
