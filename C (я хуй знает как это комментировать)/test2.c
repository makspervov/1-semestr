int main()
{int i, j, k, temp;
printf("\t i i^2 i^3 i^4\n\n");
for (i=1;i<10; i++)
	{for (j=1; j<5; j++)
		{temp = 1;
			for (k=0; k<j; k++)
				temp = temp*i;
				printf("%6d", temp); }
				printf ("\n"); }
return 0;
}
