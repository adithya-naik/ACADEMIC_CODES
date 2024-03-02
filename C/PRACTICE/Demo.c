
#include<stdio.h>
int t, j, x, y, z;
scanf("%d",&t);
	for(j=0;j<t;j++){
	    scanf("%d%d%d",&x,&y,&z);
	    if(y>z&&y<x){
	        printf("%d\n",y);
	    }
  }
}
