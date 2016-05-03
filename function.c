extern int a, b;
int times;
static int c=0;
int add()
{
	c++;
	return  a+b;
	}
int calltime()
{
	times=c;
return times;
}
int product()
{
	return a*b;
	}