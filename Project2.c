#include <stdio.h>

// Binary Search algoritmas�n� uygulayan fonksiyon
int binarySearch(int arr[], int left, int right, int target) {
   while (left <= right) {
      // Dizinin orta eleman�n�n indeksi hesaplan�r
      int mid = left + (right - left) / 2;
      
      // Ortadaki eleman hedef elemana e�itse, ortadaki eleman�n indeksini d�nd�r
      if (arr[mid] == target)
         return mid;
         
      // Ortadaki eleman hedef elemandan k���kse, sol taraf� aramaya devam et
      if (arr[mid] < target)
         left = mid + 1;
         
      // Ortadaki eleman hedef elemandan b�y�kse, sa� taraf� aramaya devam et
      else
         right = mid - 1;
   }
   // Hedef eleman bulunamad�ysa -1 d�nd�r
   return -1;
}

int main() {
   int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
   int n = sizeof(dizi) / sizeof(dizi[4]);
   int hedef = 47;
   
   // Binary Search fonksiyonu �a�r�l�r ve sonu� al�n�r
   int sonuc = binarySearch(dizi, 0, n - 1, hedef);
   
   // Hedef eleman�n dizide bulunup bulunmad���na g�re ekrana ��kt� yazd�r�l�r
   if (sonuc == -1)
      printf("Hedef eleman dizi i�inde bulunamadi.\n");
   else
      printf("Hedef eleman dizi icinde index %d pozisyonunda bulundu.\n", sonuc);
      
   return 0;
}
