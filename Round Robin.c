#include<stdio.h>
main()
{
	int i,bu[20],wu[20],tat[20],j,k,n,ct[20],t,max;
	float att=0,awt=0,temp=0;
	printf("Enter the number of processes--",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Burst Time of the process%d--",i+1);
		scanf("%d",&bu[i]);
		ct[i]=bu[i];
	}
	printf("Enter the size of the slice--",t);
	scanf("%d",&t);
	max=bu[0];
	for(i=1;i<n;i++){
		if(max<bu[i]){
		max=bu[i];
	}
	}
	for(j=0;j<(max/t)+1;j++){
	   for(i=0;i<n;i++){
        	if(bu[i]!=0){
	          if(bu[i]<=t){
		         tat[i]=temp+bu[i];
		         temp=temp+bu[i];
		         bu[i]=0;
	           }
	           else{
		          bu[i]=bu[i]-t;
		          temp=temp+t;
		      }
		   }
	    }
	}
	for(i=0;i<n;i++){
	wu[i]=tat[i]-ct[i];
	att+=tat[i];
	awt+=wu[i];
}
	printf("\tPROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME\n");
	for(i=0;i<n;i++){
		printf("\t%d\t\t%d\t\t%d\t\t%d\n",i+1,ct[i],wu[i],tat[i]);
   }
	printf("\nThe Average Waiting Time--%f",(awt/n));
	printf("\nThe Average Turnaround Time--%f",(att/n));
}
