# 🎧 AIMP Medya Kontrol Cihazı (Arduino Pro Micro)

Bu proje, **Arduino Pro Micro** ve 5 adet fiziksel buton kullanılarak geliştirilen bir **USB HID medya kontrol cihazıdır**. Bilgisayarınıza takarak **AIMP**, **Spotify**, **VLC** gibi medya oynatıcılarda fiziksel kontrol imkanı sunar — üstelik ek bir yazılım gerektirmez!

## 🔹 Özellikler
- ▶️ **Oynat / Duraklat** (Play / Pause)  
- ⏮️ **Önceki / Sonraki Parça** (Previous / Next Track)  
- 🔉 **Ses Aç / Ses Kıs** (Volume Up / Down)  
- 💻 **HID klavye emülasyonu ile sürücüsüz çalışır**

> 🎵 Ses kontrolü için F14 (Ses Kıs) ve F15 (Ses Aç) tuşları kullanılır. Bazı sistemlerde bu tuşlar doğrudan çalışmayabilir. Gerekirse AutoHotkey veya PowerToys ile yeniden atanabilir.

## 🔌 Buton Pinleri (Arduino Pro Micro)
| İşlev             | Pin No |
|------------------|--------|
| Önceki Parça     | 10     |
| Oynat / Duraklat | 15     |
| Sonraki Parça    | 16     |
| Sesi Kıs         | 7      |
| Sesi Aç          | 8      |

## 🖼️ Devre Şeması
Bağlantı şeması `fritzing.png` dosyasında görselleştirilmiştir.

---

# 🎧 AIMP Media Controller (Arduino Pro Micro)

This project is a **USB HID media controller** built using an **Arduino Pro Micro** and 5 physical buttons. Once connected to your computer, it allows hardware control of media players like **AIMP**, **Spotify**, and **VLC** — with **no extra software required**!

## 🔹 Features
- ▶️ **Play / Pause**  
- ⏮️ **Previous / Next Track**  
- 🔉 **Volume Up / Volume Down**  
- 💻 **Works natively as a HID keyboard device**

> 🎵 Volume control is done via `F14` (Volume Down) and `F15` (Volume Up) keys. If they don't work on your system, you can remap them using tools like AutoHotkey or PowerToys.

## 🔌 Button Pin Mapping (Arduino Pro Micro)
| Function         | Pin No |
|------------------|--------|
| Previous Track   | 10     |
| Play / Pause     | 15     |
| Next Track       | 16     |
| Volume Down      | 7      |
| Volume Up        | 8      |

## 🖼️ Circuit Diagram
Wiring diagram is included as `fritzing.png`.
