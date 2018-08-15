/*
***description:Data trunction***
***author:lizhihao***
***data:2018.7.11***
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include"apue.h"
#define NUM 200000
//#define TIMES 5


int main()
{
	//statement
	int i,j,err;
	float c[NUM];
	char filename[10];
	char FILENAME[10]="1.dat";
	char prefix[30];
	char b[5]=".txt";
	int s;
	int TIMES;
    printf("please enter your desired time\n");
    scanf("%d",&TIMES);
	//TELL_PARENT(getppid());
	//WAIT_PARENT();
	//子进�?
	/*
	pid_t fork(void),t1,t2;
	int j;
	t1=fork();
	if(t1==0)
	{
	FILE *p2=fopen("wy2.dat","rb+");
	float c1[NUM];
	if(p2==NULL)
	{
		printf("open file failed");
	}
	else
	{
		fread(c1,sizeof(float),NUM,p2);
		for(int j=0;j<NUM;j++);
		{
		//	printf("%lf",c1[j]);
		}
		fclose(p2);

		freopen("subline1.dat","w",stdout);
		for(j=0;j<1000;j++);
		{
			printf("%lf\n",c1[j]);
		}
		fclose(stdout);
	}
	*/
	//open files
	
	//唤醒子进�?
	//TELL_CHILD(t1);
	//WAIT_CHILD();
	
	//重定向第二个文件
	/*freopen("lzh2.dat","w",stdout);
	for(;j<20000;j++)
	{
		printf("%lf\n",c[j]);
		}
		fclose(stdout);
		*/
	FILENAME[0]=1+'0';
	FILE *p1=fopen(FILENAME,"rb+");
	FILENAME[0]=2+'0';
	FILE *p2=fopen(FILENAME,"rb+");
	FILENAME[0]=3+'0';
	FILE *p3=fopen(FILENAME,"rb+");
	FILENAME[0]=4+'0';
	FILE *p4=fopen(FILENAME,"rb+");
	FILENAME[0]=5+'0';
	FILE *p5=fopen(FILENAME,"rb+");
	FILENAME[0]=6+'0';
	FILE *p6=fopen(FILENAME,"rb+");
	FILENAME[0]=7+'0';
	FILE *p7=fopen(FILENAME,"rb+");
	
	//rediction files
	for (s=0;s<TIMES;s++)
	{
	if(p1==NULL)
		printf("open file failed");
	else
	{
		for(i=0;i<1;i++)
		{
			fread(c,sizeof(float),NUM,p1);
			snprintf(filename,5,"%d",i+1*s+1);
			snprintf(prefix,21,"%s","./AP_data/AP1_data/");
			strcat(filename,b);
			strcat(prefix,filename);
			freopen(prefix,"w",stdout);
			for(j=0;j<NUM;j++)
				printf("%lf\n",c[j]);
		}
		fclose(stdout);
	}
	

	if(p2==NULL)
		printf("open file failed");
	else
			{
		for(i=0;i<1;i++)
		{
			fread(c,sizeof(float),NUM,p2);
			snprintf(filename,5,"%d",i+1*s+1);
			snprintf(prefix,21,"%s","./AP_data/AP2_data/");
			strcat(filename,b);
			strcat(prefix,filename);
			freopen(prefix,"w",stdout);
			for(j=0;j<NUM;j++)
				printf("%lf\n",c[j]);
		}
		fclose(stdout);
	}
	

	if(p3==NULL)
		printf("open file failed");
	else
			{
		for(i=0;i<1;i++)
		{
			fread(c,sizeof(float),NUM,p3);
			snprintf(filename,5,"%d",i+1*s+1);
			snprintf(prefix,21,"%s","./AP_data/AP3_data/");
			strcat(filename,b);
			strcat(prefix,filename);
			freopen(prefix,"w",stdout);
			for(j=0;j<NUM;j++)
				printf("%lf\n",c[j]);
		}
		fclose(stdout);
	}
	

	if(p4==NULL)
		printf("open file failed");
	else
			{
		for(i=0;i<1;i++)
		{
			fread(c,sizeof(float),NUM,p4);
			snprintf(filename,5,"%d",i+1*s+1);
			snprintf(prefix,21,"%s","./AP_data/AP4_data/");
			strcat(filename,b);
			strcat(prefix,filename);
			freopen(prefix,"w",stdout);
			for(j=0;j<NUM;j++)
				printf("%lf\n",c[j]);
		}
		fclose(stdout);
	}
	

	if(p5==NULL)
		printf("open file failed");
	else
			{
		for(i=0;i<1;i++)
		{
			fread(c,sizeof(float),NUM,p5);
			snprintf(filename,5,"%d",i+1*s+1);
			snprintf(prefix,21,"%s","./AP_data/AP5_data/");
			strcat(filename,b);
			strcat(prefix,filename);
			freopen(prefix,"w",stdout);
			for(j=0;j<NUM;j++)
				printf("%lf\n",c[j]);
		}
		fclose(stdout);
	}
	

	if(p6==NULL)
		printf("open file failed");
	else
			{
		for(i=0;i<1;i++)
		{
			fread(c,sizeof(float),NUM,p6);
			snprintf(filename,5,"%d",i+1*s+1);
			snprintf(prefix,21,"%s","./AP_data/AP6_data/");
			strcat(filename,b);
			strcat(prefix,filename);
			freopen(prefix,"w",stdout);
			for(j=0;j<NUM;j++)
				printf("%lf\n",c[j]);
		}
		fclose(stdout);
	}
	

	if(p7==NULL)
		printf("open file failed");
	else
			{
		for(i=0;i<1;i++)
		{
			fread(c,sizeof(float),NUM,p7);
			snprintf(filename,5,"%d",i+1*s+1);
			snprintf(prefix,21,"%s","./AP_data/AP7_data/");
			strcat(filename,b);
			strcat(prefix,filename);
			freopen(prefix,"w",stdout);
			for(j=0;j<NUM;j++)
				printf("%lf\n",c[j]);
		}
		fclose(stdout);
	}
	}
	fclose(p1);
	fclose(p2);
	fclose(p3);
	fclose(p4);
	fclose(p5);
	fclose(p6);
	fclose(p7);
	return 0;
}
