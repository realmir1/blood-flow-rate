# Blood Flow Rate Calculator

This project is a C++ program designed to calculate blood flow rate in a vessel based on Poiseuille's Law. It takes necessary parameters from the user, calculates the blood flow rate, and displays the results in a tabular format.

## Usage

The program takes the following parameters from the user:

- **P1:** Initial pressure value (mmHg)
- **P2:** Final pressure value (mmHg)
- **r:** Vessel radius (m)
- **n:** Blood viscosity (Pa·s)
- **L:** Vessel length (m)

As long as the entered values are positive, the program calculates the blood flow rate using the following formula:

\[ Q = \frac{(P1 - P2) \times \pi \times r^4}{8 \times n \times L} \]

The calculated value is displayed on the screen, followed by a table showing the input values.

## Running the Program

To run this program, follow these steps:

1. **Ensure that you have a C++ compiler installed** (e.g., g++, clang, MSVC).
2. Save the code as a `.cpp` file (e.g., `blood_flow.cpp`).
3. Compile the program using the following command in a terminal or command prompt:
   ```sh
   g++ -o blood_flow blood_flow.cpp
   ```
4. Run the compiled program:
   ```sh
   ./blood_flow
   ```
5. Enter the required values to calculate the blood flow rate.

## Example Output

```
Enter the pressure difference (P2-P1), vessel radius, blood viscosity, and vessel length in order:
Initial pressure (mmHg) = 100
Final pressure (mmHg) = 50
Vessel Radius (m) = 0.005
Blood Viscosity (Pa·s) = 0.004
Vessel Length (m) = 0.1
Blood flow rate (m3/s) = 0.00245

Pressure Difference  Vessel Radius   Blood Viscosity   Vessel Length  
50                  0.005           0.004             0.1
```

## Details and Explanation

This program is based on the **Hagen-Poiseuille Equation**, which is used to determine the volumetric flow rate of a fluid in a cylindrical pipe under laminar flow conditions. Since the human circulatory system follows similar principles, this formula provides an approximation of blood flow.

Key points to consider:
- **Vessel radius (r) is a critical variable:** Since it is raised to the fourth power in the formula, small changes can lead to significant differences in flow rate.
- **Blood viscosity (n) is a determining factor:** As viscosity increases, flow rate decreases.
- **Higher pressure difference (P1 - P2) results in a higher flow rate.**

## Future Improvements

This program can be enhanced by adding the following features:
- Improved error checking for user inputs.
- Predefined options for different blood viscosity values.
- A graphical user interface (GUI) to visualize the results.
- Inclusion of additional physiological parameters related to blood flow.

## License
This project is licensed under the MIT License. It is free to use, modify, and distribute.







---


# Kan Akış Hızı Hesaplayıcı

Bu proje, Poiseuille Yasasına dayanarak bir damardaki kan akış hızını hesaplamak için geliştirilmiş bir C++ programıdır. Kullanıcıdan gerekli parametreleri alarak kan akış hızını hesaplar ve tablo halinde gösterir.

## Kullanım

Program, aşağıdaki parametreleri kullanıcıdan alarak kan akış hızını hesaplar:

- **P1:** İlk basınç değeri (mmHg)
- **P2:** Son basınç değeri (mmHg)
- **r:** Damar yarıçapı (m)
- **n:** Kanın viskozitesi (Pa*s)
- **L:** Damar uzunluğu (m)

Girilen değerler pozitif olduğu sürece, program aşağıdaki formülü kullanarak kan akış hızını hesaplar:

\[ Q = \frac{(P1 - P2) \times \pi \times r^4}{8 \times n \times L} \]

Hesaplanan değer ekrana yazdırılır ve ardından tablo formatında giriş değerleri gösterilir.

## Çalıştırma

Bu programı çalıştırmak için aşağıdaki adımları takip edebilirsiniz:

1. **C++ derleyicinizin yüklü olduğundan emin olun** (Örneğin: g++, clang, MSVC).
2. Kodu bir .cpp dosyası olarak kaydedin (örneğin, `kan_akisi.cpp`).
3. Terminal veya komut satırında aşağıdaki komutu çalıştırarak derleyin:
   ```sh
   g++ -o kan_akisi kan_akisi.cpp
   ```
4. Derlenen programı çalıştırın:
   ```sh
   ./kan_akisi
   ```
5. İstenilen değerleri girerek kan akış hızını hesaplayabilirsiniz.

## Örnek Çıktı

```
Basınç farkını (P2-P1), Damar Yarıçapını, Kanın Viskozitesini ve Damar Uzunluğu değerlerini sırasıyla giriniz
İlk basınç değeri (mmHg) = 100
Son basınç değeri (mmHg) = 50
Damar Yarıçapı (m) = 0.005
Kanın Viskozitesi (Pa*s) = 0.004
Damar Uzunluğu (m) = 0.1
Kan akış hızınız (m3/s) = 0.00245

Basınç Farkı    Damar Yarıçapı  Kanın Viskozitesi  Damar Uzunluğu  
50              0.005           0.004             0.1
```

## Detaylar ve Açıklamalar

Bu program, **Hagen-Poiseuille Denklemi** temel alınarak oluşturulmuştur. Bu denklem, laminer akış koşullarında bir boru içerisindeki akışkanın debisini belirlemek için kullanılır. İnsan damar sistemi de benzer prensiplere dayandığı için bu formül kan akışının yaklaşık olarak hesaplanmasını sağlar.

Dikkat edilmesi gereken noktalar:
- **Damar yarıçapı (r) önemli bir değişkendir:** Formülde dördüncü kuvvetle çarpıldığı için küçük değişiklikler bile büyük etkilere neden olabilir.
- **Kanın viskozitesi (n) belirleyici bir faktördür:** Viskozite arttıkça akış hızı azalacaktır.
- **Basınç farkı (P1 - P2) büyük olursa, akış hızı artar.**

## Geliştirme Önerileri

Bu programı daha da geliştirmek için aşağıdaki ek özellikler eklenebilir:
- Kullanıcıdan alınan verilerin daha iyi doğrulanması için hata kontrollerinin artırılması.
- Farklı viskozite değerleri için önceden tanımlı seçenekler sunulması.
- GUI (Grafik Kullanıcı Arayüzü) ile görselleştirilmiş bir versiyon oluşturulması.
- Kan akışı ile ilgili daha fazla fiziksel parametrenin dahil edilmesi.

## Lisans
Bu proje MIT Lisansı ile lisanslanmıştır. Özgürce kullanılabilir, değiştirilebilir ve dağıtılabilir.

