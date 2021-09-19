#include <stdio.h>

int main() {
	int kelgan_ishchilar_soni;
	int kelmagan_ishchilar_soni;
	int jami_ishchilar_soni;
	
	printf("Kelgan ishchilar sonini kiriting:");
	scanf("%d", &kelgan_ishchilar_soni);
	printf("Kelmagan ishchilar sonini kiriting:");
	scanf("%d", &kelmagan_ishchilar_soni);
	
	
	jami_ishchilar_soni = kelgan_ishchilar_soni + kelmagan_ishchilar_soni;
	
	printf("%d", jami_ishchilar_soni);
	
	
	return 0;
}
