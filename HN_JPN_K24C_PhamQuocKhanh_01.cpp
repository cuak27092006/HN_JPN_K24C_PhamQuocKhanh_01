#include <stdio.h>

int main() {
    int Mang[100];
	int n = 0;
	int chon;
	int them, vitrithem;
	int vitrixoa;
    int max = Mang[0];
    int timkiem, check = -1;


    do {
        printf("\n---MENU---\n");
        printf("1. Nhap so phan tu va gia tri cua mang \n");
        printf("2. In ra gia tri cac phan tu trong mang \n");
        printf("3. Ðem so luong cac so nguyen to co trong mang\n");
        printf("4. Tim gia tri nho thu hai trong mang\n");
        printf("5. Them phan tu\n");
        printf("6. Xoa phan tu \n");
        printf("7. Sap xep mang theo thu tu giam dan\n");
        printf("8. Tim kiem xem phan tu trong mang\n");
        printf("9. Xoa nhung phan tu trung nhau trong mang\n");
        printf("10.Dao nguoc thu tu cua cac phan tu co trong mang \n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                printf("Nhap so luong phan tu cho mang: ");
               	scanf("%d", &n);
                printf("Nhap cac gia tri cho tung phan tu cho mang:\n ");
			    for(int i=0; i<n;i++){
				printf("Nhap gia tri cua phan tu thu %d cho mang: ", i+1);
				scanf("%d", &Mang[i]);
			    }
                break;

            case 2:
                for(int i=0; i<n;i++){
				printf(" phan tu thu %d cho mang:%d ", i+1, Mang[i]);
				printf("\n");
			    }
                break;

            case 3: 
                for (int i = 1; i < n; i++) {
                if (Mang[i] > max) max = Mang[i];
                }
                printf("Gia tri lon thu hai trong mang la: %d\n", max);
                break;
            
            case 4:
              
                break;

            case 5: 
                printf("Nhap gia tri muon them moi vao mang: ");
			    scanf("%d",&them);
			    if(vitrithem<0 || vitrithem > n){
				printf("Vi tri them khong hop le\n");
			    }else {
				for (int i = n; i > vitrithem; i--) {
       				Mang[i] = Mang[i - 1];
    			}
    			Mang[vitrithem]=them;
    			n++;
		        }
			    for(int i =0; i<n;i++){
				printf("%d", Mang[i]);
			    }
			    printf("\n");
                break;

            case 6: 
           	    printf("Nhap vao vi tri ban muon xoa: ");
			    scanf("%d", &vitrixoa);
			    if(vitrixoa <0 || vitrixoa>n){
				printf("So ban nhap khong hop le. Vui long thu lai!");
			    }
			    for(int i =vitrixoa; i<n-1;i++){
				Mang[i]=Mang[i+1];
			    }
			    n--; 
			    for(int i =0; i<n;i++){
				printf("%d", Mang[i]);
			    }
			    printf("\n");
                break;

            case 7:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (Mang[i] > Mang[j]) {
                            int temp = Mang[i];
                            Mang[i] = Mang[j];
                            Mang[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", Mang[i]);
                }
                printf("\n");
                break;

            case 8: 
                printf("Nhap gia tri can tim: ");
                scanf("%d", &timkiem);
                for (int i = 0; i < n; i++) {
                    if (Mang[i] == timkiem) {
                        check = i;
                        break;
                    }
                }
                if (check != -1) {
                    printf("Gia tri %d nam o vi tri: %d\n", timkiem, check);
                } else {
                    printf("Khong tim thay gia tri %d trong mang.\n", timkiem);
                }
                break;
                
            case 9: 
            
                break;
                
            case 10: 
            
                break;

            case 11:
                printf("Thoat chuong trinh\n");
                break;

                default:
                printf("Lua chon khong hop le!\n");
                printf("Vui long nhap lai! \n");
        }

    } while (chon != 11);
    return 0;
}


    

