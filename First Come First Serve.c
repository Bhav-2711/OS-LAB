#include<stdio.h>
main()
{
	int i,bt[20],wt[20],tat[20],n;
	float wtavg,tatavg;
	printf("\n Enter the number of processes--",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Brust Time of the process%d--",i+1);
		scanf("%d",&bt[i]);
	}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=wt[i]+bt[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	printf("\tPROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME\n");
	for(i=0;i<n;i++){
		printf("\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
   }
	printf("\nThe Average Waiting Time--%f",(wtavg/n));
	printf("\nThe Average Turnaround Time--%f",(tatavg/n));
}
