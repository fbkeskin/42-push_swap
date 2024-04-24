<div align="center">
	<h1>🔗Push_swap</h1>
  
  <img src="https://i.redd.it/owgc2k3v0yz91.jpg"/>
  
  <p align="center">
	<h4>Because Swap_push isn’t as natural.<br>
  </p></h4>
  <p align="center">
    <i>Push swap projesi etkili bir algoritma projesidir: veriler sıralanmalıdır. Elinizde bir integer array, 2 stack ve bu stackleri manipüle etmek için bir instruction setiniz var.</i>
  </p>
  <br />
	<img src="https://img.shields.io/badge/norminette-passing-success"/>
	<a href="https://developer.apple.com/library/archive/documentation/Performance/Conceptual/ManagingMemory/Articles/FindingLeaks.html"><img src="https://img.shields.io/badge/leaks-none-success" /></a>
	<img src="https://img.shields.io/badge/-84%2F125-success?logo=42&logoColor=fff" />
</div>

## 📝Usage
1. Repo'yu clone'layın:

```bash
git clone 
```

2. Makefile'ı kullanarak source kodu derleyin:
```bash
make
```

> 1 executable file oluşmaktadır: `push_swap`.

3. Sıralamak istediğiniz sayıları argüman olarak girin ve `push_swap` binary dosyasını execute ederek programı başlatın:
```shell
$>./push_swap 2 1 3 6 5 8
ra
pb
pb
pb
ra
ra
pa
pa
pa
pb
ra
pb
pb
ra
pb
pa
pa
pa
pa
pb
ra
pb
ra
pb
pb
pa
pa
pa
pa
$>./push_swap 7 essek 4 1
Error
```

> Program, sayıları sıralar ve stack manipülasyonu için kullanılan instruction'lar ekrana basılır. Ekranda gördüğünüz instruction'lar argüman listenize uygulandığında küçükten büyüğe doğru sıralanmış bir array elde edersiniz. Argüman olarak integer girilmemesi durumunda error handling ile ekrana hata mesajı basılır.

4. Farklı argüman listesiyle çalışmak için 3. adımı tekrarlayın.


## 🔎Instruction Sets
| Instructions  | Descriptions  |
|:-------------:|---------------|
| sa            | A stack'inin en üstteki iki elemanı birbirileri ile yer değiştirir.   |
| sb            | B stack'inin en üstteki iki elemanı birbirileri ile yer değiştirir.   |
| ss            | sa ve sb instructions aynı aynda çalıştırılır.                        |
| pa            | B stack'inin en üstündeki elemanı A stack'inin en üstüne koyulur.     |
| pb            | A stack'inin en üstündeki elemanı B stack'inin en üstüne koyulur.     |
| ra            | A stack'inin bütün elemanlarını bir yukarı kaydırılır.                |
| rb            | B stack'inin bütün elemanlarını bir yukarı kaydırılır.                |
| rr            | ra ve rb instructions aynı aynda çalıştırılır.                        |
| rra           | A stack'inin bütün elemanlarını bir aşağı kaydırılır.                 |
| rrb           | B stack'inin bütün elemanlarını bir aşağı kaydırılır.                 |
| rrr           | rra ve rrb instructions aynı aynda çalıştırılır.                      |




