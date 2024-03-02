#include <stdio.h>

int main() {

    int n1, n2, max,ans;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    if ((max % n1 == 0) && (max % n2 == 0)) {
    printf("The LCM of %d and %d is %d.", n1, n2, max);
    }
    else{
    	ans=n1*n2;
    	printf("The LCM of%d and  %d is %d", n1, n2, ans);
    	}
    return 0;
}
