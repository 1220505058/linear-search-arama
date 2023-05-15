#include <stdio.h>

int main() {
    int n, i, key, flag = 0;
    
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Dizinin elemanlarini giriniz:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &key);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            flag = 1;
            break;
        }
    }
    
    if(flag) {
        printf(" dizinin %d. elemani olarak bulundu.\n", key, i+1);
    } else {
        printf("%d dizide bulunamadi.\n", key);
    }
    
    return 0;
}
