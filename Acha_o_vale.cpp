#include <iostream>
using namespace std;

int main() {

int const tam = 255;  
int pico1, pico2, vale, i, max, indice1, indice2, maior, indMaior, maiorDistancia, IndVale;
int VetCopia[tam];
int Vet[] ={0,0,0,0,0,0,1,8,10,24,79,95,136,151,209,261,304,432,777,784,784,713,772,690,675,752,776,729,801,830,864,845,820,900,883,861,859,875,869,899,917,897,859,947,952,983,955,1019,1017,1032,1024,1069,1043,1050,1050,972,986,929,925,1006,908,921,915,919,935,898,911,907,893,857,807,819,848,819,831,865,846,832,921,816,792,772,772,748,733,666,669,653,678,648,616,626,578,600,593,536,489,503,502,437,433,441,409,376,342,358,320,312,340,333,293,299,269,262,230,226,213,226,214,203,227,221,216,199,189,223,199,211,228,204,198,225,210,212,219,262,252,259,225,281,261,222,260,260,272,249,288,296,283,306,287,322,325,336,329,362,334,352,385,415,407,468,464,463,518,467,499,520,482,512,546,556,507,556,565,588,673,618,607,586,629,651,541,549,531,508,531,512,517,527,561,542,593,633,727,742,641,643,585,587,656,616,688,792,887,912,1034,1086,1000,923,871,771,687,541,351,264,253,211,189,192,170,163,137,112,125,128,103,87,83,110,97,88,101,98,221,93,56,35,33,55,41,77,63,58,63,41,36,33,8,6,5,7,18,38,60,8};


  max = Vet[0];
  indice1 = 0;
  for(i = 1; i <= tam; i++){ 
    if(Vet[i] >= max){
       max = Vet[i];
       indice1 = i;
    }
    
  }
  pico1 = max;

  for(i = 0; i <= tam; i++){
    VetCopia[i] = Vet[i];
  }
  
    for(i = indice1-1; i >= 0; i--){
      if((VetCopia[i] < VetCopia[i-1])){
        VetCopia[i-1] = VetCopia[i];
      }
    }
  
  for(i = indice1; i <= tam-1; i++){
      if((VetCopia[i] < VetCopia[i+1])){
        VetCopia[i+1] = VetCopia[i];
      }
    }


  indMaior = 0;
  maior = Vet[0] - VetCopia[0];
  for(i = 0; i <= tam; i++){
    if((maior < (Vet[i] - VetCopia[i])) && (i != indice1)){
      maior = Vet[i] - VetCopia[i];
      indMaior = i;
    }
  }


  pico2 = Vet[indMaior];
  indice2 = indMaior;

    cout << "\n\n Pico1: " << pico1 << " indice do pico1: " << indice1 << "\n";
    cout << "\n pico2: " << pico2 << " indice do pico2: " << indice2 << "\n";

  vale = Vet[indice1];
  if(indice1 < indice2){
      for(i = indice1; i <= indice2; i++){
        if(Vet[i] < vale){
          vale = Vet[i];
          IndVale = i;
        }
       
      }
  }else{
      for(i = indice2; i <= indice1; i++){
        if(Vet[i] < vale){
        vale = Vet[i];
        IndVale = i;
        }
        
      }
  }

  cout << "\n vale: " << vale << " indice do vale: " << IndVale;

}
