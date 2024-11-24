//
//  main.cpp
//  PROJECT4(KANAKISHIZI)
//
//  Created by Ali Emir Sertbaş on 24.11.2024.
//

#include <iostream>
#include <cmath>
#include <string>
#include<iomanip>
using namespace std;




int main()
{
    
    float P1 ;
    float P2 ;
    float r ;
    float n ;
    float L ;
    const float PI = 3.14;
   
;
    
    while(true){
        std::cout<<" basınç farkını(P2-P1), Damar Yarıçapını, Kanın Viskozitesini ve Damar Uzunluğu değerlerini sırasıyla giriniz\n";
        
        
        std::cout<<"İlk basınç değeri(mmHg) = " ;std::cin>> P1;
        std::cout<<"son basınç değeri(mmHg) = " ;std::cin>> P2;
        std::cout<<"Damar Yarıçapı(m) = " ;std::cin>> r;
        std::cout<<"Kanın Viskozitesi(Pa*s) = ";std::cin>> n;
        std::cout<<"Damar Uzunluğu(L) = ";std::cin>> L;
        
        
        if (P1>0 && P2>0 && r> 0 && n>0 && L>0){
            std::cout<<"kan akış hızınız(m3/s)= " << ((P1 - P2) * PI * std::pow(r, 4)) / (8 * n * L);
            std::cout<<"\n";
            
            
            cout<<left<<setw(15)<<" Basınç Farkı "<<setw(15)<<" Damar Yarıçapı "<<setw(15)<<" Kanın Viskozitesi "<<setw(15)<<" Damar Uzunluğu "<<std::endl;
            cout<<left<<setw(15)<<(P1 - P2)<<setw(15)<<r<<setw(10)<<n<<setw(15)<<L<<std::endl;
            break;
        }
        
        else
            std::cout<<"Lütfen değerlerinizi kontrol ediniz";
      
    }
    
    

    
}

