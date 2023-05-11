#include <stdio.h>

// Binary Search algoritmasýný uygulayan fonksiyon
int binarySearch(int arr[], int left, int right, int target) {
   while (left <= right) {
      // Dizinin orta elemanýnýn indeksi hesaplanýr
      int mid = left + (right - left) / 2;
      
      // Ortadaki eleman hedef elemana eþitse, ortadaki elemanýn indeksini döndür
      if (arr[mid] == target)
         return mid;
         
      // Ortadaki eleman hedef elemandan küçükse, sol tarafý aramaya devam et
      if (arr[mid] < target)
         left = mid + 1;
         
      // Ortadaki eleman hedef elemandan büyükse, sað tarafý aramaya devam et
      else
         right = mid - 1;
   }
   // Hedef eleman bulunamadýysa -1 döndür
   return -1;
}

int main() {
   int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
   int n = sizeof(dizi) / sizeof(dizi[4]);
   int hedef = 47;
   
   // Binary Search fonksiyonu çaðrýlýr ve sonuç alýnýr
   int sonuc = binarySearch(dizi, 0, n - 1, hedef);
   
   // Hedef elemanýn dizide bulunup bulunmadýðýna göre ekrana çýktý yazdýrýlýr
   if (sonuc == -1)
      printf("Hedef eleman dizi içinde bulunamadi.\n");
   else
      printf("Hedef eleman dizi icinde index %d pozisyonunda bulundu.\n", sonuc);
      
   return 0;
}
