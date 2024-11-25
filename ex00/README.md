# 📘 rush00.c Kodu Açıklaması

Bu C programı, konsolda bir çerçeve (dikdörtgen) çizen bir fonksiyon seti içerir. Çerçevenin genişliği, yüksekliği ve kullanılan karakterleri özelleştirmek mümkündür. Bu, çerçeve kenarlarının ve köşelerinin görsel olarak farklı karakterlerle oluşturulmasını sağlar.

---

## 📋 Kodun Yapısı

### 1. `ft_putchar(char c)`
- **Görev:** Belirtilen karakteri konsola yazdırır.
- **Kullanım:** Tüm karakter yazdırma işlemleri bu fonksiyonla yapılır.

### 2. `draw_line(int lar, char left, char midd, char right)`
- **Görev:** Belirli bir satırı verilen karakterlerle çizer.
- **Parametreler:**
  - `lar`: Satırın uzunluğu.
  - `left`: Satırın başında kullanılacak karakter.
  - `midd`: Satırın ortasında kullanılacak karakter.
  - `right`: Satırın sonunda kullanılacak karakter.
- **Çalışma Mantığı:**
  - Satırın ilk karakteri `left`, son karakteri `right`, ortadaki karakterler ise `midd` olarak atanır.

### 3. `rush(int x, int y)`
- **Görev:** Çerçeveyi verilen genişlik (**x**) ve yükseklik (**y**) değerlerine göre çizer.
- **Parametreler:**
  - `x`: Çerçevenin yatay uzunluğu.
  - `y`: Çerçevenin dikey uzunluğu.
- **Çalışma Mantığı:**
  - İlk satır ve son satır: Köşe karakterleri (`o`) ve kenar çizgileri (`-`) ile oluşturulur.
  - Orta satırlar: Yan kenarlar (`|`) ve içi boşluk (` `) ile doldurulur.
  - Genişlik veya yükseklik sıfırdan küçükse hiçbir şey çizilmez.

---
