# BILB2001 Yazılım Geliştirme I — 2026-2027

**Modern C++20 ile nesneye yönelik programlama ve kendi veri yapılarınız**

Karadeniz Teknik Üniversitesi | Fen Fakültesi, Bilgisayar Bilimleri | 2026-2027 Güz Dönemi

Öğretim üyesi: Doç. Dr. Tolga Berber

Materyaller her hafta eklenir. Her haftanın durumu `haftaNN` etiketiyle sabitlenir; yalnız o haftaya kadarki içeriği görmek için ilgili etiketi seçin.

## Haftalık Plan

| Hafta | Konu | Ders Notu | Slayt | Lab | Cheatsheet | Quiz | Kod |
|---|---|---|---|---|---|---|---|
| 1 | C'den C++'a Geçiş | [PDF](ders-notu/Hafta01_Cden_Cppa_Gecis.pdf) | [Slayt](slides/Hafta01_Cden_Cppa_Gecis.pdf) | [Lab](labs/Lab01_Cden_Cppa_Gecis.pdf) | [Özet](cheatsheets/Hafta01_Cden_Cppa_Gecis.pdf) | [Quiz](quizzes/Hafta01_Ogrenci.pdf) | [Kod](kod_ornekleri/hafta01) |
| 2 | Fonksiyonlar ve Bellek Modeli | [PDF](ders-notu/Hafta02_Fonksiyonlar_ve_Bellek_Modeli.pdf) | [Slayt](slides/Hafta02_Fonksiyonlar_ve_Bellek_Modeli.pdf) | [Lab](labs/Lab02_Fonksiyonlar_ve_Bellek_Modeli.pdf) | [Özet](cheatsheets/Hafta02_Fonksiyonlar_ve_Bellek_Modeli.pdf) | [Quiz](quizzes/Hafta02_Ogrenci.pdf) | [Kod](kod_ornekleri/hafta02) |
| 3 | Sınıflar: Kapsülleme ve Kitap Sınıfı | [PDF](ders-notu/Hafta03_Siniflar.pdf) | [Slayt](slides/Hafta03_Siniflar.pdf) | [Lab](labs/Lab03_Siniflar.pdf) | [Özet](cheatsheets/Hafta03_Siniflar.pdf) | [Quiz](quizzes/Hafta03_Ogrenci.pdf) | [Kod](kod_ornekleri/hafta03) |

## Klasörler

| Klasör | İçerik |
|---|---|
| `ders-notu/` | Ders kitabının haftalık bölümleri |
| `slides/` | Haftalık ders sunumları |
| `labs/` | Lab föyleri |
| `cheatsheets/` | Tek sayfalık haftalık özetler |
| `quizzes/` | Haftalık quizler (öğrenci sürümü) |
| `kod_ornekleri/` | Ders notu ve lab föylerindeki çalışan kod örnekleri; her hafta klasöründeki `README.md` çalıştırma adımlarını verir |

## Kod Örneklerini Derleme

Örnekler C++20 ile yazılmıştır. Her `kod_ornekleri/haftaNN/` klasörü bir `CMakeLists.txt` içerir.

```bash
# Tekil dosya
clang++ -std=c++20 -Wall -o merhaba kod_ornekleri/hafta01/merhaba.cpp
./merhaba

# Haftanın tüm örnekleri (CMake)
cd kod_ornekleri/hafta03
cmake -S . -B build
cmake --build build
./build/kitap_demo
```

Windows'ta Visual Studio 2022 veya MSYS2 içindeki `g++ -std=c++20` aynı komutlarla çalışır.

## Lisans

Bu materyaller akademik kullanım için hazırlanmıştır. Ayrıntılar için [LICENSE](LICENSE) dosyasına bakın.
