detik = int(input(""))

hari = detik // 86400
detik = detik % 86400
jam = detik // 3600  
detik = detik % 3600
menit = detik // 60  
detik = detik % 60

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")
