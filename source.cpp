int USCLN(int a, int b)
{
	//USCLN
	if(b==0)
		return a;
	return USCLN(b,a%b);
}